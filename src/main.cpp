#include <iostream>
#include <yaml-cpp/yaml.h>
#include <filesystem>

int main() {

    YAML::Node config = YAML::LoadFile("src/yaml/test.yaml");

    int bpm = config["bpm"].as<int>();
    std::string pattern = config["tracks"]["kick"]["pattern"].as<std::string>();

    std::cout << bpm; 

    return 0;
}
