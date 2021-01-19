#pragma once
#include <set>
#include <string>
#include <string_view>
#include <vector>

std::vector<std::string_view> SplitIntoWords(std::string_view text);

using TransparentStringSet = std::set<std::string, std::less<>>;

template <typename StringContainer>
TransparentStringSet MakeUniqueNonEmptyStrings(const StringContainer& strings) {
    TransparentStringSet non_empty_strings;
    for (std::string_view str : strings) {
        if (!str.empty()) {
            non_empty_strings.emplace(str);
        }
    }
    return non_empty_strings;
}