# reduced test cases for extlink ecosystem

## references
see http://drupal.org/project/exlink
see branches of this repo for variations involving
  http://drupal.org/project/exlink_extra
  http://drupal.org/project/colorbox

## purpose
[x] test extlink-7.x-1.18 as released 25 July 2014
[ ] test extlink-7.x-1.x-dev as updated 7 Dec 2016 at 22:58 UTC

## progress
Tested in Article content type and Comment on D7.
- Link in filtered_html text_area shows an icon alongside indicating the link is an external one as expected.
- Clicking the link opens the destination in the same browser tab as expected.
- Browser back button returns to starting page as expected.

## repositories
https://github.com/ownsourcing/proto_exlink_d7

@mobile
issues with external links (mobile only):
  exclude additional organization urls
  page not found

## steps
  determine related modules
  check module issue queues
  build iterative prototype, starting with defaults and trying options
  create sample content
  export content & config to features
  write simpletests / behat tests

## observations
behavior differs between mobile and desktop
- issues exist on mobile site
- desktop works as expected on all concerns

## prototype build steps (general)
$ composer create d7
r>  $ composer require colorbox extlink-dev extlink_extra-dev
$ mysql -uroot
$ drush si
$ drush en extlink
add links to core fields included in standard install
add links to special fields (esp url module)
add links in theme templates
$ { behat }
$ { feature create }
incrementally add parts of ecosystem
review available patches as needed
update issues in queue

## build details
$ composer create-project drupal-composer/drupal-project:7.x-dev proto_extlink_d7 --stability dev --no-interaction
$ composer require drupal/colorbox drupal/:1.x-dev drupal/extlink_extra:1.x-dev
$ mysql> create database proto_extlink_d7;
$ drush si --db-url=mysql://root@127.0.0.1:3306/proto_extlink_d7
$ composer require drupal/node_export drupal/features drupal/strongarm drupal/drupal-extension drupal/zen
$ drush en features strongarm node_export node_export_features node_export_features_ui zen
[...]
$ composer require drupal/drupal-extension

test details:
  features to test against php versions 5.6 & 7 on desktop and mobile (3 breakpoints)
  defaults:
    Apply icons to either mailto or external links or both when provided via following means
    entity_types: content, comment, user, taxonomy
    field_types: text, text_area, wysiwyg, url
    input_filters: plaintext, filtered_html, full_html
  common options:
    module settings:
      Configure external links to open in a new window.
      A confirmation message when leaving the site.
      Regular expression inclusion and exclusion of links considered external.
      CSS selector inclusion and exclusion of elements for processing
    entity_types: custom node bundle (e.g. questions, health resources)
    field_types: url
    input_filters: custom with ___
    modules: colorbox
    theme files (zen)
    varnish cache

key:
  r> refine / redo step
