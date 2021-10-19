/*************************************************************************\
*                  Copyright (C) Vivek Bhadra, 2021.                      *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU General Public License as published by the   *
* Free Software Foundation, either version 3 or (at your option) any      *
* later version. This program is distributed without any warranty.  See   *
* the file COPYING.gpl-v3 for details.                                    *
\*************************************************************************/

#ifndef __PARAMETER_DEMO__
void printNum()
{
}
template<typename first, typename... rest>
void printNum(first arg, rest... restArgs)
{
    std::cout << arg << ' ';
    printNum(restArgs...);
}
#endif 
