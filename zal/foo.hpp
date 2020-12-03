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
for(std::list< Human >::reverse_iterator it = people.rbegin(); it!= people.rend(); it++)
{
if(it.isMonster()==1)
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