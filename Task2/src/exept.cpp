#include "exept.h"

Figure_exeption::Figure_exeption():Figure_exeption("Неизвестная ошибка"){

}

Figure_exeption::Figure_exeption(const std::string &message):std::domain_error(message){
    this->message = message;
}

