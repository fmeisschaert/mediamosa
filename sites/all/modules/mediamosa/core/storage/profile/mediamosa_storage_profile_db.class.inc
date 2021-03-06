<?php
/**
 * @file
 * The storage DB class.
 *
 * The storage class handles the storages of all mediafiles on local and
 * external sources.
 */

class mediamosa_storage_profile_db {
  // ------------------------------------------------------------------ Consts.
  // Table name;
  const TABLE_NAME = 'mediamosa_storage_profile';

  // Database fields;
  const NID = 'nid';
  const VID = 'vid';
  const ID = 'storage_profile_id';
  const APP_ID = 'app_id';
  const VERSION = 'version';
  const PROFILE = 'profile';
  const PROFILE_LENGTH = 100;
  const TYPE = 'storage_profile_type';
  const TYPE_LENGTH = 100;
  const CREATED = 'created';
  const CHANGED = 'changed';

  /**
   * Returns all fields.
   */
  public static function get_fields() {
    require_once 'mediamosa_storage_profile.install.inc';

    // Get the schema.
    $schema = mediamosa_storage_profile_schema();
    return array_keys($schema[mediamosa_storage_profile_db::TABLE_NAME]['fields']);
  }
}
