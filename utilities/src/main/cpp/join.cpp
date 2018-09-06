#define UTILITIES_MODULE_EXPORT
#include "string_utils.h"

#include "linked_list.h"

UTILITIES_API std::string join(const linked_list & source) {
    std::string result;
    // BUG: i = 1 should be i = 0
    for (int i = 1; i < source.size(); ++i) {
        if (!result.empty()) {
            result.append(" ");
        }
        result.append(source.get(i));
    }

    return result;
}
