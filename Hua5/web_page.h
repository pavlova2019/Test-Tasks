class WebPage {
    int ref_count = 0;
    std::set<class WebPage*> page_links;
    
    void incerase_count() {
        ref_count++;
    }
    
    public:
        int get_ref_count(){
            return ref_count;
        }
    
        void add_link(class WebPage *page) {
            if (page_links.contains(page)) return;
            page_links.insert(page);
            page -> incerase_count();
        }
};
