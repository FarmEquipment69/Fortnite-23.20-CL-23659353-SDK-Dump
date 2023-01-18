// Class /Script/AudioMixer.AudioDeviceNotificationSubsystem
// Size: 0x128
class UAudioDeviceNotificationSubsystem : public UEngineSubsystem
{
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	struct FMulticastInlineDelegate DefaultCaptureDeviceChanged; // 0x38 (0x10)
	unsigned char unreflected_48[0x18]; // 0x48 (0x18) 
	struct FMulticastInlineDelegate DefaultRenderDeviceChanged; // 0x60 (0x10)
	unsigned char unreflected_70[0x18]; // 0x70 (0x18) 
	struct FMulticastInlineDelegate DeviceAdded; // 0x88 (0x10)
	unsigned char unreflected_98[0x18]; // 0x98 (0x18) 
	struct FMulticastInlineDelegate DeviceRemoved; // 0xb0 (0x10)
	unsigned char unreflected_c0[0x18]; // 0xc0 (0x18) 
	struct FMulticastInlineDelegate DeviceStateChanged; // 0xd8 (0x10)
	unsigned char unreflected_e8[0x18]; // 0xe8 (0x18) 
	struct FMulticastInlineDelegate DeviceSwitched; // 0x100 (0x10)
	unsigned char padding_110[0x18]; // 0x110 (0x18)
};

