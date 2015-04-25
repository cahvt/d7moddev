<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

//since loading node very common, drupal simplifies this so don't
//have to use the node_load function
//function node_metadata_page($nid) {
    //$node = node_load($nid); //passing in nodes a common task
    //dpm($node);

function node_metadata_page($node) { //passes in the full node
    $output = '';
    
    $output .= '<div><label>Author:</label>' . $node->name . '</div>';
    $output .= '<div><label>Created:</label>' . format_date($node->created) . '</div>';
    $output .= '<div><label>Updated:</label>' . format_date($node->changed) . '</div>';
    $output .= '<div><label>Comment Count:</label>' . $node->comment_count . '</div>';
    
    //return t('node ID is @nid', array('@nid' => $nid));
    return $output;
}

