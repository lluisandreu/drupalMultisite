<?php
/**
 * @file
 * permission.delete_any_front_page_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any front_page content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.front_page' => 'content_type.front_page',
);

$optional = array();

$modules = array(
  0 => 'node',
);