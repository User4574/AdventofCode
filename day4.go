package main

import (
	"bytes"
	"crypto/md5"
	"fmt"
	"strconv"
)

func hash(secret []byte, x int64) [16]byte {
	str := strconv.AppendInt(secret, x, 10)
	return md5.Sum(str)
}

func check(hash [16]byte, target []byte, length int) bool {
	str := []byte(fmt.Sprintf("%x", hash))
	return bytes.Equal(str[:length], target[:length])
}

func main() {
	secret := []byte("iwrupvqb")
	target := []byte("000000")
	x := int64(1)
	got5, got6 := false, false

	for !(got5 && got6) {
		h := hash(secret, x)
		if !got5 && check(h, target, 5) {
			fmt.Println("Lowest number for 5-zeroes hash:", x)
			got5 = true
		}
		if !got6 && check(h, target, 6) {
			fmt.Println("Lowest number for 6-zeroes hash:", x)
			got6 = true
		}
		x += 1
	}
}
