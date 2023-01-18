// Class /Script/Engine.ColorInputDeviceProperty
// Size: 0x98
class UColorInputDeviceProperty : public UInputDeviceProperty
{
	struct FDeviceColorData* ColorData; // 0x30 (0x8)
	struct TMap<struct FName, struct FDeviceColorData*> DeviceOverrideData; // 0x38 (0x50)
	unsigned char padding_88[0x10]; // 0x88 (0x10)
};

