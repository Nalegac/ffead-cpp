/*
	Copyright 2010, Sumeet Chhetri 
  
    Licensed under the Apache License, Version 2.0 (the "License"); 
    you may not use this file except in compliance with the License. 
    You may obtain a copy of the License at 
  
        http://www.apache.org/licenses/LICENSE-2.0 
  
    Unless required by applicable law or agreed to in writing, software 
    distributed under the License is distributed on an "AS IS" BASIS, 
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
    See the License for the specific language governing permissions and 
    limitations under the License.  
*/
/*
 * Constructor.h
 *
 *  Created on: Mar 30, 2010
 *      Author: sumeet
 */

#ifndef CONSTRUCTOR_H_
#define CONSTRUCTOR_H_
#include "string"
#include "vector"
using namespace std;
class Constructor {
	string name;
	vector<string> argumentTypes;
public:
	Constructor();
	virtual ~Constructor();
	vector<string> getArgumentTypes() const;
	void setArgumentTypes(vector<string>);
	int getArgNum() const;
    string getName() const;
    void setName(string name);
    void clear();
};

#endif /* CONSTRUCTOR_H_ */