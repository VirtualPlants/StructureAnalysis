# -*- coding: utf-8 -*-
import os, commands, string

#Sources

tests= string.split("""
test_int_fl_containers
test_generic_tree
test_int_fl_tree
test_tree_characteristics
test_characteristics_marginal
test_characteristics_first_occurrence
test_characteristics_zones
test_characteristics_occurrences
test_int_trees
test_manip_trees
test_hidden_markov_ind_out_trees
test_hidden_markov_ind_out_trees_estim_synt
test_hidden_markov_tree_data
test_hidden_markov_ind_out_trees_estim_val
test_hidden_markov_chain_tree
test_hidden_markov_ind_out_trees_viterbi
test_multivariate_distribution
test_multivariate_parametric
test_mcmult
test_mpoisson
test_mmult
test_markov_out_trees
""")

def check(p):
    os.popen("./"+p+" > output_current_test.txt")
    res = commands.getoutput("diff output_current_test.txt Outputs/output_"+p+".txt")
    if res!='':
        chain = "actual and theoretical outputs differ for " + str(p) + ": \n" + str(res) + "\n"
        print chain
    else:
        chain =  "actual and theoretical ouputs match for " + str(p) + "\n"
        print chain
    return chain

diffs = map(check, tests)

