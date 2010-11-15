<?php
// $Id$

/**
 * Implementation of hook_views_handlers().
 */
function tokens_per_row_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'tokens_per_row'),
    ),
    'handlers' => array(
      // field
      'tokens_per_row_handler_field_custom_tokens_per_row' => array(
        'parent' => 'views_handler_field',
      ),
    ),
  );
}

function tokens_per_row_views_data_alter(&$data) {
  $data['views']['tokens'] = array(
    'title' => t('Tokens per row'),
    'help' => t('Provide custom text with tokens where fallback tokens can be can be used if a token is empty.'),
    'field' => array(
      'handler' => 'tokens_per_row_handler_field_custom_tokens_per_row',
    ),
  );
}
