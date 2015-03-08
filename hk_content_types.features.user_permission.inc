<?php
/**
 * @file
 * hk_content_types.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hk_content_types_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'admin_classes'.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer dependencies'.
  $permissions['administer dependencies'] = array(
    'name' => 'administer dependencies',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'conditional_fields',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer robots.txt'.
  $permissions['administer robots.txt'] = array(
    'name' => 'administer robots.txt',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'robotstxt',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create buero content'.
  $permissions['create buero content'] = array(
    'name' => 'create buero content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create efh content'.
  $permissions['create efh content'] = array(
    'name' => 'create efh content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create einzelwohnung content'.
  $permissions['create einzelwohnung content'] = array(
    'name' => 'create einzelwohnung content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create object content'.
  $permissions['create object content'] = array(
    'name' => 'create object content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create objekt content'.
  $permissions['create objekt content'] = array(
    'name' => 'create objekt content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create residential_commercial_building content'.
  $permissions['create residential_commercial_building content'] = array(
    'name' => 'create residential_commercial_building content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create slideshow content'.
  $permissions['create slideshow content'] = array(
    'name' => 'create slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create wohnung content'.
  $permissions['create wohnung content'] = array(
    'name' => 'create wohnung content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create wohnungsanfrage content'.
  $permissions['create wohnungsanfrage content'] = array(
    'name' => 'create wohnungsanfrage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any buero content'.
  $permissions['delete any buero content'] = array(
    'name' => 'delete any buero content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any efh content'.
  $permissions['delete any efh content'] = array(
    'name' => 'delete any efh content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any einzelwohnung content'.
  $permissions['delete any einzelwohnung content'] = array(
    'name' => 'delete any einzelwohnung content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any object content'.
  $permissions['delete any object content'] = array(
    'name' => 'delete any object content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any objekt content'.
  $permissions['delete any objekt content'] = array(
    'name' => 'delete any objekt content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any residential_commercial_building content'.
  $permissions['delete any residential_commercial_building content'] = array(
    'name' => 'delete any residential_commercial_building content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any slideshow content'.
  $permissions['delete any slideshow content'] = array(
    'name' => 'delete any slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any wohnung content'.
  $permissions['delete any wohnung content'] = array(
    'name' => 'delete any wohnung content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any wohnungsanfrage content'.
  $permissions['delete any wohnungsanfrage content'] = array(
    'name' => 'delete any wohnungsanfrage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own buero content'.
  $permissions['delete own buero content'] = array(
    'name' => 'delete own buero content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own efh content'.
  $permissions['delete own efh content'] = array(
    'name' => 'delete own efh content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own einzelwohnung content'.
  $permissions['delete own einzelwohnung content'] = array(
    'name' => 'delete own einzelwohnung content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own object content'.
  $permissions['delete own object content'] = array(
    'name' => 'delete own object content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own objekt content'.
  $permissions['delete own objekt content'] = array(
    'name' => 'delete own objekt content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own residential_commercial_building content'.
  $permissions['delete own residential_commercial_building content'] = array(
    'name' => 'delete own residential_commercial_building content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own slideshow content'.
  $permissions['delete own slideshow content'] = array(
    'name' => 'delete own slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own wohnung content'.
  $permissions['delete own wohnung content'] = array(
    'name' => 'delete own wohnung content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own wohnungsanfrage content'.
  $permissions['delete own wohnungsanfrage content'] = array(
    'name' => 'delete own wohnungsanfrage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in vocabulary_3'.
  $permissions['delete terms in vocabulary_3'] = array(
    'name' => 'delete terms in vocabulary_3',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_5'.
  $permissions['delete terms in vocabulary_5'] = array(
    'name' => 'delete terms in vocabulary_5',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_6'.
  $permissions['delete terms in vocabulary_6'] = array(
    'name' => 'delete terms in vocabulary_6',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in vocabulary_8'.
  $permissions['delete terms in vocabulary_8'] = array(
    'name' => 'delete terms in vocabulary_8',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any buero content'.
  $permissions['edit any buero content'] = array(
    'name' => 'edit any buero content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any efh content'.
  $permissions['edit any efh content'] = array(
    'name' => 'edit any efh content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any einzelwohnung content'.
  $permissions['edit any einzelwohnung content'] = array(
    'name' => 'edit any einzelwohnung content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any object content'.
  $permissions['edit any object content'] = array(
    'name' => 'edit any object content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any objekt content'.
  $permissions['edit any objekt content'] = array(
    'name' => 'edit any objekt content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any residential_commercial_building content'.
  $permissions['edit any residential_commercial_building content'] = array(
    'name' => 'edit any residential_commercial_building content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any slideshow content'.
  $permissions['edit any slideshow content'] = array(
    'name' => 'edit any slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any wohnung content'.
  $permissions['edit any wohnung content'] = array(
    'name' => 'edit any wohnung content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any wohnungsanfrage content'.
  $permissions['edit any wohnungsanfrage content'] = array(
    'name' => 'edit any wohnungsanfrage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own buero content'.
  $permissions['edit own buero content'] = array(
    'name' => 'edit own buero content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own efh content'.
  $permissions['edit own efh content'] = array(
    'name' => 'edit own efh content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own einzelwohnung content'.
  $permissions['edit own einzelwohnung content'] = array(
    'name' => 'edit own einzelwohnung content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own object content'.
  $permissions['edit own object content'] = array(
    'name' => 'edit own object content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own objekt content'.
  $permissions['edit own objekt content'] = array(
    'name' => 'edit own objekt content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own residential_commercial_building content'.
  $permissions['edit own residential_commercial_building content'] = array(
    'name' => 'edit own residential_commercial_building content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own slideshow content'.
  $permissions['edit own slideshow content'] = array(
    'name' => 'edit own slideshow content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own wohnung content'.
  $permissions['edit own wohnung content'] = array(
    'name' => 'edit own wohnung content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own wohnungsanfrage content'.
  $permissions['edit own wohnungsanfrage content'] = array(
    'name' => 'edit own wohnungsanfrage content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in vocabulary_3'.
  $permissions['edit terms in vocabulary_3'] = array(
    'name' => 'edit terms in vocabulary_3',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_5'.
  $permissions['edit terms in vocabulary_5'] = array(
    'name' => 'edit terms in vocabulary_5',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_6'.
  $permissions['edit terms in vocabulary_6'] = array(
    'name' => 'edit terms in vocabulary_6',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in vocabulary_8'.
  $permissions['edit terms in vocabulary_8'] = array(
    'name' => 'edit terms in vocabulary_8',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format html'.
  $permissions['use text format html'] = array(
    'name' => 'use text format html',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
