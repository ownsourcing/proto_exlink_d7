<?php
/**
 * @file
 * extlink_baseline.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function extlink_baseline_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "The link to <a href=\\"https://drupal.org\\">drupal.org</a> shows an icon alongside indicating the link is an external one.\\r\\n\\r\\nClicking the link opens the destination in the same page.\\r\\n\\r\\nClicking the browser back button returns to starting page as expected.",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>The link to <a href=\\"https://drupal.org\\">drupal.org</a> shows an icon alongside indicating the link is an external one.</p>\\n<p>Clicking the link opens the destination in the same page.</p>\\n<p>Clicking the browser back button returns to starting page as expected.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_image\' => array(),
      \'field_tags\' => array(),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'remove taxonomy terms for the most basic test\',
      \'menu\' => NULL,
      \'name\' => \'admin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'link to drupal.org in filtered_html text_area\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'article\',
      \'uid\' => \'1\',
      \'uuid\' => \'d873dcd6-9dd5-46c5-bd85-55f97195093b\',
      \'vid\' => NULL,
      \'vuuid\' => \'c5f674df-85b5-415c-bb3c-60078cdc3b63\',
    ),
)',
);
  return $node_export;
}
