#include "place.h"

Place::Place(const int pos[])
{
    position[0] = pos[0];
    position[1] = pos[1];
}


Place * Place::nextPlace(const QString &color){
    Place * pointer;
    pointer = this;
    if(!is_standard){
        if(pointer->exits[0] != NULL){
            if(this->is_interaction == false)
                pointer = pointer->exits[0];
            else{
                if(color == "blue"){
                    pointer = pointer->exits[0];
                }
                else if(color == "red"){
                    pointer = pointer->exits[1];
                }
                else if(color == "yellow"){
                    pointer = pointer->exits[2];
                }
                else if(color == "green"){
                    pointer = pointer->exits[3];
                }
            }
        }
    }
    else{
        if(pointer->exits[4] != NULL){
            if(this->is_interaction == true){
                if(color == "blue" && this->exits[0] != NULL){
                    pointer = pointer->exits[0];
                }
                else if(color == "red" && this->exits[1] != NULL){
                    pointer = pointer->exits[1];
                }
                else if(color == "yellow" && this->exits[2] != NULL){
                    pointer = pointer->exits[2];
                }
                else if(color == "green" && this->exits[3] != NULL){
                    pointer = pointer->exits[3];
                }
                else { //default (not defined)
                    pointer = pointer->exits[4];
                }
            }
            else {
                pointer = pointer->exits[4];
            }
        }
    }
    return pointer;
}
