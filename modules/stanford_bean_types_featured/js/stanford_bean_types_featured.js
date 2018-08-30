// (function ($) {
//   Drupal.behaviors.stanfordBeanTypesFeatured = {
//     attach: function (context, settings) {
//
//       var classes = ['featured-curtain', 'featured-static', 'featured-scroll'];
//       var menu = $('<div>', {id: 'featured-menu', html: $('.region-navigation div > ul').clone()});
//       if (!settings.stanford_bean_types_featured.featuredMenu) {
//         menu = null;
//       }
//
//       // $.each(classes, function (i, featuredClass) {
//       //   // Move the featured to the top of the body tag.
//       //   $('.' + featuredClass, context).each(function (i, a, b) {
//       //     var clonedBlock = $(this).detach().prependTo('body')
//       //       .prepend($('#global-header').clone().attr('id', 'global-header-featured').append(menu));
//       //     var wrapper = $('<div>', {class: featuredClass + '-reveal'});
//       //     $(clonedBlock).siblings().wrapAll(wrapper);
//       //   });
//       // });
//
//       function setFocusOut() {
//         $.each(classes, function (i, featuredClass) {
//           var featured = $('.' + featuredClass);
//           // If focus is moved away from the featured, scroll to the top of the normal page.
//           $(featured).find('a').last().focusout(function (e) {
//             if ($(this).is(':visible')) {
//               var topPage = $(featured).height();
//               $('body').scrollTop(topPage);
//             }
//           })
//         });
//       }
//
//       function featuredSetSize() {
//         var winHeight = $(window).height();
//         $.each(classes, function (i, featuredClass) {
//           var featuredAssets = $('.' + featuredClass)
//             .find('img, iframe');
//
//           $(featuredAssets).parent()
//             .height(winHeight)
//             .css('overflow', 'hidden');
//         });
//         $('.featured-curtain').css('padding-bottom', $('.featured-curtain-reveal').height());
//       }
//
//       function featuredScroller() {
//         $('.featured-scroll').append($('<a>', {
//           class: 'scroll-down',
//           href: '#',
//           title: Drupal.t('Scroll Down'),
//           'aria-label': Drupal.t('Scroll Down'),
//           html: '<div class="scroll-text">' + Drupal.t('Scroll') + '</div><div class="fa fa-arrow-circle-o-down"></div>'
//         }).click(function (e) {
//           e.preventDefault();
//           $("html, body").animate({scrollTop: $('.featured-scroll').height()}, 800);
//         }));
//       }
//
//       $(window).scroll(function (e) {
//         $.each(classes, function (i, featuredClass) {
//           var curtain = $('.' + featuredClass);
//           var scrollPos = 0 - $(curtain).height() + $(window).scrollTop();
//
//           if (scrollPos < 0) {
//             $('.' + featuredClass + '-reveal').removeClass('below-featured');
//             $(curtain).removeClass('below-featured');
//           } else {
//             $('.' + featuredClass + '-reveal').addClass('below-featured');
//             $(curtain).addClass('below-featured');
//           }
//         });
//       });
//
//       $(window).load(function () {
//         if (typeof $.imagesLoaded !== 'undefined') {
//           $('.featured-curtain').imagesLoaded(featuredSetSize);
//         } else {
//           featuredSetSize();
//         }
//         setFocusOut();
//       });
//
//       $(window).resize(featuredSetSize);
//       featuredSetSize();
//       featuredScroller();
//     }
//   }
// })(jQuery);
