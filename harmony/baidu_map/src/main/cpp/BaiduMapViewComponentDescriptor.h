/**
 * MIT License
 *
 * Copyright (C) 2024 Huawei Device Co., Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 * This code was generated by "react-native codegen-harmony"
 *
 * Do not edit this file as changes may cause incorrect behavior and will be
 * lost once the code is regenerated.
 *
 * @generatorVersion: 1
 */
#pragma once

#include <react/renderer/core/ConcreteComponentDescriptor.h>
#include <react/renderer/components/view/ConcreteViewShadowNode.h>
#include <react/renderer/components/view/ViewShadowNode.h>

namespace facebook {
namespace react {

extern const char BaiduMapViewComponentName[] = "BaiduMapView";

class BaiduMapViewProps : public ViewProps {
  public:
    BaiduMapViewProps() = default;

    BaiduMapViewProps(const PropsParserContext &context, const BaiduMapViewProps &sourceProps, const RawProps &rawProps)
        : ViewProps(context, sourceProps, rawProps) {}
};

using BaiduMapViewShadowNode = ConcreteViewShadowNode<
    BaiduMapViewComponentName,
    BaiduMapViewProps,
    ViewEventEmitter>;

class BaiduMapViewComponentDescriptor final
    : public ConcreteComponentDescriptor<BaiduMapViewShadowNode> {
  public:
    BaiduMapViewComponentDescriptor(ComponentDescriptorParameters const &parameters)
        : ConcreteComponentDescriptor(parameters) {}
};

} // namespace react
} // namespace facebook
