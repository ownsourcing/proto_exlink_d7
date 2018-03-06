<?php
/**
 * @file
 * extlink_purpose_progress.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function extlink_purpose_progress_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "title: Manually test extlink ecosystem\\r\\n\\r\\npurpose:\\r\\n[x] Manually test extlink-7.x-1.18 as released 25 July 2014\\r\\n[ ] Manually test extlink-7.x-1.x-dev as updated 7 Dec 2016 at 22:58 UTC\\r\\n\\r\\nprogress:\\r\\n  Tested in Article content type and Comment on D7.\\r\\n  - Link in filtered_html text_area shows an icon alongside indicating the link is an external one as expected.\\r\\n  - Clicking the link opens the destination in the same browser tab as expected.\\r\\n  - Browser back button returns to starting page as expected.\\r\\n\\r\\nrepositories:\\r\\n\\r\\n@mobile\\r\\nissues with external links (mobile only):\\r\\n  exclude additional organization urls\\r\\n  page not found\\r\\n\\r\\nsteps:\\r\\n  determine required module\\r\\n  check module issue queue\\r\\n  build iterative prototype, starting with defaults and trying options\\r\\n  create sample content\\r\\n  export content & config to features\\r\\n  write simpletests / behat tests\\r\\n\\r\\nobservations:\\r\\n  behavior differs between mobile and desktop\\r\\n  - issues exist on mobile site\\r\\n  - desktop works as expected on all concerns\\r\\n\\r\\nprototype build steps (general):\\r\\n  $ composer create d7\\r\\nr>  $ composer require colorbox extlink-dev extlink_extra-dev\\r\\n  $ mysql -uroot\\r\\n  $ drush si\\r\\n  $ drush en extlink\\r\\n  add links to core fields included in standard install\\r\\n  add links to special fields (esp url module)\\r\\n  add links in theme templates\\r\\n  $ { behat }\\r\\n  $ { feature create }\\r\\n  incrementally add parts of ecosystem\\r\\n  review available patches as needed\\r\\n  update issues in queue\\r\\n\\r\\nbuild details:\\r\\n  $ composer create-project drupal-composer/drupal-project:7.x-dev proto_extlink_d7 --stability dev --no-interaction\\r\\n  $ composer require drupal/colorbox drupal/:1.x-dev drupal/extlink_extra:1.x-dev\\r\\n  $ mysql> create database proto_extlink_d7;\\r\\n  $ drush si --db-url=mysql://root@127.0.0.1:3306/proto_extlink_d7\\r\\n  $ composer require drupal/node_export drupal/features drupal/strongarm drupal/drupal-extension drupal/zen\\r\\n  $ drush en features strongarm node_export node_export_features node_export_features_ui zen\\r\\n\\r\\n  composer require drupal/drupal-extension\\r\\n\\r\\ntest details:\\r\\n  features to test against php versions 5.6 & 7 on desktop and mobile (3 breakpoints)\\r\\n  defaults:\\r\\n    Apply icons to either mailto or external links or both when provided via following means\\r\\n    entity_types: content, comment, user, taxonomy\\r\\n    field_types: text, text_area, wysiwyg, url\\r\\n    input_filters: plaintext, filtered_html, full_html\\r\\n  common options:\\r\\n    module settings:\\r\\n      Configure external links to open in a new window.\\r\\n      A confirmation message when leaving the site.\\r\\n      Regular expression inclusion and exclusion of links considered external.\\r\\n      CSS selector inclusion and exclusion of elements for processing\\r\\n    entity_types: custom node bundle (e.g. questions, health resources)\\r\\n    field_types: url\\r\\n    input_filters: custom with ___\\r\\n    modules: colorbox\\r\\n    theme files (zen)\\r\\n    varnish cache\\r\\n\\r\\nkey:\\r\\n  r> refine / redo step\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>title: Manually test extlink ecosystem</p>\\n<p>purpose:<br />\\n[x] Manually test extlink-7.x-1.18 as released 25 July 2014<br />\\n[ ] Manually test extlink-7.x-1.x-dev as updated 7 Dec 2016 at 22:58 UTC</p>\\n<p>progress:<br />\\n  Tested in Article content type and Comment on D7.<br />\\n  - Link in filtered_html text_area shows an icon alongside indicating the link is an external one as expected.<br />\\n  - Clicking the link opens the destination in the same browser tab as expected.<br />\\n  - Browser back button returns to starting page as expected.</p>\\n<p>repositories:</p>\\n<p>@mobile<br />\\nissues with external links (mobile only):<br />\\n  exclude additional organization urls<br />\\n  page not found</p>\\n<p>steps:<br />\\n  determine required module<br />\\n  check module issue queue<br />\\n  build iterative prototype, starting with defaults and trying options<br />\\n  create sample content<br />\\n  export content &amp; config to features<br />\\n  write simpletests / behat tests</p>\\n<p>observations:<br />\\n  behavior differs between mobile and desktop<br />\\n  - issues exist on mobile site<br />\\n  - desktop works as expected on all concerns</p>\\n<p>prototype build steps (general):<br />\\n  $ composer create d7<br />\\nr&gt;  $ composer require colorbox extlink-dev extlink_extra-dev<br />\\n  $ mysql -uroot<br />\\n  $ drush si<br />\\n  $ drush en extlink<br />\\n  add links to core fields included in standard install<br />\\n  add links to special fields (esp url module)<br />\\n  add links in theme templates<br />\\n  $ { behat }<br />\\n  $ { feature create }<br />\\n  incrementally add parts of ecosystem<br />\\n  review available patches as needed<br />\\n  update issues in queue</p>\\n<p>build details:<br />\\n  $ composer create-project drupal-composer/drupal-project:7.x-dev proto_extlink_d7 --stability dev --no-interaction<br />\\n  $ composer require drupal/colorbox drupal/:1.x-dev drupal/extlink_extra:1.x-dev<br />\\n  $ mysql&gt; create database proto_extlink_d7;<br />\\n  $ drush si --db-url=mysql://root@127.0.0.1:3306/proto_extlink_d7<br />\\n  $ composer require drupal/node_export drupal/features drupal/strongarm drupal/drupal-extension drupal/zen<br />\\n  $ drush en features strongarm node_export node_export_features node_export_features_ui zen</p>\\n<p>  composer require drupal/drupal-extension</p>\\n<p>test details:<br />\\n  features to test against php versions 5.6 &amp; 7 on desktop and mobile (3 breakpoints)<br />\\n  defaults:<br />\\n    Apply icons to either mailto or external links or both when provided via following means<br />\\n    entity_types: content, comment, user, taxonomy<br />\\n    field_types: text, text_area, wysiwyg, url<br />\\n    input_filters: plaintext, filtered_html, full_html<br />\\n  common options:<br />\\n    module settings:<br />\\n      Configure external links to open in a new window.<br />\\n      A confirmation message when leaving the site.<br />\\n      Regular expression inclusion and exclusion of links considered external.<br />\\n      CSS selector inclusion and exclusion of elements for processing<br />\\n    entity_types: custom node bundle (e.g. questions, health resources)<br />\\n    field_types: url<br />\\n    input_filters: custom with ___<br />\\n    modules: colorbox<br />\\n    theme files (zen)<br />\\n    varnish cache</p>\\n<p>key:<br />\\n  r&gt; refine / redo step</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'admin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
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
      \'title\' => \'purposes of this prototype, and progress toward meeting them\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'38ddd33f-aabc-431f-a04f-54baa1008276\',
      \'vid\' => NULL,
      \'vuuid\' => \'946c6251-0563-4c4e-976d-9f281267f2e7\',
    ),
)',
);
  return $node_export;
}
