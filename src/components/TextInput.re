include TextInputElement;
module ChangeEvent = {
  type payload = {
    eventCount: int,
    target: int,
    text: string,
  };

  include Event.SyntheticEvent({
    type _payload = payload;
  });
};

type changeEvent = ChangeEvent.t;

module EditingEvent = {
  type payload = {
    text: string,
    eventCount: int,
    target: int,
  };

  include Event.SyntheticEvent({
    type _payload = payload;
  });
};

type editingEvent = EditingEvent.t;

module ContentSizeChangeEvent = {
  type contentSize = {
    width: float,
    height: float,
  };
  type payload = {
    target: int,
    contentSize,
  };

  include Event.SyntheticEvent({
    type _payload = payload;
  });
};

type contentSizeChangeEvent = ContentSizeChangeEvent.t;

module ScrollEvent = {
  type contentOffset = {
    x: float,
    y: float,
  };

  type payload = {contentOffset};

  include Event.SyntheticEvent({
    type _payload = payload;
  });
};

type scrollEvent = ScrollEvent.t;

type selection = {
  start: int,
  [@mel.as "end"]
  _end: int,
};

module SelectionChangeEvent = {
  type payload = {
    selection,
    target: int,
  };

  include Event.SyntheticEvent({
    type _payload = payload;
  });
};

type selectionChangeEvent = SelectionChangeEvent.t;

module KeyPressEvent = {
  type payload = {
    key: string,
    target: Js.Nullable.t(int),
    eventCount: Js.Nullable.t(int),
  };

  include Event.SyntheticEvent({
    type _payload = payload;
  });
};

type keyPressEvent = KeyPressEvent.t;

type autoCapitalize = [ | `characters | `words | `sentences | `none];

type t;

type importantForAutofill = [
  | `auto
  | `no
  | `noExcludeDescendants
  | `yes
  | `yesExcludeDescendants
];

type keyboardAppearance = [ | `default | `light | `dark];

type textBreakStrategy = [ | `balanced | `highQuality | `simple];

type textContentType = [
  | `none
  | `URL
  | `addressCity
  | `addressCityAndState
  | `addressState
  | `countryName
  | `creditCardNumber
  | `emailAddress
  | `familyName
  | `fullStreetAddress
  | `givenName
  | `jobTitle
  | `location
  | `middleName
  | `name
  | `namePrefix
  | `nameSuffix
  | `nickname
  | `organizationName
  | `postalCode
  | `streetAddressLine1
  | `streetAddressLine2
  | `sublocality
  | `telephoneNumber
  | `username
  | `password
  | `newPassword
  | `oneTimeCode
];

[@react.component] [@mel.module "react-native"]
external make:
  (
    ~ref: ref=?,
    // TextInput props
    ~allowFontScaling: bool=?,
    ~autoCapitalize: autoCapitalize=?,
    ~autoCompleteType: [@mel.string] [
                         | `off
                         | `username
                         | `password
                         | `email
                         | `name
                         | `tel
                         | [@mel.as "street-address"] `streetAddress
                         | [@mel.as "postal-code"] `postalCode
                         | [@mel.as "cc-number"] `ccNumber
                         | [@mel.as "cc-csc"] `ccCsc
                         | [@mel.as "cc-exp"] `ccExp
                         | [@mel.as "cc-exp-month"] `ccExpMonth
                         | [@mel.as "cc-exp-year"] `ccExpYear
                       ]
                         =?,
    ~autoCorrect: bool=?,
    ~autoFocus: bool=?,
    ~blurOnSubmit: bool=?,
    ~caretHidden: bool=?,
    ~clearButtonMode: [@mel.string] [
                        | `never
                        | [@mel.as "while-editing"] `whileEditing
                        | [@mel.as "unless-editing"] `unlessEditing
                        | `always
                      ]
                        =?,
    ~clearTextOnFocus: bool=?,
    ~contextMenuHidden: bool=?,
    ~defaultValue: string=?,
    ~disableFullscreenUI: bool=?,
    ~editable: bool=?,
    ~enablesReturnKeyAutomatically: bool=?,
    ~importantForAutofill: importantForAutofill=?,
    ~inlineImageLeft: string=?,
    ~inlineImagePadding: float=?,
    ~inputAccessoryViewID: string=?,
    ~keyboardAppearance: keyboardAppearance=?,
    ~keyboardType: [@mel.string] [
                     | `default
                     | [@mel.as "number-pad"] `numberPad
                     | [@mel.as "decimal-pad"] `decimalPad
                     | `numeric
                     | [@mel.as "email-address"] `emailAddress
                     | [@mel.as "phone-pad"] `phonePad
                     | [@mel.as "ascii-capable"] `asciiCapable
                     | [@mel.as "numbers-and-punctuation"]
                       `numbersAndPunctuation
                     | `url
                     | [@mel.as "name-phone-pad"] `namePhonePad
                     | `twitter
                     | [@mel.as "web-search"] `webSearch
                     | [@mel.as "visible-password"] `visiblePassword
                   ]
                     =?,
    ~maxFontSizeMultiplier: float=?,
    ~maxLength: int=?,
    ~multiline: bool=?,
    ~numberOfLines: int=?,
    ~onBlur: Event.targetEvent => unit=?,
    ~onChange: changeEvent => unit=?,
    ~onChangeText: string => unit=?,
    ~onContentSizeChange: contentSizeChangeEvent => unit=?,
    ~onEndEditing: editingEvent => unit=?,
    ~onFocus: Event.targetEvent => unit=?,
    ~onKeyPress: keyPressEvent => unit=?,
    ~onPressIn: Event.pressEvent => bool=?,
    ~onPressOut: Event.pressEvent => bool=?,
    ~onScroll: scrollEvent => unit=?,
    ~onSelectionChange: selectionChangeEvent => unit=?,
    ~onSubmitEditing: editingEvent => unit=?,
    ~placeholder: string=?,
    ~placeholderTextColor: Color.t=?,
    ~returnKeyLabel: string=?,
    ~returnKeyType: [@mel.string] [
                      | [@mel.as "done"] `done_
                      | `go
                      | `next
                      | `search
                      | `send
                      | `none
                      | `previous
                      | `default
                      | [@mel.as "emergency-call"] `emergencyCall
                      | `google
                      | `join
                      | `route
                      | `yahoo
                    ]
                      =?,
    ~rejectResponderTermination: bool=?,
    ~scrollEnabled: bool=?,
    ~secureTextEntry: bool=?,
    ~selection: selection=?,
    ~selectionColor: Color.t=?,
    ~selectTextOnFocus: bool=?,
    ~showSoftInputOnFocus: bool=?,
    ~spellCheck: bool=?,
    ~textBreakStrategy: textBreakStrategy=?,
    ~textContentType: textContentType=?,
    ~underlineColorAndroid: Color.t=?,
    ~value: string=?,
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
  "TextInput";
