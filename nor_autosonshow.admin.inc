<?php
//ADD FIELDS TO CUSTOM WEBSITE SETTINGS PANEL
function nor_autosonshow_admin_form($form, &$form_state) {
  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => 'AutosOnShow Settings',
    '#weight' => -9,
  );

  $form['settings']['autosonshow_show_thumbnails'] = array(
    '#type'          => 'checkbox',
    '#title'         => t("Show AutosOnShow Gallery Thumbnails"),
    '#description'   => t('Enabling this will make the gallery thumbnails from AOS show.'),
    '#default_value' => variable_get('autosonshow_show_thumbnails'),
  );

  $form['settings']['autosonshow_client_id'] = array(
    '#type'          => 'textfield',
    '#title'         => t('AutosOnShow Client ID'),
    '#description'   => t("AutosOnShow Client ID"),
    '#default_value' => variable_get('autosonshow_client_id'),
  );

  $form['settings']['autosonshow_client_secret'] = array(
    '#type'          => 'textfield',
    '#title'         => t('AutosOnShow Client Secret'),
    '#description'   => t("AutosOnShow Client Secret"),
    '#default_value' => variable_get('autosonshow_client_secret'),
  );

  return system_settings_form($form);
}
