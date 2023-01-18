// Class /Script/Engine.ColorInputDeviceCurveProperty
// Size: 0xa0
class UColorInputDeviceCurveProperty : public UInputDeviceProperty
{
	struct FDeviceColorCurveData ColorData; // 0x30 (0x10)
	struct TMap<struct FName, struct FDeviceColorCurveData> DeviceOverrideData; // 0x40 (0x50)
	unsigned char padding_90[0x10]; // 0x90 (0x10)
};

