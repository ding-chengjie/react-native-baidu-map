import type {HostComponent,ViewProps} from 'react-native';
import codegenNativeComponent from 'react-native/Libraries/Utilities/codegenNativeComponent';
import type { Float } from 'react-native/Libraries/Types/CodegenTypes';
  
  type Stroke = Readonly<{
    color?: string;
    width?: Float;
  }>

  type Location = Readonly<{
    latitude?: Float;
    longitude?: Float;
  }>
  

  type pointsData = ReadonlyArray<Location>;

export interface NativeProps extends ViewProps {
  fillColor:string;
  stroke : Stroke;
  points : pointsData;
}

export default codegenNativeComponent<NativeProps>(
  'BaiduMapOverlayPolygon',
) as HostComponent<NativeProps>;

