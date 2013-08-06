using namespace std;

#include <string>
#include <iostream>

class Address {
  string street[];
  string city;
  string state;
  string country;
  string zipcode;
};


class Person {
  string first_name;
  string middle_names[];
  string last_name;

  // social security number
  // not everyone has one
  string SSN;

  Address address;
};


class Business {
  string name;
  Address address;
};

class Employee : Person {};

class Document {};

class Resume : Document {};

class Skill {
  string name;
  string description;
  float years_experience;
};

class Requirement {};

class Schedule {};

class Job {};
