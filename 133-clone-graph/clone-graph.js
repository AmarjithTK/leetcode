/**
 * // Definition for a _Node.
 * function _Node(val, neighbors) {
 *    this.val = val === undefined ? 0 : val;
 *    this.neighbors = neighbors === undefined ? [] : neighbors;
 * };
 */

/**
 * @param {_Node} node
 * @return {_Node}
 */
var cloneGraph = function(node) {
    if(!node){
        return null;
    }

    const copies =  new Map();


    function dfs(node){
        if(copies.has(node)){
            return copies.get(node);
        }

        const copy =  new Node(node.val)
        copies.set(node,copy);

        for(const neighbor of node.neighbors){
            copy.neighbors.push(dfs(neighbor));
        }

        return copy;
    }

    return dfs(node);
};