#ifndef _MENU_H_
#define _MENU_H_

#include <string>
#include <list>

namespace cli {

    class Menu {
        private:
        
        std::string playerName;
        std::list<std::string> menuItems;

        public:

        static void printItems();
        static void refresh();
    };
}; // namespace cli

#endif _MENU_H_