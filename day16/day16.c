#include <stdio.h>
#include <string.h>

typedef struct {
  int
    children,
    cats,
    samoyeds,
    pomeranians,
    akitas,
    vizslas,
    goldfish,
    trees,
    cars,
    perfumes;
} knowledge;

knowledge machine = {
  .children = 3,
  .cats = 7,
  .samoyeds = 2,
  .pomeranians = 3,
  .akitas = 0,
  .vizslas = 0,
  .goldfish = 5,
  .trees = 3,
  .cars = 2,
  .perfumes = 1
};

void initknowledge(knowledge* k) {
  k->children = -1;
  k->cats = -1;
  k->samoyeds = -1;
  k->pomeranians = -1;
  k->akitas = -1;
  k->vizslas = -1;
  k->goldfish = -1;
  k->trees = -1;
  k->cars = -1;
  k->perfumes = -1;
}

void loadknowledge(knowledge* k, char* key, int value) {
         if(strncmp(key, "children",     8) == 0) {
    k->children = value;
  } else if(strncmp(key, "cats",         4) == 0) {
    k->cats = value;
  } else if(strncmp(key, "samoyeds",     8) == 0) {
    k->samoyeds = value;
  } else if(strncmp(key, "pomeranians", 11) == 0) {
    k->pomeranians = value;
  } else if(strncmp(key, "akitas",       6) == 0) {
    k->akitas = value;
  } else if(strncmp(key, "vizslas",      7) == 0) {
    k->vizslas = value;
  } else if(strncmp(key, "goldfish",     8) == 0) {
    k->goldfish = value;
  } else if(strncmp(key, "trees",        5) == 0) {
    k->trees = value;
  } else if(strncmp(key, "cars",         4) == 0) {
    k->cars = value;
  } else if(strncmp(key, "perfumes",     8) == 0) {
    k->perfumes = value;
  }
}

int matchknowledges(knowledge* a, knowledge* b) {
  int val = 1;

  if(a->children    != -1 && b->children    != -1 && a->children    != b->children)    val = 0;
  if(a->cats        != -1 && b->cats        != -1 && a->cats        != b->cats)        val = 0;
  if(a->samoyeds    != -1 && b->samoyeds    != -1 && a->samoyeds    != b->samoyeds)    val = 0;
  if(a->pomeranians != -1 && b->pomeranians != -1 && a->pomeranians != b->pomeranians) val = 0;
  if(a->akitas      != -1 && b->akitas      != -1 && a->akitas      != b->akitas)      val = 0;
  if(a->vizslas     != -1 && b->vizslas     != -1 && a->vizslas     != b->vizslas)     val = 0;
  if(a->goldfish    != -1 && b->goldfish    != -1 && a->goldfish    != b->goldfish)    val = 0;
  if(a->trees       != -1 && b->trees       != -1 && a->trees       != b->trees)       val = 0;
  if(a->cars        != -1 && b->cars        != -1 && a->cars        != b->cars)        val = 0;
  if(a->perfumes    != -1 && b->perfumes    != -1 && a->perfumes    != b->perfumes)    val = 0;

  return val;
}

int roughknowledges(knowledge* a, knowledge* b) {
  int val = 1;

  if(a->children    != -1 && b->children    != -1 && a->children    != b->children)    val = 0;
  if(a->cats        != -1 && b->cats        != -1 && a->cats         > b->cats)        val = 0;
  if(a->samoyeds    != -1 && b->samoyeds    != -1 && a->samoyeds    != b->samoyeds)    val = 0;
  if(a->pomeranians != -1 && b->pomeranians != -1 && a->pomeranians  < b->pomeranians) val = 0;
  if(a->akitas      != -1 && b->akitas      != -1 && a->akitas      != b->akitas)      val = 0;
  if(a->vizslas     != -1 && b->vizslas     != -1 && a->vizslas     != b->vizslas)     val = 0;
  if(a->goldfish    != -1 && b->goldfish    != -1 && a->goldfish     < b->goldfish)    val = 0;
  if(a->trees       != -1 && b->trees       != -1 && a->trees        > b->trees)       val = 0;
  if(a->cars        != -1 && b->cars        != -1 && a->cars        != b->cars)        val = 0;
  if(a->perfumes    != -1 && b->perfumes    != -1 && a->perfumes    != b->perfumes)    val = 0;

  return val;
}

int main() {
  knowledge sue;
  int this, know1v, know2v, know3v;
  char know1k[16], know2k[16], know3k[16];

  while(
      scanf("Sue %d: %[a-z]: %d, %[a-z]: %d, %[a-z]: %d\n",
        &this,
        know1k, &know1v,
        know2k, &know2v,
        know3k, &know3v) != EOF) {
    initknowledge(&sue);
    loadknowledge(&sue, know1k, know1v);
    loadknowledge(&sue, know2k, know2v);
    loadknowledge(&sue, know3k, know3v);
    if(matchknowledges(&machine, &sue))
      printf("Almost Sue: %d\n", this);
    if(!matchknowledges(&machine, &sue) && roughknowledges(&machine, &sue))
      printf("Actual Sue %d\n", this);
  }
  return 0;
}
