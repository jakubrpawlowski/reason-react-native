include NativeElement;

[@react.component] [@mel.module "react-native"]
external make:
  (
    ~ref: ref=?,
    // RefreshControl props
    ~colors: array(Color.t)=?,
    ~enabled: bool=?,
    ~onRefresh: unit => unit=?,
    ~progressBackgroundColor: Color.t=?,
    ~progressViewOffset: float=?,
    ~refreshing: bool,
    ~tintColor: Color.t=?,
    ~title: string=?,
    ~titleColor: Color.t=?,
    // View props 0.63.0
    ~accessibilityActions: array(Accessibility.actionInfo)=?,
    ~accessibilityElementsHidden: bool=?,
    ~accessibilityHint: string=?,
    ~accessibilityIgnoresInvertColors: bool=?,
    ~accessibilityLabel: string=?,
    ~accessibilityLiveRegion: Accessibility.liveRegion=?,
    ~accessibilityRole: Accessibility.role=?,
    ~accessibilityState: Accessibility.state=?,
    ~accessibilityValue: Accessibility.value=?,
    ~accessibilityViewIsModal: bool=?,
    ~accessible: bool=?,
    ~collapsable: bool=?,
    ~hitSlop: View.edgeInsets=?,
    ~importantForAccessibility: [@mel.string] [
                                  | `auto
                                  | `yes
                                  | `no
                                  | [@mel.as "no-hide-descendants"]
                                    `noHideDescendants
                                ]
                                  =?,
    ~nativeID: string=?,
    ~needsOffscreenAlphaCompositing: bool=?,
    ~onAccessibilityAction: Accessibility.actionEvent => unit=?,
    ~onAccessibilityEscape: unit => unit=?,
    ~onAccessibilityTap: unit => unit=?,
    ~onLayout: Event.layoutEvent => unit=?,
    ~onMagicTap: unit => unit=?,
    // Gesture Responder props
    ~onMoveShouldSetResponder: Event.pressEvent => bool=?,
    ~onMoveShouldSetResponderCapture: Event.pressEvent => bool=?,
    ~onResponderEnd: Event.pressEvent => unit=?,
    ~onResponderGrant: Event.pressEvent => unit=?,
    ~onResponderMove: Event.pressEvent => unit=?,
    ~onResponderReject: Event.pressEvent => unit=?,
    ~onResponderRelease: Event.pressEvent => unit=?,
    ~onResponderStart: Event.pressEvent => unit=?,
    ~onResponderTerminate: Event.pressEvent => unit=?,
    ~onResponderTerminationRequest: Event.pressEvent => bool=?,
    ~onStartShouldSetResponder: Event.pressEvent => bool=?,
    ~onStartShouldSetResponderCapture: Event.pressEvent => bool=?,
    ~pointerEvents: [@mel.string] [
                      | `auto
                      | `none
                      | [@mel.as "box-none"] `boxNone
                      | [@mel.as "box-only"] `boxOnly
                    ]
                      =?,
    ~removeClippedSubviews: bool=?,
    ~renderToHardwareTextureAndroid: bool=?,
    ~shouldRasterizeIOS: bool=?,
    ~style: Style.t=?,
    ~testID: string=?,
    ~children: React.element=?,
    // React Native Web Props
    ~onMouseDown: React.Event.Mouse.t => unit=?,
    ~onMouseEnter: React.Event.Mouse.t => unit=?,
    ~onMouseLeave: React.Event.Mouse.t => unit=?,
    ~onMouseMove: React.Event.Mouse.t => unit=?,
    ~onMouseOver: React.Event.Mouse.t => unit=?,
    ~onMouseOut: React.Event.Mouse.t => unit=?,
    ~onMouseUp: React.Event.Mouse.t => unit=?
  ) =>
  React.element =
  "RefreshControl";
