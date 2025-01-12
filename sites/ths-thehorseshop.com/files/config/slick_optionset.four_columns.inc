<?php
/**
 * @file
 * slick_optionset.four_columns.inc
 */

$api = '2.0.0';

$data = $preset = new stdClass();
$preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
$preset->api_version = 1;
$preset->name = 'four_columns';
$preset->label = 'Four columns';
$preset->breakpoints = 2;
$preset->skin = 'default';
$preset->options = array(
  'general' => array(
    'normal' => 'large',
    'thumbnail' => 'large',
    'template_class' => '',
    'goodies' => array(
      'arrow-down' => 0,
      'pattern' => 0,
      'random' => 0,
    ),
    'arrow_down_target' => '',
    'arrow_down_offset' => '',
  ),
  'settings' => array(
    'mobileFirst' => FALSE,
    'asNavFor' => '',
    'accessibility' => TRUE,
    'adaptiveHeight' => FALSE,
    'autoplay' => FALSE,
    'autoplaySpeed' => 3000,
    'pauseOnHover' => TRUE,
    'pauseOnDotsHover' => FALSE,
    'arrows' => FALSE,
    'prevArrow' => '<button type="button" data-role="none" class="slick-prev" aria-label="previous">Previous</button>',
    'nextArrow' => '<button type="button" data-role="none" class="slick-next" aria-label="next">Next</button>',
    'centerMode' => FALSE,
    'centerPadding' => '50px',
    'dots' => TRUE,
    'dotsClass' => 'slick-dots',
    'appendDots' => '$(element)',
    'draggable' => TRUE,
    'fade' => FALSE,
    'focusOnSelect' => FALSE,
    'infinite' => TRUE,
    'initialSlide' => 0,
    'lazyLoad' => 'ondemand',
    'respondTo' => 'window',
    'rtl' => FALSE,
    'rows' => 1,
    'slidesPerRow' => 4,
    'slide' => '',
    'slidesToShow' => 4,
    'slidesToScroll' => 1,
    'speed' => 500,
    'swipe' => TRUE,
    'swipeToSlide' => FALSE,
    'edgeFriction' => 0.34999999999999997779553950749686919152736663818359375,
    'touchMove' => TRUE,
    'touchThreshold' => 5,
    'useCSS' => TRUE,
    'cssEase' => 'ease',
    'cssEaseBezier' => '',
    'cssEaseOverride' => '',
    'useTransform' => FALSE,
    'easing' => 'linear',
    'variableWidth' => FALSE,
    'vertical' => FALSE,
    'verticalSwiping' => FALSE,
    'waitForAnimate' => TRUE,
  ),
  'responsives' => array(
    'responsive' => array(
      0 => array(
        'breakpoint' => 1024,
        'unslick' => FALSE,
        'settings' => array(
          'accessibility' => FALSE,
          'adaptiveHeight' => FALSE,
          'autoplay' => FALSE,
          'autoplaySpeed' => 3000,
          'pauseOnHover' => FALSE,
          'pauseOnDotsHover' => FALSE,
          'arrows' => TRUE,
          'centerMode' => FALSE,
          'centerPadding' => '50px',
          'dots' => FALSE,
          'draggable' => FALSE,
          'fade' => FALSE,
          'focusOnSelect' => FALSE,
          'infinite' => FALSE,
          'initialSlide' => 0,
          'rows' => 1,
          'slidesPerRow' => 3,
          'slidesToShow' => 3,
          'slidesToScroll' => 1,
          'speed' => 500,
          'swipe' => FALSE,
          'swipeToSlide' => FALSE,
          'edgeFriction' => 0.34999999999999997779553950749686919152736663818359375,
          'touchMove' => FALSE,
          'touchThreshold' => 5,
          'useCSS' => TRUE,
          'cssEase' => 'ease',
          'cssEaseBezier' => '',
          'cssEaseOverride' => '',
          'useTransform' => FALSE,
          'easing' => 'linear',
          'variableWidth' => FALSE,
          'vertical' => FALSE,
          'verticalSwiping' => FALSE,
          'waitForAnimate' => FALSE,
        ),
      ),
      1 => array(
        'breakpoint' => 650,
        'unslick' => FALSE,
        'settings' => array(
          'accessibility' => FALSE,
          'adaptiveHeight' => FALSE,
          'autoplay' => FALSE,
          'autoplaySpeed' => 3000,
          'pauseOnHover' => FALSE,
          'pauseOnDotsHover' => FALSE,
          'arrows' => FALSE,
          'centerMode' => FALSE,
          'centerPadding' => '50px',
          'dots' => FALSE,
          'draggable' => FALSE,
          'fade' => FALSE,
          'focusOnSelect' => FALSE,
          'infinite' => FALSE,
          'initialSlide' => 0,
          'rows' => 1,
          'slidesPerRow' => 1,
          'slidesToShow' => 1,
          'slidesToScroll' => 1,
          'speed' => 500,
          'swipe' => FALSE,
          'swipeToSlide' => FALSE,
          'edgeFriction' => 0.34999999999999997779553950749686919152736663818359375,
          'touchMove' => FALSE,
          'touchThreshold' => 5,
          'useCSS' => FALSE,
          'cssEase' => 'ease',
          'cssEaseBezier' => '',
          'cssEaseOverride' => '',
          'useTransform' => FALSE,
          'easing' => 'linear',
          'variableWidth' => FALSE,
          'vertical' => FALSE,
          'verticalSwiping' => FALSE,
          'waitForAnimate' => FALSE,
        ),
      ),
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'slick',
);
