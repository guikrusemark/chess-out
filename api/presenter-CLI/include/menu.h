#ifndef _MENU_H_
#define _MENU_H_

#include <string>
#include <vector>

namespace cli {

    class Menu {
        private:
            std::string m_title;
            std::vector<std::string> m_options;

        public:
            Menu();
            ~Menu();
    };
}; // namespace cli

#endif _MENU_H_