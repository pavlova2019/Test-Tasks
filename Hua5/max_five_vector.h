class MaxFiveVector {
    std::set<std::pair<int, std::string>> max_five;
    
    public:
            void insert(std::string url, int cnt) {
            if (max_five.size() < 5) {
                max_five.emplace(cnt, url);
            } else {
                auto lower = max_five.lower_bound({cnt, url});
                if (lower == max_five.end()) return;
                max_five.emplace(cnt, url);
                max_five.erase((max_five.end())--);
            }
        }
        std::vector<std::string> get_vector() {
            std::vector<std::string> res;
            for (auto elem : max_five) {
                res.push_back(elem.second);
            }
            return res;
        }
};
