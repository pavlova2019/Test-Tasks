class Crawler {
    
    std::queue<std::string_view> links;
    std::map<std::string_view, class WebPage*> mapping {};
    
    // add newly found page url
    void add_url (std::string_view root_url) {
        
    }

    // add the content of newly found page url
    void add_hyperLink (std::string_view root_url, std::string_view new_url) {
        
    }

    // return top 5 most important pages
    std::vector<std::string> query_top_five(std::string_view root_url) {
        class MaxFiveVector res = MaxFiveVector();
        for (const auto& [url, page] : mapping) {
            res.insert({url.begin(), url.end()}, page -> get_ref_count());
        }
        return res.get_vector();
    }
    
    // return a list of pages which urls have same prefix
    std::vector<std::string> query_list_of_pages_with_given_prefix(std::string_view prefix) {
        std::vector<std::string> res;
        for (const auto& [url, page] : mapping) {
            if (url.starts_with(prefix)) res.push_back({url.begin(), url.end()});
        }
        return res;
    }
    
};
