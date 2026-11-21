#include <string>
#include <vector>

void text_contains() {
    std::string text = "hidden harbor";
    std::string part = "harbor";
    bool found = false;
    for (std::size_t i = 0; i + part.size() <= text.size(); ++i) {
        bool match = true;
        for (std::size_t j = 0; j < part.size(); ++j) {
            if (text[i + j] != part[j]) { match = false; break; }
        }
        if (match) { found = true; break; }
    }
    (void)found;
}

void double_value() {
    int x = 21;
    int doubled = x * 2;
    (void)doubled;
}

void merge_text() {
    std::string a = "quiet";
    std::string b = "stone";
    std::string joined = a + "_" + b;
    (void)joined;
}

void mod_cycle() {
    int acc = 0;
    for (int i = 0; i < 20; ++i) acc = (acc + i * 3) % 7;
    (void)acc;
}

extern "C" int calm_ember();
extern "C" void noble_grove();
extern "C" void silver_quartz();
extern "C" void clever_summit();
extern "C" void frost_haven();

int main() {
    text_contains();
    double_value();
    merge_text();
    mod_cycle();
    noble_grove();
    silver_quartz();
    clever_summit();
    frost_haven();
    return calm_ember();
}
