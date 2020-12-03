#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    // Twoja implementacja tutaj
  std::vector<char> kotofil;
  for(Human e : people)
  {
    e.birthday();
  }
  for(std::list< Human >::const_reverse_iterator it = people.crbegin(); it!= people.crend(); it++)
  {
    if(it->isMonster() == true)
    {
    kotofil.emplace_back("n");
    }
    else
    {
    kotofil.emplace_back("y");
    }

  }
    return kotofil;
}