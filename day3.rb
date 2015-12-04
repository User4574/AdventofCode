#!/usr/bin/env ruby

map = {:onlysanta => Hash.new(0), :robosanta => Hash.new(0)}
map[:onlysanta][[0,0]] += 1
map[:robosanta][[0,0]] += 1

onlysanta = {:northing => 0, :easting => 0}
santa = {:northing => 0, :easting => 0}
robosanta = {:northing => 0, :easting => 0}

input = STDIN.readlines.map(&:chomp).join

input.chars.each_with_index do |ch, idx|
  case ch
  when '<'
    onlysanta[:easting] -= 1
    if idx.odd? then
      santa[:easting] -= 1
    else
      robosanta[:easting] -= 1
    end
  when '>'
    onlysanta[:easting] += 1
    if idx.odd? then
      santa[:easting] += 1
    else
      robosanta[:easting] += 1
    end
  when 'v'
    onlysanta[:northing] -= 1
    if idx.odd? then
      santa[:northing] -= 1
    else
      robosanta[:northing] -= 1
    end
  when '^'
    onlysanta[:northing] += 1
    if idx.odd? then
      santa[:northing] += 1
    else
      robosanta[:northing] += 1
    end
  end
  map[:onlysanta][[onlysanta[:easting], onlysanta[:northing]]] += 1
  map[:robosanta][[santa[:easting], santa[:northing]]] += 1
  map[:robosanta][[robosanta[:easting], robosanta[:northing]]] += 1
end

puts "Santa only: #{map[:onlysanta].length}"
puts "Robosanta:  #{map[:robosanta].length}"
