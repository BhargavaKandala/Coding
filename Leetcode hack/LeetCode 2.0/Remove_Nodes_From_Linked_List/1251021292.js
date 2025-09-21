var removeNodes = function(head) {
    
    let reverse = function(head){
        let fast = head.next;
        let curr = head;
        let prev = null;
        while(curr) {
            curr.next = prev;
            prev = curr;
            curr = fast;
            if(fast) fast = fast.next;
        }
        return prev;
    }; 
    
    
    let prev = reverse(head);

    let curr = prev.next;
    head = prev;
    prev.next = curr;
    let value = prev.val;
  
    while(curr) {
        let temp = curr.val;
        if(temp >= value) { 
            value = temp;
            prev = curr;
        }
        else { 
            prev.next = curr.next;
        }
        curr = curr.next;
    }
    // reverse the result and return it
    return reverse(head);
}