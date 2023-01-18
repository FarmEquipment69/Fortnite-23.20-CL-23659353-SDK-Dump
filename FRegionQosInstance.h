// ScriptStruct /Script/Qos.RegionQosInstance
// Size: 0x50
struct FRegionQosInstance
{
	struct FQosRegionInfo Definition; // 0x0 (0x40)
	struct TArray<struct FDatacenterQosInstance> DatacenterOptions; // 0x40 (0x10)
};

