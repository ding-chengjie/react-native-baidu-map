/**
 * Copyright (c) 2016-present, lovebing.org.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

import BaiduMapOverlayInfoWindow,{ NativeProps } from "./InfoWindowNativeComponent";

import React, { Component } from 'react';

import { View } from 'react-native';

import PropTypes from 'prop-types';

export default class InfoWindow extends Component<NativeProps> {
  static propTypes = {
    ...View.propTypes,
    offsetY: PropTypes.number
  };

  static defaultProps = {
    offsetY: 0
  };
  
  constructor() {
    super();
  }

  render() {
    return <BaiduMapOverlayInfoWindow {...this.props} />;
  }
}