; capKoper SEO Makefile

api = 2
core = 7.x

; Metatag
projects[metatag][subdir] = contrib
projects[metatag][version] = 1.17

; Redirect
projects[redirect][version] = 1.0-rc3
projects[redirect][subdir] = contrib
projects[redirect][patch][905914] = https://www.drupal.org/files/issues/redirect-n905914-227.patch
projects[redirect][patch][1116408] = https://www.drupal.org/files/issues/support_migrate_module-1116408-128.patch

; Schema.org
projects[schemaorg][subdir] = contrib
projects[schemaorg][version] = 1.0-rc1

; XML Sitemap
projects[xmlsitemap][version] = 2.3
projects[xmlsitemap][subdir] = contrib
