//
// Created by Anika Agarwal on 12/3/17.
//

//
// Created by Anika Agarwal on 12/1/17.
//

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <map>    //hash map
#include "Parse.h"
#include "String.h"

using namespace std;

map<String, int> variables; //hashmap

//A. Blip language commands
//1. var, 2. set, 3. output, 4. text

/* A1. Var
 * Purpose: Initialize new variable with value in Blip internal memory
 * Comments: If already exists, print warning
 * Syntax: “var <varName> <expr>"
 */

void languageVar(){
    read_next_token();
    if(strncmp(next_token(), "var", 3)){ //var
        read_next_token();  //var name

        String varName = next_token(); //get var name
        read_next_token(); //value
        int expr = token_number_value;

        variables.insert(std::pair<char,int>(varName,expr));
    }
}

/* A2. Set
 * Purpose: Re-assign new value to existing variable
 * Comments: If variable does not already exist, print warning
 * Syntax: “set <varName> <expr>"
 */

/* A3. Output
 * Purpose: Display number on screen
 * Comments: only integers supported
 */

/* A4. Test
 * Purpose: Text message displayed on screen
 * Syntax: text Hello OR text “Hello World”
 */