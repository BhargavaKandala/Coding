class Node{
    private:
    Node *array[26];
    bool flag;

    public:
    Node(){
        for(int i = 0;i < 26; i++){
            array[i] = nullptr;
        }
        flag = false;
    }

    bool contains(char ch){
        return array[ch-'a'] != nullptr;
    }
    void put(char ch, Node *node){
        array[ch- 'a'] = node;
    }
    Node *getNext(char ch){
        return array[ch-'a'];
    }
    void set(){
        flag = true;
    }
    bool End(){
        return flag;
    }

};

class Trie {
    private: 
    Node *root = new Node();
public:
    Trie() {

    }
    
    void insert(string word) {
        Node* temp = root;
        for(char ch: word){
            if(!temp->contains(ch)){
                temp->put(ch, new Node());
            }
            temp = temp->getNext(ch);
        }
        temp->set();
    }
    
    bool search(string word) {
        Node *temp = root;
        for(char ch: word){
            if(!temp->contains(ch)){
                return false;
            }
            temp = temp->getNext(ch);
        }
        return temp->End();
    }
    
    bool startsWith(string prefix) {
        Node *temp = root;
        for(char ch: prefix){
            if(!temp->contains(ch)){
                return false;
            }
            temp = temp->getNext(ch);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */