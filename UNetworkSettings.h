// Class /Script/Engine.NetworkSettings
// Size: 0x48
class UNetworkSettings : public UDeveloperSettings
{
	unsigned char bVerifyPeer; // 0x30 (0x1)
	unsigned char bEnableMultiplayerWorldOriginRebasing; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TArray<struct FNetworkEmulationProfileDescription> NetworkEmulationProfiles; // 0x38 (0x10)
};

