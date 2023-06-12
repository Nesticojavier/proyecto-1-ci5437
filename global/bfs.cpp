/* This program reads a state from stdin and prints out its successors.

Copyright (C) 2013 by the PSVN Research Group, University of Alberta
*/

#include <vector>
#include <queue>

int main(int argc, char **argv)
{
    // VARIABLES FOR INPUT
    state_t state;
    state_t child;
    ruleid_iterator_t iter; // ruleid_terator_t is the type defined by the PSVN API successor/predecessor iterators.
    int ruleid, d, depth, childCount;
    std::queue<state_t> queue;

    // Obtain goal state
    first_goal_state(&state, &d);
    // Insert in queue goal State
    queue.push(state);

    depth = 0;
    while (!queue.empty())
    {

        state = queue.front();
        queue.pop();
        printf("Padre:        ");
        print_state(stdout, &state);
        printf("\n");

        childCount = 0;
        init_bwd_iter(&iter, &state); // initialize the child iterator

        /* Solo se expanden 10 nodos, ESTO ES SOLO PARA EVITAR EL BUCLE INFINITO. Borrar despues */
        if (depth >= 10)
            return 0;
        while ((ruleid = next_ruleid(&iter)) >= 0)
        {
            apply_bwd_rule(ruleid, &state, &child);
            ++childCount;
            queue.push(child);
            printf("    child %d.   ", childCount);
            print_state(stdout, &child);
            printf("  %s (cost %d), goal=%d\n", get_fwd_rule_label(ruleid), get_fwd_rule_cost(ruleid), is_goal(&child));
        }

        // LOOP THOUGH THE CHILDREN ONE BY ONE
        depth++;
    }
    return 0;
}