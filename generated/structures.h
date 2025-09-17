
#ifndef WOLF_STRUCTURES_H
#define WOLF_STRUCTURES_H

// includes
#include "enums.h"

namespace Wolf {

// content

struct BaseOutStructure {

  using NativeType = VkBaseOutStructure;

  auto operator<=>(const BaseOutStructure &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = {};
  BaseOutStructure *pNext = {};
};

struct BaseInStructure {

  using NativeType = VkBaseInStructure;

  auto operator<=>(const BaseInStructure &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = {};
  BaseInStructure *pNext = {};
};

struct Offset2D {

  using NativeType = VkOffset2D;

  auto operator<=>(const Offset2D &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  int32_t x = {};
  int32_t y = {};
};

struct Offset3D {

  using NativeType = VkOffset3D;

  auto operator<=>(const Offset3D &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  int32_t x = {};
  int32_t y = {};
  int32_t z = {};
};

struct Extent2D {

  using NativeType = VkExtent2D;

  auto operator<=>(const Extent2D &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t width = {};
  uint32_t height = {};
};

struct Extent3D {

  using NativeType = VkExtent3D;

  auto operator<=>(const Extent3D &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t width = {};
  uint32_t height = {};
  uint32_t depth = {};
};

struct Viewport {

  using NativeType = VkViewport;

  auto operator<=>(const Viewport &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  float x = {};
  float y = {};
  float width = {};
  float height = {};
  float minDepth = {};
  float maxDepth = {};
};

struct Rect2D {

  using NativeType = VkRect2D;

  auto operator<=>(const Rect2D &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  Offset2D offset = {};
  Extent2D extent = {};
};

struct ClearRect {

  using NativeType = VkClearRect;

  auto operator<=>(const ClearRect &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  Rect2D rect = {};
  uint32_t baseArrayLayer = {};
  uint32_t layerCount = {};
};

struct ComponentMapping {

  using NativeType = VkComponentMapping;

  auto operator<=>(const ComponentMapping &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  ComponentSwizzle r = {};
  ComponentSwizzle g = {};
  ComponentSwizzle b = {};
  ComponentSwizzle a = {};
};

struct PhysicalDeviceLimits {

  using NativeType = VkPhysicalDeviceLimits;

  auto operator<=>(const PhysicalDeviceLimits &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t maxImageDimension1D = {};
  uint32_t maxImageDimension2D = {};
  uint32_t maxImageDimension3D = {};
  uint32_t maxImageDimensionCube = {};
  uint32_t maxImageArrayLayers = {};
  uint32_t maxTexelBufferElements = {};
  uint32_t maxUniformBufferRange = {};
  uint32_t maxStorageBufferRange = {};
  uint32_t maxPushConstantsSize = {};
  uint32_t maxMemoryAllocationCount = {};
  uint32_t maxSamplerAllocationCount = {};
  VkDeviceSize bufferImageGranularity = {};
  VkDeviceSize sparseAddressSpaceSize = {};
  uint32_t maxBoundDescriptorSets = {};
  uint32_t maxPerStageDescriptorSamplers = {};
  uint32_t maxPerStageDescriptorUniformBuffers = {};
  uint32_t maxPerStageDescriptorStorageBuffers = {};
  uint32_t maxPerStageDescriptorSampledImages = {};
  uint32_t maxPerStageDescriptorStorageImages = {};
  uint32_t maxPerStageDescriptorInputAttachments = {};
  uint32_t maxPerStageResources = {};
  uint32_t maxDescriptorSetSamplers = {};
  uint32_t maxDescriptorSetUniformBuffers = {};
  uint32_t maxDescriptorSetUniformBuffersDynamic = {};
  uint32_t maxDescriptorSetStorageBuffers = {};
  uint32_t maxDescriptorSetStorageBuffersDynamic = {};
  uint32_t maxDescriptorSetSampledImages = {};
  uint32_t maxDescriptorSetStorageImages = {};
  uint32_t maxDescriptorSetInputAttachments = {};
  uint32_t maxVertexInputAttributes = {};
  uint32_t maxVertexInputBindings = {};
  uint32_t maxVertexInputAttributeOffset = {};
  uint32_t maxVertexInputBindingStride = {};
  uint32_t maxVertexOutputComponents = {};
  uint32_t maxTessellationGenerationLevel = {};
  uint32_t maxTessellationPatchSize = {};
  uint32_t maxTessellationControlPerVertexInputComponents = {};
  uint32_t maxTessellationControlPerVertexOutputComponents = {};
  uint32_t maxTessellationControlPerPatchOutputComponents = {};
  uint32_t maxTessellationControlTotalOutputComponents = {};
  uint32_t maxTessellationEvaluationInputComponents = {};
  uint32_t maxTessellationEvaluationOutputComponents = {};
  uint32_t maxGeometryShaderInvocations = {};
  uint32_t maxGeometryInputComponents = {};
  uint32_t maxGeometryOutputComponents = {};
  uint32_t maxGeometryOutputVertices = {};
  uint32_t maxGeometryTotalOutputComponents = {};
  uint32_t maxFragmentInputComponents = {};
  uint32_t maxFragmentOutputAttachments = {};
  uint32_t maxFragmentDualSrcAttachments = {};
  uint32_t maxFragmentCombinedOutputResources = {};
  uint32_t maxComputeSharedMemorySize = {};
  uint32_t maxComputeWorkGroupCount[3] = {};
  uint32_t maxComputeWorkGroupInvocations = {};
  uint32_t maxComputeWorkGroupSize[3] = {};
  uint32_t subPixelPrecisionBits = {};
  uint32_t subTexelPrecisionBits = {};
  uint32_t mipmapPrecisionBits = {};
  uint32_t maxDrawIndexedIndexValue = {};
  uint32_t maxDrawIndirectCount = {};
  float maxSamplerLodBias = {};
  float maxSamplerAnisotropy = {};
  uint32_t maxViewports = {};
  uint32_t maxViewportDimensions[2] = {};
  float viewportBoundsRange[2] = {};
  uint32_t viewportSubPixelBits = {};
  size_t minMemoryMapAlignment = {};
  VkDeviceSize minTexelBufferOffsetAlignment = {};
  VkDeviceSize minUniformBufferOffsetAlignment = {};
  VkDeviceSize minStorageBufferOffsetAlignment = {};
  int32_t minTexelOffset = {};
  uint32_t maxTexelOffset = {};
  int32_t minTexelGatherOffset = {};
  uint32_t maxTexelGatherOffset = {};
  float minInterpolationOffset = {};
  float maxInterpolationOffset = {};
  uint32_t subPixelInterpolationOffsetBits = {};
  uint32_t maxFramebufferWidth = {};
  uint32_t maxFramebufferHeight = {};
  uint32_t maxFramebufferLayers = {};
  SampleCountMask framebufferColorSampleCounts = {};
  SampleCountMask framebufferDepthSampleCounts = {};
  SampleCountMask framebufferStencilSampleCounts = {};
  SampleCountMask framebufferNoAttachmentsSampleCounts = {};
  uint32_t maxColorAttachments = {};
  SampleCountMask sampledImageColorSampleCounts = {};
  SampleCountMask sampledImageIntegerSampleCounts = {};
  SampleCountMask sampledImageDepthSampleCounts = {};
  SampleCountMask sampledImageStencilSampleCounts = {};
  SampleCountMask storageImageSampleCounts = {};
  uint32_t maxSampleMaskWords = {};
  VkBool32 timestampComputeAndGraphics = {};
  float timestampPeriod = {};
  uint32_t maxClipDistances = {};
  uint32_t maxCullDistances = {};
  uint32_t maxCombinedClipAndCullDistances = {};
  uint32_t discreteQueuePriorities = {};
  float pointSizeRange[2] = {};
  float lineWidthRange[2] = {};
  float pointSizeGranularity = {};
  float lineWidthGranularity = {};
  VkBool32 strictLines = {};
  VkBool32 standardSampleLocations = {};
  VkDeviceSize optimalBufferCopyOffsetAlignment = {};
  VkDeviceSize optimalBufferCopyRowPitchAlignment = {};
  VkDeviceSize nonCoherentAtomSize = {};
};

struct PhysicalDeviceSparseProperties {

  using NativeType = VkPhysicalDeviceSparseProperties;

  auto operator<=>(const PhysicalDeviceSparseProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkBool32 residencyStandard2DBlockShape = {};
  VkBool32 residencyStandard2DMultisampleBlockShape = {};
  VkBool32 residencyStandard3DBlockShape = {};
  VkBool32 residencyAlignedMipSize = {};
  VkBool32 residencyNonResidentStrict = {};
};

struct PhysicalDeviceProperties {

  using NativeType = VkPhysicalDeviceProperties;

  auto operator<=>(const PhysicalDeviceProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t apiVersion = {};
  uint32_t driverVersion = {};
  uint32_t vendorID = {};
  uint32_t deviceID = {};
  PhysicalDeviceType deviceType = {};
  char deviceName[VK_MAX_PHYSICAL_DEVICE_NAME_SIZE] = {};
  uint8_t pipelineCacheUUID[VK_UUID_SIZE] = {};
  PhysicalDeviceLimits limits = {};
  PhysicalDeviceSparseProperties sparseProperties = {};
};

struct ExtensionProperties {

  using NativeType = VkExtensionProperties;

  auto operator<=>(const ExtensionProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  char extensionName[VK_MAX_EXTENSION_NAME_SIZE] = {};
  uint32_t specVersion = {};
};

struct LayerProperties {

  using NativeType = VkLayerProperties;

  auto operator<=>(const LayerProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  char layerName[VK_MAX_EXTENSION_NAME_SIZE] = {};
  uint32_t specVersion = {};
  uint32_t implementationVersion = {};
  char description[VK_MAX_DESCRIPTION_SIZE] = {};
};

struct ApplicationInfo {
  static constexpr StructureType structure_type = StructureType::E_APPLICATION_INFO;

  using NativeType = VkApplicationInfo;

  auto operator<=>(const ApplicationInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  char *pApplicationName = {};
  uint32_t applicationVersion = {};
  char *pEngineName = {};
  uint32_t engineVersion = {};
  uint32_t apiVersion = {};
};

struct AllocationCallbacks {

  using NativeType = VkAllocationCallbacks;

  auto operator<=>(const AllocationCallbacks &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  void *pUserData = {};
  PFN_vkAllocationFunction pfnAllocation = {};
  PFN_vkReallocationFunction pfnReallocation = {};
  PFN_vkFreeFunction pfnFree = {};
  PFN_vkInternalAllocationNotification pfnInternalAllocation = {};
  PFN_vkInternalFreeNotification pfnInternalFree = {};
};

struct DeviceQueueCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_QUEUE_CREATE_INFO;

  using NativeType = VkDeviceQueueCreateInfo;

  auto operator<=>(const DeviceQueueCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DeviceQueueCreateMask flags = {};
  uint32_t queueFamilyIndex = {};
  uint32_t queueCount = {};
  float *pQueuePriorities = {};
};

struct PhysicalDeviceFeatures {

  using NativeType = VkPhysicalDeviceFeatures;

  auto operator<=>(const PhysicalDeviceFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkBool32 robustBufferAccess = {};
  VkBool32 fullDrawIndexUint32 = {};
  VkBool32 imageCubeArray = {};
  VkBool32 independentBlend = {};
  VkBool32 geometryShader = {};
  VkBool32 tessellationShader = {};
  VkBool32 sampleRateShading = {};
  VkBool32 dualSrcBlend = {};
  VkBool32 logicOp = {};
  VkBool32 multiDrawIndirect = {};
  VkBool32 drawIndirectFirstInstance = {};
  VkBool32 depthClamp = {};
  VkBool32 depthBiasClamp = {};
  VkBool32 fillModeNonSolid = {};
  VkBool32 depthBounds = {};
  VkBool32 wideLines = {};
  VkBool32 largePoints = {};
  VkBool32 alphaToOne = {};
  VkBool32 multiViewport = {};
  VkBool32 samplerAnisotropy = {};
  VkBool32 textureCompressionETC2 = {};
  VkBool32 textureCompressionASTC_LDR = {};
  VkBool32 textureCompressionBC = {};
  VkBool32 occlusionQueryPrecise = {};
  VkBool32 pipelineStatisticsQuery = {};
  VkBool32 vertexPipelineStoresAndAtomics = {};
  VkBool32 fragmentStoresAndAtomics = {};
  VkBool32 shaderTessellationAndGeometryPointSize = {};
  VkBool32 shaderImageGatherExtended = {};
  VkBool32 shaderStorageImageExtendedFormats = {};
  VkBool32 shaderStorageImageMultisample = {};
  VkBool32 shaderStorageImageReadWithoutFormat = {};
  VkBool32 shaderStorageImageWriteWithoutFormat = {};
  VkBool32 shaderUniformBufferArrayDynamicIndexing = {};
  VkBool32 shaderSampledImageArrayDynamicIndexing = {};
  VkBool32 shaderStorageBufferArrayDynamicIndexing = {};
  VkBool32 shaderStorageImageArrayDynamicIndexing = {};
  VkBool32 shaderClipDistance = {};
  VkBool32 shaderCullDistance = {};
  VkBool32 shaderFloat64 = {};
  VkBool32 shaderInt64 = {};
  VkBool32 shaderInt16 = {};
  VkBool32 shaderResourceResidency = {};
  VkBool32 shaderResourceMinLod = {};
  VkBool32 sparseBinding = {};
  VkBool32 sparseResidencyBuffer = {};
  VkBool32 sparseResidencyImage2D = {};
  VkBool32 sparseResidencyImage3D = {};
  VkBool32 sparseResidency2Samples = {};
  VkBool32 sparseResidency4Samples = {};
  VkBool32 sparseResidency8Samples = {};
  VkBool32 sparseResidency16Samples = {};
  VkBool32 sparseResidencyAliased = {};
  VkBool32 variableMultisampleRate = {};
  VkBool32 inheritedQueries = {};
};

struct DeviceCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_CREATE_INFO;

  using NativeType = VkDeviceCreateInfo;

  auto operator<=>(const DeviceCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DeviceCreateMask flags = {};
  uint32_t queueCreateInfoCount = {};
  DeviceQueueCreateInfo *pQueueCreateInfos = {};
  uint32_t enabledLayerCount = {};
  char *const *ppEnabledLayerNames = {};
  uint32_t enabledExtensionCount = {};
  char *const *ppEnabledExtensionNames = {};
  PhysicalDeviceFeatures *pEnabledFeatures = {};
};

struct InstanceCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_INSTANCE_CREATE_INFO;

  using NativeType = VkInstanceCreateInfo;

  auto operator<=>(const InstanceCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  InstanceCreateMask flags = {};
  ApplicationInfo *pApplicationInfo = {};
  uint32_t enabledLayerCount = {};
  char *const *ppEnabledLayerNames = {};
  uint32_t enabledExtensionCount = {};
  char *const *ppEnabledExtensionNames = {};
};

struct QueueFamilyProperties {

  using NativeType = VkQueueFamilyProperties;

  auto operator<=>(const QueueFamilyProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  QueueMask queueFlags = {};
  uint32_t queueCount = {};
  uint32_t timestampValidBits = {};
  Extent3D minImageTransferGranularity = {};
};

struct MemoryType {

  using NativeType = VkMemoryType;

  auto operator<=>(const MemoryType &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  MemoryPropertyMask propertyFlags = {};
  uint32_t heapIndex = {};
};

struct MemoryHeap {

  using NativeType = VkMemoryHeap;

  auto operator<=>(const MemoryHeap &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkDeviceSize size = {};
  MemoryHeapMask flags = {};
};

struct PhysicalDeviceMemoryProperties {

  using NativeType = VkPhysicalDeviceMemoryProperties;

  auto operator<=>(const PhysicalDeviceMemoryProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t memoryTypeCount = {};
  MemoryType memoryTypes[VK_MAX_MEMORY_TYPES] = {};
  uint32_t memoryHeapCount = {};
  MemoryHeap memoryHeaps[VK_MAX_MEMORY_HEAPS] = {};
};

struct MemoryAllocateInfo {
  static constexpr StructureType structure_type = StructureType::E_MEMORY_ALLOCATE_INFO;

  using NativeType = VkMemoryAllocateInfo;

  auto operator<=>(const MemoryAllocateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceSize allocationSize = {};
  uint32_t memoryTypeIndex = {};
};

struct MemoryRequirements {

  using NativeType = VkMemoryRequirements;

  auto operator<=>(const MemoryRequirements &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkDeviceSize size = {};
  VkDeviceSize alignment = {};
  uint32_t memoryTypeBits = {};
};

struct SparseImageFormatProperties {

  using NativeType = VkSparseImageFormatProperties;

  auto operator<=>(const SparseImageFormatProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  ImageAspectMask aspectMask = {};
  Extent3D imageGranularity = {};
  SparseImageFormatMask flags = {};
};

struct SparseImageMemoryRequirements {

  using NativeType = VkSparseImageMemoryRequirements;

  auto operator<=>(const SparseImageMemoryRequirements &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  SparseImageFormatProperties formatProperties = {};
  uint32_t imageMipTailFirstLod = {};
  VkDeviceSize imageMipTailSize = {};
  VkDeviceSize imageMipTailOffset = {};
  VkDeviceSize imageMipTailStride = {};
};

struct MappedMemoryRange {
  static constexpr StructureType structure_type = StructureType::E_MAPPED_MEMORY_RANGE;

  using NativeType = VkMappedMemoryRange;

  auto operator<=>(const MappedMemoryRange &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceMemory memory = {};
  VkDeviceSize offset = {};
  VkDeviceSize size = {};
};

struct FormatProperties {

  using NativeType = VkFormatProperties;

  auto operator<=>(const FormatProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  FormatFeatureMask linearTilingFeatures = {};
  FormatFeatureMask optimalTilingFeatures = {};
  FormatFeatureMask bufferFeatures = {};
};

struct ImageFormatProperties {

  using NativeType = VkImageFormatProperties;

  auto operator<=>(const ImageFormatProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  Extent3D maxExtent = {};
  uint32_t maxMipLevels = {};
  uint32_t maxArrayLayers = {};
  SampleCountMask sampleCounts = {};
  VkDeviceSize maxResourceSize = {};
};

struct DescriptorBufferInfo {

  using NativeType = VkDescriptorBufferInfo;

  auto operator<=>(const DescriptorBufferInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkBuffer buffer = {};
  VkDeviceSize offset = {};
  VkDeviceSize range = {};
};

struct DescriptorImageInfo {

  using NativeType = VkDescriptorImageInfo;

  auto operator<=>(const DescriptorImageInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkSampler sampler = {};
  VkImageView imageView = {};
  ImageLayout imageLayout = {};
};

struct WriteDescriptorSet {
  static constexpr StructureType structure_type = StructureType::E_WRITE_DESCRIPTOR_SET;

  using NativeType = VkWriteDescriptorSet;

  auto operator<=>(const WriteDescriptorSet &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDescriptorSet dstSet = {};
  uint32_t dstBinding = {};
  uint32_t dstArrayElement = {};
  uint32_t descriptorCount = {};
  DescriptorType descriptorType = {};
  DescriptorImageInfo *pImageInfo = {};
  DescriptorBufferInfo *pBufferInfo = {};
  VkBufferView *pTexelBufferView = {};
};

struct CopyDescriptorSet {
  static constexpr StructureType structure_type = StructureType::E_COPY_DESCRIPTOR_SET;

  using NativeType = VkCopyDescriptorSet;

  auto operator<=>(const CopyDescriptorSet &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDescriptorSet srcSet = {};
  uint32_t srcBinding = {};
  uint32_t srcArrayElement = {};
  VkDescriptorSet dstSet = {};
  uint32_t dstBinding = {};
  uint32_t dstArrayElement = {};
  uint32_t descriptorCount = {};
};

struct BufferUsageFlags2CreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_BUFFER_USAGE_FLAGS_2_CREATE_INFO_KHR;

  using NativeType = VkBufferUsageFlags2CreateInfoKHR;

  auto operator<=>(const BufferUsageFlags2CreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  BufferUsageMask2 usage = {};
};

struct BufferCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_BUFFER_CREATE_INFO;

  using NativeType = VkBufferCreateInfo;

  auto operator<=>(const BufferCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  BufferCreateMask flags = {};
  VkDeviceSize size = {};
  BufferUsageMask usage = {};
  SharingMode sharingMode = {};
  uint32_t queueFamilyIndexCount = {};
  uint32_t *pQueueFamilyIndices = {};
};

struct BufferViewCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_BUFFER_VIEW_CREATE_INFO;

  using NativeType = VkBufferViewCreateInfo;

  auto operator<=>(const BufferViewCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  BufferViewCreateMask flags = {};
  VkBuffer buffer = {};
  Format format = {};
  VkDeviceSize offset = {};
  VkDeviceSize range = {};
};

struct ImageSubresource {

  using NativeType = VkImageSubresource;

  auto operator<=>(const ImageSubresource &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  ImageAspectMask aspectMask = {};
  uint32_t mipLevel = {};
  uint32_t arrayLayer = {};
};

struct ImageSubresourceLayers {

  using NativeType = VkImageSubresourceLayers;

  auto operator<=>(const ImageSubresourceLayers &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  ImageAspectMask aspectMask = {};
  uint32_t mipLevel = {};
  uint32_t baseArrayLayer = {};
  uint32_t layerCount = {};
};

struct ImageSubresourceRange {

  using NativeType = VkImageSubresourceRange;

  auto operator<=>(const ImageSubresourceRange &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  ImageAspectMask aspectMask = {};
  uint32_t baseMipLevel = {};
  uint32_t levelCount = {};
  uint32_t baseArrayLayer = {};
  uint32_t layerCount = {};
};

struct MemoryBarrier {
  static constexpr StructureType structure_type = StructureType::E_MEMORY_BARRIER;

  using NativeType = VkMemoryBarrier;

  auto operator<=>(const MemoryBarrier &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  AccessMask srcAccessMask = {};
  AccessMask dstAccessMask = {};
};

struct BufferMemoryBarrier {
  static constexpr StructureType structure_type = StructureType::E_BUFFER_MEMORY_BARRIER;

  using NativeType = VkBufferMemoryBarrier;

  auto operator<=>(const BufferMemoryBarrier &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  AccessMask srcAccessMask = {};
  AccessMask dstAccessMask = {};
  uint32_t srcQueueFamilyIndex = {};
  uint32_t dstQueueFamilyIndex = {};
  VkBuffer buffer = {};
  VkDeviceSize offset = {};
  VkDeviceSize size = {};
};

struct ImageMemoryBarrier {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_MEMORY_BARRIER;

  using NativeType = VkImageMemoryBarrier;

  auto operator<=>(const ImageMemoryBarrier &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  AccessMask srcAccessMask = {};
  AccessMask dstAccessMask = {};
  ImageLayout oldLayout = {};
  ImageLayout newLayout = {};
  uint32_t srcQueueFamilyIndex = {};
  uint32_t dstQueueFamilyIndex = {};
  VkImage image = {};
  ImageSubresourceRange subresourceRange = {};
};

struct ImageCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_CREATE_INFO;

  using NativeType = VkImageCreateInfo;

  auto operator<=>(const ImageCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ImageCreateMask flags = {};
  ImageType imageType = {};
  Format format = {};
  Extent3D extent = {};
  uint32_t mipLevels = {};
  uint32_t arrayLayers = {};
  SampleCountMaskBits samples = {};
  ImageTiling tiling = {};
  ImageUsageMask usage = {};
  SharingMode sharingMode = {};
  uint32_t queueFamilyIndexCount = {};
  uint32_t *pQueueFamilyIndices = {};
  ImageLayout initialLayout = {};
};

struct SubresourceLayout {

  using NativeType = VkSubresourceLayout;

  auto operator<=>(const SubresourceLayout &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkDeviceSize offset = {};
  VkDeviceSize size = {};
  VkDeviceSize rowPitch = {};
  VkDeviceSize arrayPitch = {};
  VkDeviceSize depthPitch = {};
};

struct ImageViewCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_VIEW_CREATE_INFO;

  using NativeType = VkImageViewCreateInfo;

  auto operator<=>(const ImageViewCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ImageViewCreateMask flags = {};
  VkImage image = {};
  ImageViewType viewType = {};
  Format format = {};
  ComponentMapping components = {};
  ImageSubresourceRange subresourceRange = {};
};

struct BufferCopy {

  using NativeType = VkBufferCopy;

  auto operator<=>(const BufferCopy &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkDeviceSize srcOffset = {};
  VkDeviceSize dstOffset = {};
  VkDeviceSize size = {};
};

struct SparseMemoryBind {

  using NativeType = VkSparseMemoryBind;

  auto operator<=>(const SparseMemoryBind &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkDeviceSize resourceOffset = {};
  VkDeviceSize size = {};
  VkDeviceMemory memory = {};
  VkDeviceSize memoryOffset = {};
  SparseMemoryBindMask flags = {};
};

struct SparseImageMemoryBind {

  using NativeType = VkSparseImageMemoryBind;

  auto operator<=>(const SparseImageMemoryBind &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  ImageSubresource subresource = {};
  Offset3D offset = {};
  Extent3D extent = {};
  VkDeviceMemory memory = {};
  VkDeviceSize memoryOffset = {};
  SparseMemoryBindMask flags = {};
};

struct SparseBufferMemoryBindInfo {

  using NativeType = VkSparseBufferMemoryBindInfo;

  auto operator<=>(const SparseBufferMemoryBindInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkBuffer buffer = {};
  uint32_t bindCount = {};
  SparseMemoryBind *pBinds = {};
};

struct SparseImageOpaqueMemoryBindInfo {

  using NativeType = VkSparseImageOpaqueMemoryBindInfo;

  auto operator<=>(const SparseImageOpaqueMemoryBindInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkImage image = {};
  uint32_t bindCount = {};
  SparseMemoryBind *pBinds = {};
};

struct SparseImageMemoryBindInfo {

  using NativeType = VkSparseImageMemoryBindInfo;

  auto operator<=>(const SparseImageMemoryBindInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkImage image = {};
  uint32_t bindCount = {};
  SparseImageMemoryBind *pBinds = {};
};

struct BindSparseInfo {
  static constexpr StructureType structure_type = StructureType::E_BIND_SPARSE_INFO;

  using NativeType = VkBindSparseInfo;

  auto operator<=>(const BindSparseInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t waitSemaphoreCount = {};
  VkSemaphore *pWaitSemaphores = {};
  uint32_t bufferBindCount = {};
  SparseBufferMemoryBindInfo *pBufferBinds = {};
  uint32_t imageOpaqueBindCount = {};
  SparseImageOpaqueMemoryBindInfo *pImageOpaqueBinds = {};
  uint32_t imageBindCount = {};
  SparseImageMemoryBindInfo *pImageBinds = {};
  uint32_t signalSemaphoreCount = {};
  VkSemaphore *pSignalSemaphores = {};
};

struct ImageCopy {

  using NativeType = VkImageCopy;

  auto operator<=>(const ImageCopy &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  ImageSubresourceLayers srcSubresource = {};
  Offset3D srcOffset = {};
  ImageSubresourceLayers dstSubresource = {};
  Offset3D dstOffset = {};
  Extent3D extent = {};
};

struct ImageBlit {

  using NativeType = VkImageBlit;

  auto operator<=>(const ImageBlit &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  ImageSubresourceLayers srcSubresource = {};
  Offset3D srcOffsets[2] = {};
  ImageSubresourceLayers dstSubresource = {};
  Offset3D dstOffsets[2] = {};
};

struct BufferImageCopy {

  using NativeType = VkBufferImageCopy;

  auto operator<=>(const BufferImageCopy &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkDeviceSize bufferOffset = {};
  uint32_t bufferRowLength = {};
  uint32_t bufferImageHeight = {};
  ImageSubresourceLayers imageSubresource = {};
  Offset3D imageOffset = {};
  Extent3D imageExtent = {};
};

struct CopyMemoryIndirectCommandNV {

  using NativeType = VkCopyMemoryIndirectCommandNV;

  auto operator<=>(const CopyMemoryIndirectCommandNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkDeviceAddress srcAddress = {};
  VkDeviceAddress dstAddress = {};
  VkDeviceSize size = {};
};

struct CopyMemoryToImageIndirectCommandNV {

  using NativeType = VkCopyMemoryToImageIndirectCommandNV;

  auto operator<=>(const CopyMemoryToImageIndirectCommandNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkDeviceAddress srcAddress = {};
  uint32_t bufferRowLength = {};
  uint32_t bufferImageHeight = {};
  ImageSubresourceLayers imageSubresource = {};
  Offset3D imageOffset = {};
  Extent3D imageExtent = {};
};

struct ImageResolve {

  using NativeType = VkImageResolve;

  auto operator<=>(const ImageResolve &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  ImageSubresourceLayers srcSubresource = {};
  Offset3D srcOffset = {};
  ImageSubresourceLayers dstSubresource = {};
  Offset3D dstOffset = {};
  Extent3D extent = {};
};

struct ShaderModuleCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_SHADER_MODULE_CREATE_INFO;

  using NativeType = VkShaderModuleCreateInfo;

  auto operator<=>(const ShaderModuleCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ShaderModuleCreateMask flags = {};
  size_t codeSize = {};
  uint32_t *pCode = {};
};

struct DescriptorSetLayoutBinding {

  using NativeType = VkDescriptorSetLayoutBinding;

  auto operator<=>(const DescriptorSetLayoutBinding &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t binding = {};
  DescriptorType descriptorType = {};
  uint32_t descriptorCount = {};
  ShaderStageMask stageFlags = {};
  VkSampler *pImmutableSamplers = {};
};

struct DescriptorSetLayoutCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;

  using NativeType = VkDescriptorSetLayoutCreateInfo;

  auto operator<=>(const DescriptorSetLayoutCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DescriptorSetLayoutCreateMask flags = {};
  uint32_t bindingCount = {};
  DescriptorSetLayoutBinding *pBindings = {};
};

struct DescriptorPoolSize {

  using NativeType = VkDescriptorPoolSize;

  auto operator<=>(const DescriptorPoolSize &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  DescriptorType type = {};
  uint32_t descriptorCount = {};
};

struct DescriptorPoolCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_DESCRIPTOR_POOL_CREATE_INFO;

  using NativeType = VkDescriptorPoolCreateInfo;

  auto operator<=>(const DescriptorPoolCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DescriptorPoolCreateMask flags = {};
  uint32_t maxSets = {};
  uint32_t poolSizeCount = {};
  DescriptorPoolSize *pPoolSizes = {};
};

struct DescriptorSetAllocateInfo {
  static constexpr StructureType structure_type = StructureType::E_DESCRIPTOR_SET_ALLOCATE_INFO;

  using NativeType = VkDescriptorSetAllocateInfo;

  auto operator<=>(const DescriptorSetAllocateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDescriptorPool descriptorPool = {};
  uint32_t descriptorSetCount = {};
  VkDescriptorSetLayout *pSetLayouts = {};
};

struct SpecializationMapEntry {

  using NativeType = VkSpecializationMapEntry;

  auto operator<=>(const SpecializationMapEntry &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t constantID = {};
  uint32_t offset = {};
  size_t size = {};
};

struct SpecializationInfo {

  using NativeType = VkSpecializationInfo;

  auto operator<=>(const SpecializationInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t mapEntryCount = {};
  SpecializationMapEntry *pMapEntries = {};
  size_t dataSize = {};
  void *pData = {};
};

struct PipelineShaderStageCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_SHADER_STAGE_CREATE_INFO;

  using NativeType = VkPipelineShaderStageCreateInfo;

  auto operator<=>(const PipelineShaderStageCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineShaderStageCreateMask flags = {};
  ShaderStageMaskBits stage = {};
  VkShaderModule module = {};
  char *pName = {};
  SpecializationInfo *pSpecializationInfo = {};
};

struct ComputePipelineCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_COMPUTE_PIPELINE_CREATE_INFO;

  using NativeType = VkComputePipelineCreateInfo;

  auto operator<=>(const ComputePipelineCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineCreateMask flags = {};
  PipelineShaderStageCreateInfo stage = {};
  VkPipelineLayout layout = {};
  VkPipeline basePipelineHandle = {};
  int32_t basePipelineIndex = {};
};

struct ComputePipelineIndirectBufferInfoNV {
  static constexpr StructureType structure_type = StructureType::E_COMPUTE_PIPELINE_INDIRECT_BUFFER_INFO_NV;

  using NativeType = VkComputePipelineIndirectBufferInfoNV;

  auto operator<=>(const ComputePipelineIndirectBufferInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceAddress deviceAddress = {};
  VkDeviceSize size = {};
  VkDeviceAddress pipelineDeviceAddressCaptureReplay = {};
};

struct PipelineCreateFlags2CreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_CREATE_FLAGS_2_CREATE_INFO_KHR;

  using NativeType = VkPipelineCreateFlags2CreateInfoKHR;

  auto operator<=>(const PipelineCreateFlags2CreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineCreateMask2 flags = {};
};

struct VertexInputBindingDescription {

  using NativeType = VkVertexInputBindingDescription;

  auto operator<=>(const VertexInputBindingDescription &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t binding = {};
  uint32_t stride = {};
  VertexInputRate inputRate = {};
};

struct VertexInputAttributeDescription {

  using NativeType = VkVertexInputAttributeDescription;

  auto operator<=>(const VertexInputAttributeDescription &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t location = {};
  uint32_t binding = {};
  Format format = {};
  uint32_t offset = {};
};

struct PipelineVertexInputStateCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;

  using NativeType = VkPipelineVertexInputStateCreateInfo;

  auto operator<=>(const PipelineVertexInputStateCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineVertexInputStateCreateMask flags = {};
  uint32_t vertexBindingDescriptionCount = {};
  VertexInputBindingDescription *pVertexBindingDescriptions = {};
  uint32_t vertexAttributeDescriptionCount = {};
  VertexInputAttributeDescription *pVertexAttributeDescriptions = {};
};

struct PipelineInputAssemblyStateCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;

  using NativeType = VkPipelineInputAssemblyStateCreateInfo;

  auto operator<=>(const PipelineInputAssemblyStateCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineInputAssemblyStateCreateMask flags = {};
  PrimitiveTopology topology = {};
  VkBool32 primitiveRestartEnable = {};
};

struct PipelineTessellationStateCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_TESSELLATION_STATE_CREATE_INFO;

  using NativeType = VkPipelineTessellationStateCreateInfo;

  auto operator<=>(const PipelineTessellationStateCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineTessellationStateCreateMask flags = {};
  uint32_t patchControlPoints = {};
};

struct PipelineViewportStateCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_VIEWPORT_STATE_CREATE_INFO;

  using NativeType = VkPipelineViewportStateCreateInfo;

  auto operator<=>(const PipelineViewportStateCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineViewportStateCreateMask flags = {};
  uint32_t viewportCount = {};
  Viewport *pViewports = {};
  uint32_t scissorCount = {};
  Rect2D *pScissors = {};
};

struct PipelineRasterizationStateCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;

  using NativeType = VkPipelineRasterizationStateCreateInfo;

  auto operator<=>(const PipelineRasterizationStateCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineRasterizationStateCreateMask flags = {};
  VkBool32 depthClampEnable = {};
  VkBool32 rasterizerDiscardEnable = {};
  PolygonMode polygonMode = {};
  CullModeMask cullMode = {};
  FrontFace frontFace = {};
  VkBool32 depthBiasEnable = {};
  float depthBiasConstantFactor = {};
  float depthBiasClamp = {};
  float depthBiasSlopeFactor = {};
  float lineWidth = {};
};

struct PipelineMultisampleStateCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;

  using NativeType = VkPipelineMultisampleStateCreateInfo;

  auto operator<=>(const PipelineMultisampleStateCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineMultisampleStateCreateMask flags = {};
  SampleCountMaskBits rasterizationSamples = {};
  VkBool32 sampleShadingEnable = {};
  float minSampleShading = {};
  VkSampleMask *pSampleMask = {};
  VkBool32 alphaToCoverageEnable = {};
  VkBool32 alphaToOneEnable = {};
};

struct PipelineColorBlendAttachmentState {

  using NativeType = VkPipelineColorBlendAttachmentState;

  auto operator<=>(const PipelineColorBlendAttachmentState &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkBool32 blendEnable = {};
  BlendFactor srcColorBlendFactor = {};
  BlendFactor dstColorBlendFactor = {};
  BlendOp colorBlendOp = {};
  BlendFactor srcAlphaBlendFactor = {};
  BlendFactor dstAlphaBlendFactor = {};
  BlendOp alphaBlendOp = {};
  ColorComponentMask colorWriteMask = {};
};

struct PipelineColorBlendStateCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;

  using NativeType = VkPipelineColorBlendStateCreateInfo;

  auto operator<=>(const PipelineColorBlendStateCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineColorBlendStateCreateMask flags = {};
  VkBool32 logicOpEnable = {};
  LogicOp logicOp = {};
  uint32_t attachmentCount = {};
  PipelineColorBlendAttachmentState *pAttachments = {};
  float blendConstants[4] = {};
};

struct PipelineDynamicStateCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_DYNAMIC_STATE_CREATE_INFO;

  using NativeType = VkPipelineDynamicStateCreateInfo;

  auto operator<=>(const PipelineDynamicStateCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineDynamicStateCreateMask flags = {};
  uint32_t dynamicStateCount = {};
  DynamicState *pDynamicStates = {};
};

struct StencilOpState {

  using NativeType = VkStencilOpState;

  auto operator<=>(const StencilOpState &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StencilOp failOp = {};
  StencilOp passOp = {};
  StencilOp depthFailOp = {};
  CompareOp compareOp = {};
  uint32_t compareMask = {};
  uint32_t writeMask = {};
  uint32_t reference = {};
};

struct PipelineDepthStencilStateCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;

  using NativeType = VkPipelineDepthStencilStateCreateInfo;

  auto operator<=>(const PipelineDepthStencilStateCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineDepthStencilStateCreateMask flags = {};
  VkBool32 depthTestEnable = {};
  VkBool32 depthWriteEnable = {};
  CompareOp depthCompareOp = {};
  VkBool32 depthBoundsTestEnable = {};
  VkBool32 stencilTestEnable = {};
  StencilOpState front = {};
  StencilOpState back = {};
  float minDepthBounds = {};
  float maxDepthBounds = {};
};

struct GraphicsPipelineCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_GRAPHICS_PIPELINE_CREATE_INFO;

  using NativeType = VkGraphicsPipelineCreateInfo;

  auto operator<=>(const GraphicsPipelineCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineCreateMask flags = {};
  uint32_t stageCount = {};
  PipelineShaderStageCreateInfo *pStages = {};
  PipelineVertexInputStateCreateInfo *pVertexInputState = {};
  PipelineInputAssemblyStateCreateInfo *pInputAssemblyState = {};
  PipelineTessellationStateCreateInfo *pTessellationState = {};
  PipelineViewportStateCreateInfo *pViewportState = {};
  PipelineRasterizationStateCreateInfo *pRasterizationState = {};
  PipelineMultisampleStateCreateInfo *pMultisampleState = {};
  PipelineDepthStencilStateCreateInfo *pDepthStencilState = {};
  PipelineColorBlendStateCreateInfo *pColorBlendState = {};
  PipelineDynamicStateCreateInfo *pDynamicState = {};
  VkPipelineLayout layout = {};
  VkRenderPass renderPass = {};
  uint32_t subpass = {};
  VkPipeline basePipelineHandle = {};
  int32_t basePipelineIndex = {};
};

struct PipelineCacheCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_CACHE_CREATE_INFO;

  using NativeType = VkPipelineCacheCreateInfo;

  auto operator<=>(const PipelineCacheCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineCacheCreateMask flags = {};
  size_t initialDataSize = {};
  void *pInitialData = {};
};

struct PipelineCacheHeaderVersionOne {

  using NativeType = VkPipelineCacheHeaderVersionOne;

  auto operator<=>(const PipelineCacheHeaderVersionOne &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t headerSize = {};
  PipelineCacheHeaderVersion headerVersion = {};
  uint32_t vendorID = {};
  uint32_t deviceID = {};
  uint8_t pipelineCacheUUID[VK_UUID_SIZE] = {};
};

struct PushConstantRange {

  using NativeType = VkPushConstantRange;

  auto operator<=>(const PushConstantRange &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  ShaderStageMask stageFlags = {};
  uint32_t offset = {};
  uint32_t size = {};
};

struct PipelineLayoutCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_LAYOUT_CREATE_INFO;

  using NativeType = VkPipelineLayoutCreateInfo;

  auto operator<=>(const PipelineLayoutCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineLayoutCreateMask flags = {};
  uint32_t setLayoutCount = {};
  VkDescriptorSetLayout *pSetLayouts = {};
  uint32_t pushConstantRangeCount = {};
  PushConstantRange *pPushConstantRanges = {};
};

struct SamplerCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_SAMPLER_CREATE_INFO;

  using NativeType = VkSamplerCreateInfo;

  auto operator<=>(const SamplerCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  SamplerCreateMask flags = {};
  Filter magFilter = {};
  Filter minFilter = {};
  SamplerMipmapMode mipmapMode = {};
  SamplerAddressMode addressModeU = {};
  SamplerAddressMode addressModeV = {};
  SamplerAddressMode addressModeW = {};
  float mipLodBias = {};
  VkBool32 anisotropyEnable = {};
  float maxAnisotropy = {};
  VkBool32 compareEnable = {};
  CompareOp compareOp = {};
  float minLod = {};
  float maxLod = {};
  BorderColor borderColor = {};
  VkBool32 unnormalizedCoordinates = {};
};

struct CommandPoolCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_COMMAND_POOL_CREATE_INFO;

  using NativeType = VkCommandPoolCreateInfo;

  auto operator<=>(const CommandPoolCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  CommandPoolCreateMask flags = {};
  uint32_t queueFamilyIndex = {};
};

struct CommandBufferAllocateInfo {
  static constexpr StructureType structure_type = StructureType::E_COMMAND_BUFFER_ALLOCATE_INFO;

  using NativeType = VkCommandBufferAllocateInfo;

  auto operator<=>(const CommandBufferAllocateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkCommandPool commandPool = {};
  CommandBufferLevel level = {};
  uint32_t commandBufferCount = {};
};

struct CommandBufferInheritanceInfo {
  static constexpr StructureType structure_type = StructureType::E_COMMAND_BUFFER_INHERITANCE_INFO;

  using NativeType = VkCommandBufferInheritanceInfo;

  auto operator<=>(const CommandBufferInheritanceInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkRenderPass renderPass = {};
  uint32_t subpass = {};
  VkFramebuffer framebuffer = {};
  VkBool32 occlusionQueryEnable = {};
  QueryControlMask queryFlags = {};
  QueryPipelineStatisticMask pipelineStatistics = {};
};

struct CommandBufferBeginInfo {
  static constexpr StructureType structure_type = StructureType::E_COMMAND_BUFFER_BEGIN_INFO;

  using NativeType = VkCommandBufferBeginInfo;

  auto operator<=>(const CommandBufferBeginInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  CommandBufferUsageMask flags = {};
  CommandBufferInheritanceInfo *pInheritanceInfo = {};
};

struct RenderPassBeginInfo {
  static constexpr StructureType structure_type = StructureType::E_RENDER_PASS_BEGIN_INFO;

  using NativeType = VkRenderPassBeginInfo;

  auto operator<=>(const RenderPassBeginInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkRenderPass renderPass = {};
  VkFramebuffer framebuffer = {};
  Rect2D renderArea = {};
  uint32_t clearValueCount = {};
  VkClearValue *pClearValues = {};
};

struct ClearDepthStencilValue {

  using NativeType = VkClearDepthStencilValue;

  auto operator<=>(const ClearDepthStencilValue &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  float depth = {};
  uint32_t stencil = {};
};

struct ClearAttachment {

  using NativeType = VkClearAttachment;

  auto operator<=>(const ClearAttachment &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  ImageAspectMask aspectMask = {};
  uint32_t colorAttachment = {};
  VkClearValue clearValue = {};
};

struct AttachmentDescription {

  using NativeType = VkAttachmentDescription;

  auto operator<=>(const AttachmentDescription &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  AttachmentDescriptionMask flags = {};
  Format format = {};
  SampleCountMaskBits samples = {};
  AttachmentLoadOp loadOp = {};
  AttachmentStoreOp storeOp = {};
  AttachmentLoadOp stencilLoadOp = {};
  AttachmentStoreOp stencilStoreOp = {};
  ImageLayout initialLayout = {};
  ImageLayout finalLayout = {};
};

struct AttachmentReference {

  using NativeType = VkAttachmentReference;

  auto operator<=>(const AttachmentReference &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t attachment = {};
  ImageLayout layout = {};
};

struct SubpassDescription {

  using NativeType = VkSubpassDescription;

  auto operator<=>(const SubpassDescription &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  SubpassDescriptionMask flags = {};
  PipelineBindPoint pipelineBindPoint = {};
  uint32_t inputAttachmentCount = {};
  AttachmentReference *pInputAttachments = {};
  uint32_t colorAttachmentCount = {};
  AttachmentReference *pColorAttachments = {};
  AttachmentReference *pResolveAttachments = {};
  AttachmentReference *pDepthStencilAttachment = {};
  uint32_t preserveAttachmentCount = {};
  uint32_t *pPreserveAttachments = {};
};

struct SubpassDependency {

  using NativeType = VkSubpassDependency;

  auto operator<=>(const SubpassDependency &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t srcSubpass = {};
  uint32_t dstSubpass = {};
  PipelineStageMask srcStageMask = {};
  PipelineStageMask dstStageMask = {};
  AccessMask srcAccessMask = {};
  AccessMask dstAccessMask = {};
  DependencyMask dependencyFlags = {};
};

struct RenderPassCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_RENDER_PASS_CREATE_INFO;

  using NativeType = VkRenderPassCreateInfo;

  auto operator<=>(const RenderPassCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  RenderPassCreateMask flags = {};
  uint32_t attachmentCount = {};
  AttachmentDescription *pAttachments = {};
  uint32_t subpassCount = {};
  SubpassDescription *pSubpasses = {};
  uint32_t dependencyCount = {};
  SubpassDependency *pDependencies = {};
};

struct EventCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_EVENT_CREATE_INFO;

  using NativeType = VkEventCreateInfo;

  auto operator<=>(const EventCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  EventCreateMask flags = {};
};

struct FenceCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_FENCE_CREATE_INFO;

  using NativeType = VkFenceCreateInfo;

  auto operator<=>(const FenceCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  FenceCreateMask flags = {};
};

struct SemaphoreCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_SEMAPHORE_CREATE_INFO;

  using NativeType = VkSemaphoreCreateInfo;

  auto operator<=>(const SemaphoreCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  SemaphoreCreateMask flags = {};
};

struct QueryPoolCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_QUERY_POOL_CREATE_INFO;

  using NativeType = VkQueryPoolCreateInfo;

  auto operator<=>(const QueryPoolCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  QueryPoolCreateMask flags = {};
  QueryType queryType = {};
  uint32_t queryCount = {};
  QueryPipelineStatisticMask pipelineStatistics = {};
};

struct FramebufferCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_FRAMEBUFFER_CREATE_INFO;

  using NativeType = VkFramebufferCreateInfo;

  auto operator<=>(const FramebufferCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  FramebufferCreateMask flags = {};
  VkRenderPass renderPass = {};
  uint32_t attachmentCount = {};
  VkImageView *pAttachments = {};
  uint32_t width = {};
  uint32_t height = {};
  uint32_t layers = {};
};

struct DrawIndirectCommand {

  using NativeType = VkDrawIndirectCommand;

  auto operator<=>(const DrawIndirectCommand &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t vertexCount = {};
  uint32_t instanceCount = {};
  uint32_t firstVertex = {};
  uint32_t firstInstance = {};
};

struct DrawIndexedIndirectCommand {

  using NativeType = VkDrawIndexedIndirectCommand;

  auto operator<=>(const DrawIndexedIndirectCommand &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t indexCount = {};
  uint32_t instanceCount = {};
  uint32_t firstIndex = {};
  int32_t vertexOffset = {};
  uint32_t firstInstance = {};
};

struct DispatchIndirectCommand {

  using NativeType = VkDispatchIndirectCommand;

  auto operator<=>(const DispatchIndirectCommand &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t x = {};
  uint32_t y = {};
  uint32_t z = {};
};

struct MultiDrawInfoEXT {

  using NativeType = VkMultiDrawInfoEXT;

  auto operator<=>(const MultiDrawInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t firstVertex = {};
  uint32_t vertexCount = {};
};

struct MultiDrawIndexedInfoEXT {

  using NativeType = VkMultiDrawIndexedInfoEXT;

  auto operator<=>(const MultiDrawIndexedInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t firstIndex = {};
  uint32_t indexCount = {};
  int32_t vertexOffset = {};
};

struct SubmitInfo {
  static constexpr StructureType structure_type = StructureType::E_SUBMIT_INFO;

  using NativeType = VkSubmitInfo;

  auto operator<=>(const SubmitInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t waitSemaphoreCount = {};
  VkSemaphore *pWaitSemaphores = {};
  PipelineStageMask *pWaitDstStageMask = {};
  uint32_t commandBufferCount = {};
  VkCommandBuffer *pCommandBuffers = {};
  uint32_t signalSemaphoreCount = {};
  VkSemaphore *pSignalSemaphores = {};
};

struct DisplayPropertiesKHR {

  using NativeType = VkDisplayPropertiesKHR;

  auto operator<=>(const DisplayPropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkDisplayKHR display = {};
  char *displayName = {};
  Extent2D physicalDimensions = {};
  Extent2D physicalResolution = {};
  SurfaceTransformMask supportedTransforms = {};
  VkBool32 planeReorderPossible = {};
  VkBool32 persistentContent = {};
};

struct DisplayPlanePropertiesKHR {

  using NativeType = VkDisplayPlanePropertiesKHR;

  auto operator<=>(const DisplayPlanePropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkDisplayKHR currentDisplay = {};
  uint32_t currentStackIndex = {};
};

struct DisplayModeParametersKHR {

  using NativeType = VkDisplayModeParametersKHR;

  auto operator<=>(const DisplayModeParametersKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  Extent2D visibleRegion = {};
  uint32_t refreshRate = {};
};

struct DisplayModePropertiesKHR {

  using NativeType = VkDisplayModePropertiesKHR;

  auto operator<=>(const DisplayModePropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkDisplayModeKHR displayMode = {};
  DisplayModeParametersKHR parameters = {};
};

struct DisplayModeCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_DISPLAY_MODE_CREATE_INFO_KHR;

  using NativeType = VkDisplayModeCreateInfoKHR;

  auto operator<=>(const DisplayModeCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DisplayModeCreateMask flags = {};
  DisplayModeParametersKHR parameters = {};
};

struct DisplayPlaneCapabilitiesKHR {

  using NativeType = VkDisplayPlaneCapabilitiesKHR;

  auto operator<=>(const DisplayPlaneCapabilitiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  DisplayPlaneAlphaMask supportedAlpha = {};
  Offset2D minSrcPosition = {};
  Offset2D maxSrcPosition = {};
  Extent2D minSrcExtent = {};
  Extent2D maxSrcExtent = {};
  Offset2D minDstPosition = {};
  Offset2D maxDstPosition = {};
  Extent2D minDstExtent = {};
  Extent2D maxDstExtent = {};
};

struct DisplaySurfaceCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_DISPLAY_SURFACE_CREATE_INFO_KHR;

  using NativeType = VkDisplaySurfaceCreateInfoKHR;

  auto operator<=>(const DisplaySurfaceCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DisplaySurfaceCreateMask flags = {};
  VkDisplayModeKHR displayMode = {};
  uint32_t planeIndex = {};
  uint32_t planeStackIndex = {};
  SurfaceTransformMaskBits transform = {};
  float globalAlpha = {};
  DisplayPlaneAlphaMaskBits alphaMode = {};
  Extent2D imageExtent = {};
};

struct DisplayPresentInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_DISPLAY_PRESENT_INFO_KHR;

  using NativeType = VkDisplayPresentInfoKHR;

  auto operator<=>(const DisplayPresentInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  Rect2D srcRect = {};
  Rect2D dstRect = {};
  VkBool32 persistent = {};
};

struct SurfaceCapabilitiesKHR {

  using NativeType = VkSurfaceCapabilitiesKHR;

  auto operator<=>(const SurfaceCapabilitiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t minImageCount = {};
  uint32_t maxImageCount = {};
  Extent2D currentExtent = {};
  Extent2D minImageExtent = {};
  Extent2D maxImageExtent = {};
  uint32_t maxImageArrayLayers = {};
  SurfaceTransformMask supportedTransforms = {};
  SurfaceTransformMaskBits currentTransform = {};
  CompositeAlphaMask supportedCompositeAlpha = {};
  ImageUsageMask supportedUsageFlags = {};
};

struct SurfaceFormatKHR {

  using NativeType = VkSurfaceFormatKHR;

  auto operator<=>(const SurfaceFormatKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  Format format = {};
  ColorSpace colorSpace = {};
};

struct SwapchainCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_SWAPCHAIN_CREATE_INFO_KHR;

  using NativeType = VkSwapchainCreateInfoKHR;

  auto operator<=>(const SwapchainCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  SwapchainCreateMask flags = {};
  VkSurfaceKHR surface = {};
  uint32_t minImageCount = {};
  Format imageFormat = {};
  ColorSpace imageColorSpace = {};
  Extent2D imageExtent = {};
  uint32_t imageArrayLayers = {};
  ImageUsageMask imageUsage = {};
  SharingMode imageSharingMode = {};
  uint32_t queueFamilyIndexCount = {};
  uint32_t *pQueueFamilyIndices = {};
  SurfaceTransformMaskBits preTransform = {};
  CompositeAlphaMaskBits compositeAlpha = {};
  PresentMode presentMode = {};
  VkBool32 clipped = {};
  VkSwapchainKHR oldSwapchain = {};
};

struct PresentInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_PRESENT_INFO_KHR;

  using NativeType = VkPresentInfoKHR;

  auto operator<=>(const PresentInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t waitSemaphoreCount = {};
  VkSemaphore *pWaitSemaphores = {};
  uint32_t swapchainCount = {};
  VkSwapchainKHR *pSwapchains = {};
  uint32_t *pImageIndices = {};
  Result *pResults = {};
};

struct DebugReportCallbackCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;

  using NativeType = VkDebugReportCallbackCreateInfoEXT;

  auto operator<=>(const DebugReportCallbackCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DebugReportMask flags = {};
  PFN_vkDebugReportCallbackEXT pfnCallback = {};
  void *pUserData = {};
};

struct ValidationFlagsEXT {
  static constexpr StructureType structure_type = StructureType::E_VALIDATION_FLAGS_EXT;

  using NativeType = VkValidationFlagsEXT;

  auto operator<=>(const ValidationFlagsEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t disabledValidationCheckCount = {};
  ValidationCheck *pDisabledValidationChecks = {};
};

struct ValidationFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_VALIDATION_FEATURES_EXT;

  using NativeType = VkValidationFeaturesEXT;

  auto operator<=>(const ValidationFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t enabledValidationFeatureCount = {};
  ValidationFeatureEnable *pEnabledValidationFeatures = {};
  uint32_t disabledValidationFeatureCount = {};
  ValidationFeatureDisable *pDisabledValidationFeatures = {};
};

struct LayerSettingEXT {

  using NativeType = VkLayerSettingEXT;

  auto operator<=>(const LayerSettingEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  char *pLayerName = {};
  char *pSettingName = {};
  LayerSettingType type = {};
  uint32_t valueCount = {};
  void *pValues = {};
};

struct LayerSettingsCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_LAYER_SETTINGS_CREATE_INFO_EXT;

  using NativeType = VkLayerSettingsCreateInfoEXT;

  auto operator<=>(const LayerSettingsCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t settingCount = {};
  LayerSettingEXT *pSettings = {};
};

struct PipelineRasterizationStateRasterizationOrderAMD {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD;

  using NativeType = VkPipelineRasterizationStateRasterizationOrderAMD;

  auto operator<=>(const PipelineRasterizationStateRasterizationOrderAMD &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  RasterizationOrder rasterizationOrder = {};
};

struct DebugMarkerObjectNameInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_DEBUG_MARKER_OBJECT_NAME_INFO_EXT;

  using NativeType = VkDebugMarkerObjectNameInfoEXT;

  auto operator<=>(const DebugMarkerObjectNameInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DebugReportObjectType objectType = {};
  uint64_t object = {};
  char *pObjectName = {};
};

struct DebugMarkerObjectTagInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_DEBUG_MARKER_OBJECT_TAG_INFO_EXT;

  using NativeType = VkDebugMarkerObjectTagInfoEXT;

  auto operator<=>(const DebugMarkerObjectTagInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DebugReportObjectType objectType = {};
  uint64_t object = {};
  uint64_t tagName = {};
  size_t tagSize = {};
  void *pTag = {};
};

struct DebugMarkerMarkerInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_DEBUG_MARKER_MARKER_INFO_EXT;

  using NativeType = VkDebugMarkerMarkerInfoEXT;

  auto operator<=>(const DebugMarkerMarkerInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  char *pMarkerName = {};
  float color[4] = {};
};

struct DedicatedAllocationImageCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV;

  using NativeType = VkDedicatedAllocationImageCreateInfoNV;

  auto operator<=>(const DedicatedAllocationImageCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 dedicatedAllocation = {};
};

struct DedicatedAllocationBufferCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV;

  using NativeType = VkDedicatedAllocationBufferCreateInfoNV;

  auto operator<=>(const DedicatedAllocationBufferCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 dedicatedAllocation = {};
};

struct DedicatedAllocationMemoryAllocateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV;

  using NativeType = VkDedicatedAllocationMemoryAllocateInfoNV;

  auto operator<=>(const DedicatedAllocationMemoryAllocateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkImage image = {};
  VkBuffer buffer = {};
};

struct ExternalImageFormatPropertiesNV {

  using NativeType = VkExternalImageFormatPropertiesNV;

  auto operator<=>(const ExternalImageFormatPropertiesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  ImageFormatProperties imageFormatProperties = {};
  ExternalMemoryFeatureMask externalMemoryFeatures = {};
  ExternalMemoryHandleTypeMask exportFromImportedHandleTypes = {};
  ExternalMemoryHandleTypeMask compatibleHandleTypes = {};
};

struct ExternalMemoryImageCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV;

  using NativeType = VkExternalMemoryImageCreateInfoNV;

  auto operator<=>(const ExternalMemoryImageCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ExternalMemoryHandleTypeMask handleTypes = {};
};

struct ExportMemoryAllocateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_EXPORT_MEMORY_ALLOCATE_INFO_NV;

  using NativeType = VkExportMemoryAllocateInfoNV;

  auto operator<=>(const ExportMemoryAllocateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ExternalMemoryHandleTypeMask handleTypes = {};
};

struct PhysicalDeviceDeviceGeneratedCommandsFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV;

  using NativeType = VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV;

  auto operator<=>(const PhysicalDeviceDeviceGeneratedCommandsFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 deviceGeneratedCommands = {};
};

struct PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV;

  using NativeType = VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV;

  auto operator<=>(const PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 deviceGeneratedCompute = {};
  VkBool32 deviceGeneratedComputePipelines = {};
  VkBool32 deviceGeneratedComputeCaptureReplay = {};
};

struct DevicePrivateDataCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_PRIVATE_DATA_CREATE_INFO;

  using NativeType = VkDevicePrivateDataCreateInfo;

  auto operator<=>(const DevicePrivateDataCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t privateDataSlotRequestCount = {};
};

struct PrivateDataSlotCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_PRIVATE_DATA_SLOT_CREATE_INFO;

  using NativeType = VkPrivateDataSlotCreateInfo;

  auto operator<=>(const PrivateDataSlotCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PrivateDataSlotCreateMask flags = {};
};

struct PhysicalDevicePrivateDataFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES;

  using NativeType = VkPhysicalDevicePrivateDataFeatures;

  auto operator<=>(const PhysicalDevicePrivateDataFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 privateData = {};
};

struct PhysicalDeviceDeviceGeneratedCommandsPropertiesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV;

  using NativeType = VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV;

  auto operator<=>(const PhysicalDeviceDeviceGeneratedCommandsPropertiesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxGraphicsShaderGroupCount = {};
  uint32_t maxIndirectSequenceCount = {};
  uint32_t maxIndirectCommandsTokenCount = {};
  uint32_t maxIndirectCommandsStreamCount = {};
  uint32_t maxIndirectCommandsTokenOffset = {};
  uint32_t maxIndirectCommandsStreamStride = {};
  uint32_t minSequencesCountBufferOffsetAlignment = {};
  uint32_t minSequencesIndexBufferOffsetAlignment = {};
  uint32_t minIndirectCommandsBufferOffsetAlignment = {};
};

struct PhysicalDeviceMultiDrawPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceMultiDrawPropertiesEXT;

  auto operator<=>(const PhysicalDeviceMultiDrawPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxMultiDrawCount = {};
};

struct GraphicsShaderGroupCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV;

  using NativeType = VkGraphicsShaderGroupCreateInfoNV;

  auto operator<=>(const GraphicsShaderGroupCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t stageCount = {};
  PipelineShaderStageCreateInfo *pStages = {};
  PipelineVertexInputStateCreateInfo *pVertexInputState = {};
  PipelineTessellationStateCreateInfo *pTessellationState = {};
};

struct GraphicsPipelineShaderGroupsCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV;

  using NativeType = VkGraphicsPipelineShaderGroupsCreateInfoNV;

  auto operator<=>(const GraphicsPipelineShaderGroupsCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t groupCount = {};
  GraphicsShaderGroupCreateInfoNV *pGroups = {};
  uint32_t pipelineCount = {};
  VkPipeline *pPipelines = {};
};

struct BindShaderGroupIndirectCommandNV {

  using NativeType = VkBindShaderGroupIndirectCommandNV;

  auto operator<=>(const BindShaderGroupIndirectCommandNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t groupIndex = {};
};

struct BindIndexBufferIndirectCommandNV {

  using NativeType = VkBindIndexBufferIndirectCommandNV;

  auto operator<=>(const BindIndexBufferIndirectCommandNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkDeviceAddress bufferAddress = {};
  uint32_t size = {};
  IndexType indexType = {};
};

struct BindVertexBufferIndirectCommandNV {

  using NativeType = VkBindVertexBufferIndirectCommandNV;

  auto operator<=>(const BindVertexBufferIndirectCommandNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkDeviceAddress bufferAddress = {};
  uint32_t size = {};
  uint32_t stride = {};
};

struct SetStateFlagsIndirectCommandNV {

  using NativeType = VkSetStateFlagsIndirectCommandNV;

  auto operator<=>(const SetStateFlagsIndirectCommandNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t data = {};
};

struct IndirectCommandsStreamNV {

  using NativeType = VkIndirectCommandsStreamNV;

  auto operator<=>(const IndirectCommandsStreamNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkBuffer buffer = {};
  VkDeviceSize offset = {};
};

struct IndirectCommandsLayoutTokenNV {
  static constexpr StructureType structure_type = StructureType::E_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV;

  using NativeType = VkIndirectCommandsLayoutTokenNV;

  auto operator<=>(const IndirectCommandsLayoutTokenNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  IndirectCommandsTokenType tokenType = {};
  uint32_t stream = {};
  uint32_t offset = {};
  uint32_t vertexBindingUnit = {};
  VkBool32 vertexDynamicStride = {};
  VkPipelineLayout pushconstantPipelineLayout = {};
  ShaderStageMask pushconstantShaderStageFlags = {};
  uint32_t pushconstantOffset = {};
  uint32_t pushconstantSize = {};
  IndirectStateMask indirectStateFlags = {};
  uint32_t indexTypeCount = {};
  IndexType *pIndexTypes = {};
  uint32_t *pIndexTypeValues = {};
};

struct IndirectCommandsLayoutCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV;

  using NativeType = VkIndirectCommandsLayoutCreateInfoNV;

  auto operator<=>(const IndirectCommandsLayoutCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  IndirectCommandsLayoutUsageMask flags = {};
  PipelineBindPoint pipelineBindPoint = {};
  uint32_t tokenCount = {};
  IndirectCommandsLayoutTokenNV *pTokens = {};
  uint32_t streamCount = {};
  uint32_t *pStreamStrides = {};
};

struct GeneratedCommandsInfoNV {
  static constexpr StructureType structure_type = StructureType::E_GENERATED_COMMANDS_INFO_NV;

  using NativeType = VkGeneratedCommandsInfoNV;

  auto operator<=>(const GeneratedCommandsInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineBindPoint pipelineBindPoint = {};
  VkPipeline pipeline = {};
  VkIndirectCommandsLayoutNV indirectCommandsLayout = {};
  uint32_t streamCount = {};
  IndirectCommandsStreamNV *pStreams = {};
  uint32_t sequencesCount = {};
  VkBuffer preprocessBuffer = {};
  VkDeviceSize preprocessOffset = {};
  VkDeviceSize preprocessSize = {};
  VkBuffer sequencesCountBuffer = {};
  VkDeviceSize sequencesCountOffset = {};
  VkBuffer sequencesIndexBuffer = {};
  VkDeviceSize sequencesIndexOffset = {};
};

struct GeneratedCommandsMemoryRequirementsInfoNV {
  static constexpr StructureType structure_type = StructureType::E_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV;

  using NativeType = VkGeneratedCommandsMemoryRequirementsInfoNV;

  auto operator<=>(const GeneratedCommandsMemoryRequirementsInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineBindPoint pipelineBindPoint = {};
  VkPipeline pipeline = {};
  VkIndirectCommandsLayoutNV indirectCommandsLayout = {};
  uint32_t maxSequencesCount = {};
};

struct PipelineIndirectDeviceAddressInfoNV {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_INDIRECT_DEVICE_ADDRESS_INFO_NV;

  using NativeType = VkPipelineIndirectDeviceAddressInfoNV;

  auto operator<=>(const PipelineIndirectDeviceAddressInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineBindPoint pipelineBindPoint = {};
  VkPipeline pipeline = {};
};

struct BindPipelineIndirectCommandNV {

  using NativeType = VkBindPipelineIndirectCommandNV;

  auto operator<=>(const BindPipelineIndirectCommandNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkDeviceAddress pipelineAddress = {};
};

struct PhysicalDeviceFeatures2 {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_FEATURES_2;

  using NativeType = VkPhysicalDeviceFeatures2;

  auto operator<=>(const PhysicalDeviceFeatures2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PhysicalDeviceFeatures features = {};
};

struct PhysicalDeviceProperties2 {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PROPERTIES_2;

  using NativeType = VkPhysicalDeviceProperties2;

  auto operator<=>(const PhysicalDeviceProperties2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PhysicalDeviceProperties properties = {};
};

struct FormatProperties2 {
  static constexpr StructureType structure_type = StructureType::E_FORMAT_PROPERTIES_2;

  using NativeType = VkFormatProperties2;

  auto operator<=>(const FormatProperties2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  FormatProperties formatProperties = {};
};

struct ImageFormatProperties2 {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_FORMAT_PROPERTIES_2;

  using NativeType = VkImageFormatProperties2;

  auto operator<=>(const ImageFormatProperties2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ImageFormatProperties imageFormatProperties = {};
};

struct PhysicalDeviceImageFormatInfo2 {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2;

  using NativeType = VkPhysicalDeviceImageFormatInfo2;

  auto operator<=>(const PhysicalDeviceImageFormatInfo2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  Format format = {};
  ImageType type = {};
  ImageTiling tiling = {};
  ImageUsageMask usage = {};
  ImageCreateMask flags = {};
};

struct QueueFamilyProperties2 {
  static constexpr StructureType structure_type = StructureType::E_QUEUE_FAMILY_PROPERTIES_2;

  using NativeType = VkQueueFamilyProperties2;

  auto operator<=>(const QueueFamilyProperties2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  QueueFamilyProperties queueFamilyProperties = {};
};

struct PhysicalDeviceMemoryProperties2 {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2;

  using NativeType = VkPhysicalDeviceMemoryProperties2;

  auto operator<=>(const PhysicalDeviceMemoryProperties2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PhysicalDeviceMemoryProperties memoryProperties = {};
};

struct SparseImageFormatProperties2 {
  static constexpr StructureType structure_type = StructureType::E_SPARSE_IMAGE_FORMAT_PROPERTIES_2;

  using NativeType = VkSparseImageFormatProperties2;

  auto operator<=>(const SparseImageFormatProperties2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  SparseImageFormatProperties properties = {};
};

struct PhysicalDeviceSparseImageFormatInfo2 {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2;

  using NativeType = VkPhysicalDeviceSparseImageFormatInfo2;

  auto operator<=>(const PhysicalDeviceSparseImageFormatInfo2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  Format format = {};
  ImageType type = {};
  SampleCountMaskBits samples = {};
  ImageUsageMask usage = {};
  ImageTiling tiling = {};
};

struct PhysicalDevicePushDescriptorPropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR;

  using NativeType = VkPhysicalDevicePushDescriptorPropertiesKHR;

  auto operator<=>(const PhysicalDevicePushDescriptorPropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxPushDescriptors = {};
};

struct ConformanceVersion {

  using NativeType = VkConformanceVersion;

  auto operator<=>(const ConformanceVersion &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint8_t major = {};
  uint8_t minor = {};
  uint8_t subminor = {};
  uint8_t patch = {};
};

struct PhysicalDeviceDriverProperties {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DRIVER_PROPERTIES;

  using NativeType = VkPhysicalDeviceDriverProperties;

  auto operator<=>(const PhysicalDeviceDriverProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DriverId driverID = {};
  char driverName[VK_MAX_DRIVER_NAME_SIZE] = {};
  char driverInfo[VK_MAX_DRIVER_INFO_SIZE] = {};
  ConformanceVersion conformanceVersion = {};
};

struct RectLayerKHR {

  using NativeType = VkRectLayerKHR;

  auto operator<=>(const RectLayerKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  Offset2D offset = {};
  Extent2D extent = {};
  uint32_t layer = {};
};

struct PresentRegionKHR {

  using NativeType = VkPresentRegionKHR;

  auto operator<=>(const PresentRegionKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t rectangleCount = {};
  RectLayerKHR *pRectangles = {};
};

struct PresentRegionsKHR {
  static constexpr StructureType structure_type = StructureType::E_PRESENT_REGIONS_KHR;

  using NativeType = VkPresentRegionsKHR;

  auto operator<=>(const PresentRegionsKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t swapchainCount = {};
  PresentRegionKHR *pRegions = {};
};

struct PhysicalDeviceVariablePointersFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES;

  using NativeType = VkPhysicalDeviceVariablePointersFeatures;

  auto operator<=>(const PhysicalDeviceVariablePointersFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 variablePointersStorageBuffer = {};
  VkBool32 variablePointers = {};
};

struct ExternalMemoryProperties {

  using NativeType = VkExternalMemoryProperties;

  auto operator<=>(const ExternalMemoryProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  ExternalMemoryFeatureMask externalMemoryFeatures = {};
  ExternalMemoryHandleTypeMask exportFromImportedHandleTypes = {};
  ExternalMemoryHandleTypeMask compatibleHandleTypes = {};
};

struct PhysicalDeviceExternalImageFormatInfo {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO;

  using NativeType = VkPhysicalDeviceExternalImageFormatInfo;

  auto operator<=>(const PhysicalDeviceExternalImageFormatInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ExternalMemoryHandleTypeMaskBits handleType = {};
};

struct ExternalImageFormatProperties {
  static constexpr StructureType structure_type = StructureType::E_EXTERNAL_IMAGE_FORMAT_PROPERTIES;

  using NativeType = VkExternalImageFormatProperties;

  auto operator<=>(const ExternalImageFormatProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ExternalMemoryProperties externalMemoryProperties = {};
};

struct PhysicalDeviceExternalBufferInfo {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO;

  using NativeType = VkPhysicalDeviceExternalBufferInfo;

  auto operator<=>(const PhysicalDeviceExternalBufferInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  BufferCreateMask flags = {};
  BufferUsageMask usage = {};
  ExternalMemoryHandleTypeMaskBits handleType = {};
};

struct ExternalBufferProperties {
  static constexpr StructureType structure_type = StructureType::E_EXTERNAL_BUFFER_PROPERTIES;

  using NativeType = VkExternalBufferProperties;

  auto operator<=>(const ExternalBufferProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ExternalMemoryProperties externalMemoryProperties = {};
};

struct PhysicalDeviceIDProperties {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_ID_PROPERTIES;

  using NativeType = VkPhysicalDeviceIDProperties;

  auto operator<=>(const PhysicalDeviceIDProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint8_t deviceUUID[VK_UUID_SIZE] = {};
  uint8_t driverUUID[VK_UUID_SIZE] = {};
  uint8_t deviceLUID[VK_LUID_SIZE] = {};
  uint32_t deviceNodeMask = {};
  VkBool32 deviceLUIDValid = {};
};

struct ExternalMemoryImageCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_EXTERNAL_MEMORY_IMAGE_CREATE_INFO;

  using NativeType = VkExternalMemoryImageCreateInfo;

  auto operator<=>(const ExternalMemoryImageCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ExternalMemoryHandleTypeMask handleTypes = {};
};

struct ExternalMemoryBufferCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_EXTERNAL_MEMORY_BUFFER_CREATE_INFO;

  using NativeType = VkExternalMemoryBufferCreateInfo;

  auto operator<=>(const ExternalMemoryBufferCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ExternalMemoryHandleTypeMask handleTypes = {};
};

struct ExportMemoryAllocateInfo {
  static constexpr StructureType structure_type = StructureType::E_EXPORT_MEMORY_ALLOCATE_INFO;

  using NativeType = VkExportMemoryAllocateInfo;

  auto operator<=>(const ExportMemoryAllocateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ExternalMemoryHandleTypeMask handleTypes = {};
};

struct ImportMemoryFdInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_IMPORT_MEMORY_FD_INFO_KHR;

  using NativeType = VkImportMemoryFdInfoKHR;

  auto operator<=>(const ImportMemoryFdInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ExternalMemoryHandleTypeMaskBits handleType = {};
  int fd = {};
};

struct MemoryFdPropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_MEMORY_FD_PROPERTIES_KHR;

  using NativeType = VkMemoryFdPropertiesKHR;

  auto operator<=>(const MemoryFdPropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t memoryTypeBits = {};
};

struct MemoryGetFdInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_MEMORY_GET_FD_INFO_KHR;

  using NativeType = VkMemoryGetFdInfoKHR;

  auto operator<=>(const MemoryGetFdInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceMemory memory = {};
  ExternalMemoryHandleTypeMaskBits handleType = {};
};

struct PhysicalDeviceExternalSemaphoreInfo {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO;

  using NativeType = VkPhysicalDeviceExternalSemaphoreInfo;

  auto operator<=>(const PhysicalDeviceExternalSemaphoreInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ExternalSemaphoreHandleTypeMaskBits handleType = {};
};

struct ExternalSemaphoreProperties {
  static constexpr StructureType structure_type = StructureType::E_EXTERNAL_SEMAPHORE_PROPERTIES;

  using NativeType = VkExternalSemaphoreProperties;

  auto operator<=>(const ExternalSemaphoreProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ExternalSemaphoreHandleTypeMask exportFromImportedHandleTypes = {};
  ExternalSemaphoreHandleTypeMask compatibleHandleTypes = {};
  ExternalSemaphoreFeatureMask externalSemaphoreFeatures = {};
};

struct ExportSemaphoreCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_EXPORT_SEMAPHORE_CREATE_INFO;

  using NativeType = VkExportSemaphoreCreateInfo;

  auto operator<=>(const ExportSemaphoreCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ExternalSemaphoreHandleTypeMask handleTypes = {};
};

struct ImportSemaphoreFdInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_IMPORT_SEMAPHORE_FD_INFO_KHR;

  using NativeType = VkImportSemaphoreFdInfoKHR;

  auto operator<=>(const ImportSemaphoreFdInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkSemaphore semaphore = {};
  SemaphoreImportMask flags = {};
  ExternalSemaphoreHandleTypeMaskBits handleType = {};
  int fd = {};
};

struct SemaphoreGetFdInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_SEMAPHORE_GET_FD_INFO_KHR;

  using NativeType = VkSemaphoreGetFdInfoKHR;

  auto operator<=>(const SemaphoreGetFdInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkSemaphore semaphore = {};
  ExternalSemaphoreHandleTypeMaskBits handleType = {};
};

struct PhysicalDeviceExternalFenceInfo {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO;

  using NativeType = VkPhysicalDeviceExternalFenceInfo;

  auto operator<=>(const PhysicalDeviceExternalFenceInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ExternalFenceHandleTypeMaskBits handleType = {};
};

struct ExternalFenceProperties {
  static constexpr StructureType structure_type = StructureType::E_EXTERNAL_FENCE_PROPERTIES;

  using NativeType = VkExternalFenceProperties;

  auto operator<=>(const ExternalFenceProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ExternalFenceHandleTypeMask exportFromImportedHandleTypes = {};
  ExternalFenceHandleTypeMask compatibleHandleTypes = {};
  ExternalFenceFeatureMask externalFenceFeatures = {};
};

struct ExportFenceCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_EXPORT_FENCE_CREATE_INFO;

  using NativeType = VkExportFenceCreateInfo;

  auto operator<=>(const ExportFenceCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ExternalFenceHandleTypeMask handleTypes = {};
};

struct ImportFenceFdInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_IMPORT_FENCE_FD_INFO_KHR;

  using NativeType = VkImportFenceFdInfoKHR;

  auto operator<=>(const ImportFenceFdInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkFence fence = {};
  FenceImportMask flags = {};
  ExternalFenceHandleTypeMaskBits handleType = {};
  int fd = {};
};

struct FenceGetFdInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_FENCE_GET_FD_INFO_KHR;

  using NativeType = VkFenceGetFdInfoKHR;

  auto operator<=>(const FenceGetFdInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkFence fence = {};
  ExternalFenceHandleTypeMaskBits handleType = {};
};

struct PhysicalDeviceMultiviewFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MULTIVIEW_FEATURES;

  using NativeType = VkPhysicalDeviceMultiviewFeatures;

  auto operator<=>(const PhysicalDeviceMultiviewFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 multiview = {};
  VkBool32 multiviewGeometryShader = {};
  VkBool32 multiviewTessellationShader = {};
};

struct PhysicalDeviceMultiviewProperties {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES;

  using NativeType = VkPhysicalDeviceMultiviewProperties;

  auto operator<=>(const PhysicalDeviceMultiviewProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxMultiviewViewCount = {};
  uint32_t maxMultiviewInstanceIndex = {};
};

struct RenderPassMultiviewCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_RENDER_PASS_MULTIVIEW_CREATE_INFO;

  using NativeType = VkRenderPassMultiviewCreateInfo;

  auto operator<=>(const RenderPassMultiviewCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t subpassCount = {};
  uint32_t *pViewMasks = {};
  uint32_t dependencyCount = {};
  int32_t *pViewOffsets = {};
  uint32_t correlationMaskCount = {};
  uint32_t *pCorrelationMasks = {};
};

struct SurfaceCapabilities2EXT {
  static constexpr StructureType structure_type = StructureType::E_SURFACE_CAPABILITIES_2_EXT;

  using NativeType = VkSurfaceCapabilities2EXT;

  auto operator<=>(const SurfaceCapabilities2EXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t minImageCount = {};
  uint32_t maxImageCount = {};
  Extent2D currentExtent = {};
  Extent2D minImageExtent = {};
  Extent2D maxImageExtent = {};
  uint32_t maxImageArrayLayers = {};
  SurfaceTransformMask supportedTransforms = {};
  SurfaceTransformMaskBits currentTransform = {};
  CompositeAlphaMask supportedCompositeAlpha = {};
  ImageUsageMask supportedUsageFlags = {};
  SurfaceCounterMask supportedSurfaceCounters = {};
};

struct DisplayPowerInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_DISPLAY_POWER_INFO_EXT;

  using NativeType = VkDisplayPowerInfoEXT;

  auto operator<=>(const DisplayPowerInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DisplayPowerState powerState = {};
};

struct DeviceEventInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_EVENT_INFO_EXT;

  using NativeType = VkDeviceEventInfoEXT;

  auto operator<=>(const DeviceEventInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DeviceEventType deviceEvent = {};
};

struct DisplayEventInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_DISPLAY_EVENT_INFO_EXT;

  using NativeType = VkDisplayEventInfoEXT;

  auto operator<=>(const DisplayEventInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DisplayEventType displayEvent = {};
};

struct SwapchainCounterCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_SWAPCHAIN_COUNTER_CREATE_INFO_EXT;

  using NativeType = VkSwapchainCounterCreateInfoEXT;

  auto operator<=>(const SwapchainCounterCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  SurfaceCounterMask surfaceCounters = {};
};

struct PhysicalDeviceGroupProperties {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_GROUP_PROPERTIES;

  using NativeType = VkPhysicalDeviceGroupProperties;

  auto operator<=>(const PhysicalDeviceGroupProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t physicalDeviceCount = {};
  VkPhysicalDevice physicalDevices[VK_MAX_DEVICE_GROUP_SIZE] = {};
  VkBool32 subsetAllocation = {};
};

struct MemoryAllocateFlagsInfo {
  static constexpr StructureType structure_type = StructureType::E_MEMORY_ALLOCATE_FLAGS_INFO;

  using NativeType = VkMemoryAllocateFlagsInfo;

  auto operator<=>(const MemoryAllocateFlagsInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  MemoryAllocateMask flags = {};
  uint32_t deviceMask = {};
};

struct BindBufferMemoryInfo {
  static constexpr StructureType structure_type = StructureType::E_BIND_BUFFER_MEMORY_INFO;

  using NativeType = VkBindBufferMemoryInfo;

  auto operator<=>(const BindBufferMemoryInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBuffer buffer = {};
  VkDeviceMemory memory = {};
  VkDeviceSize memoryOffset = {};
};

struct BindBufferMemoryDeviceGroupInfo {
  static constexpr StructureType structure_type = StructureType::E_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO;

  using NativeType = VkBindBufferMemoryDeviceGroupInfo;

  auto operator<=>(const BindBufferMemoryDeviceGroupInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t deviceIndexCount = {};
  uint32_t *pDeviceIndices = {};
};

struct BindImageMemoryInfo {
  static constexpr StructureType structure_type = StructureType::E_BIND_IMAGE_MEMORY_INFO;

  using NativeType = VkBindImageMemoryInfo;

  auto operator<=>(const BindImageMemoryInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkImage image = {};
  VkDeviceMemory memory = {};
  VkDeviceSize memoryOffset = {};
};

struct BindImageMemoryDeviceGroupInfo {
  static constexpr StructureType structure_type = StructureType::E_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO;

  using NativeType = VkBindImageMemoryDeviceGroupInfo;

  auto operator<=>(const BindImageMemoryDeviceGroupInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t deviceIndexCount = {};
  uint32_t *pDeviceIndices = {};
  uint32_t splitInstanceBindRegionCount = {};
  Rect2D *pSplitInstanceBindRegions = {};
};

struct DeviceGroupRenderPassBeginInfo {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO;

  using NativeType = VkDeviceGroupRenderPassBeginInfo;

  auto operator<=>(const DeviceGroupRenderPassBeginInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t deviceMask = {};
  uint32_t deviceRenderAreaCount = {};
  Rect2D *pDeviceRenderAreas = {};
};

struct DeviceGroupCommandBufferBeginInfo {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO;

  using NativeType = VkDeviceGroupCommandBufferBeginInfo;

  auto operator<=>(const DeviceGroupCommandBufferBeginInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t deviceMask = {};
};

struct DeviceGroupSubmitInfo {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_GROUP_SUBMIT_INFO;

  using NativeType = VkDeviceGroupSubmitInfo;

  auto operator<=>(const DeviceGroupSubmitInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t waitSemaphoreCount = {};
  uint32_t *pWaitSemaphoreDeviceIndices = {};
  uint32_t commandBufferCount = {};
  uint32_t *pCommandBufferDeviceMasks = {};
  uint32_t signalSemaphoreCount = {};
  uint32_t *pSignalSemaphoreDeviceIndices = {};
};

struct DeviceGroupBindSparseInfo {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_GROUP_BIND_SPARSE_INFO;

  using NativeType = VkDeviceGroupBindSparseInfo;

  auto operator<=>(const DeviceGroupBindSparseInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t resourceDeviceIndex = {};
  uint32_t memoryDeviceIndex = {};
};

struct DeviceGroupPresentCapabilitiesKHR {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR;

  using NativeType = VkDeviceGroupPresentCapabilitiesKHR;

  auto operator<=>(const DeviceGroupPresentCapabilitiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t presentMask[VK_MAX_DEVICE_GROUP_SIZE] = {};
  DeviceGroupPresentModeMask modes = {};
};

struct ImageSwapchainCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_SWAPCHAIN_CREATE_INFO_KHR;

  using NativeType = VkImageSwapchainCreateInfoKHR;

  auto operator<=>(const ImageSwapchainCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkSwapchainKHR swapchain = {};
};

struct BindImageMemorySwapchainInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR;

  using NativeType = VkBindImageMemorySwapchainInfoKHR;

  auto operator<=>(const BindImageMemorySwapchainInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkSwapchainKHR swapchain = {};
  uint32_t imageIndex = {};
};

struct AcquireNextImageInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_ACQUIRE_NEXT_IMAGE_INFO_KHR;

  using NativeType = VkAcquireNextImageInfoKHR;

  auto operator<=>(const AcquireNextImageInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkSwapchainKHR swapchain = {};
  uint64_t timeout = {};
  VkSemaphore semaphore = {};
  VkFence fence = {};
  uint32_t deviceMask = {};
};

struct DeviceGroupPresentInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_GROUP_PRESENT_INFO_KHR;

  using NativeType = VkDeviceGroupPresentInfoKHR;

  auto operator<=>(const DeviceGroupPresentInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t swapchainCount = {};
  uint32_t *pDeviceMasks = {};
  DeviceGroupPresentModeMaskBits mode = {};
};

struct DeviceGroupDeviceCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_GROUP_DEVICE_CREATE_INFO;

  using NativeType = VkDeviceGroupDeviceCreateInfo;

  auto operator<=>(const DeviceGroupDeviceCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t physicalDeviceCount = {};
  VkPhysicalDevice *pPhysicalDevices = {};
};

struct DeviceGroupSwapchainCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR;

  using NativeType = VkDeviceGroupSwapchainCreateInfoKHR;

  auto operator<=>(const DeviceGroupSwapchainCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DeviceGroupPresentModeMask modes = {};
};

struct DescriptorUpdateTemplateEntry {

  using NativeType = VkDescriptorUpdateTemplateEntry;

  auto operator<=>(const DescriptorUpdateTemplateEntry &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t dstBinding = {};
  uint32_t dstArrayElement = {};
  uint32_t descriptorCount = {};
  DescriptorType descriptorType = {};
  size_t offset = {};
  size_t stride = {};
};

struct DescriptorUpdateTemplateCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO;

  using NativeType = VkDescriptorUpdateTemplateCreateInfo;

  auto operator<=>(const DescriptorUpdateTemplateCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DescriptorUpdateTemplateCreateMask flags = {};
  uint32_t descriptorUpdateEntryCount = {};
  DescriptorUpdateTemplateEntry *pDescriptorUpdateEntries = {};
  DescriptorUpdateTemplateType templateType = {};
  VkDescriptorSetLayout descriptorSetLayout = {};
  PipelineBindPoint pipelineBindPoint = {};
  VkPipelineLayout pipelineLayout = {};
  uint32_t set = {};
};

struct XYColorEXT {

  using NativeType = VkXYColorEXT;

  auto operator<=>(const XYColorEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  float x = {};
  float y = {};
};

struct PhysicalDevicePresentIdFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR;

  using NativeType = VkPhysicalDevicePresentIdFeaturesKHR;

  auto operator<=>(const PhysicalDevicePresentIdFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 presentId = {};
};

struct PresentIdKHR {
  static constexpr StructureType structure_type = StructureType::E_PRESENT_ID_KHR;

  using NativeType = VkPresentIdKHR;

  auto operator<=>(const PresentIdKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t swapchainCount = {};
  uint64_t *pPresentIds = {};
};

struct PhysicalDevicePresentWaitFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR;

  using NativeType = VkPhysicalDevicePresentWaitFeaturesKHR;

  auto operator<=>(const PhysicalDevicePresentWaitFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 presentWait = {};
};

struct HdrMetadataEXT {
  static constexpr StructureType structure_type = StructureType::E_HDR_METADATA_EXT;

  using NativeType = VkHdrMetadataEXT;

  auto operator<=>(const HdrMetadataEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  XYColorEXT displayPrimaryRed = {};
  XYColorEXT displayPrimaryGreen = {};
  XYColorEXT displayPrimaryBlue = {};
  XYColorEXT whitePoint = {};
  float maxLuminance = {};
  float minLuminance = {};
  float maxContentLightLevel = {};
  float maxFrameAverageLightLevel = {};
};

struct DisplayNativeHdrSurfaceCapabilitiesAMD {
  static constexpr StructureType structure_type = StructureType::E_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD;

  using NativeType = VkDisplayNativeHdrSurfaceCapabilitiesAMD;

  auto operator<=>(const DisplayNativeHdrSurfaceCapabilitiesAMD &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 localDimmingSupport = {};
};

struct SwapchainDisplayNativeHdrCreateInfoAMD {
  static constexpr StructureType structure_type = StructureType::E_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD;

  using NativeType = VkSwapchainDisplayNativeHdrCreateInfoAMD;

  auto operator<=>(const SwapchainDisplayNativeHdrCreateInfoAMD &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 localDimmingEnable = {};
};

struct RefreshCycleDurationGOOGLE {

  using NativeType = VkRefreshCycleDurationGOOGLE;

  auto operator<=>(const RefreshCycleDurationGOOGLE &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint64_t refreshDuration = {};
};

struct PastPresentationTimingGOOGLE {

  using NativeType = VkPastPresentationTimingGOOGLE;

  auto operator<=>(const PastPresentationTimingGOOGLE &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t presentID = {};
  uint64_t desiredPresentTime = {};
  uint64_t actualPresentTime = {};
  uint64_t earliestPresentTime = {};
  uint64_t presentMargin = {};
};

struct PresentTimeGOOGLE {

  using NativeType = VkPresentTimeGOOGLE;

  auto operator<=>(const PresentTimeGOOGLE &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t presentID = {};
  uint64_t desiredPresentTime = {};
};

struct PresentTimesInfoGOOGLE {
  static constexpr StructureType structure_type = StructureType::E_PRESENT_TIMES_INFO_GOOGLE;

  using NativeType = VkPresentTimesInfoGOOGLE;

  auto operator<=>(const PresentTimesInfoGOOGLE &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t swapchainCount = {};
  PresentTimeGOOGLE *pTimes = {};
};

struct ViewportWScalingNV {

  using NativeType = VkViewportWScalingNV;

  auto operator<=>(const ViewportWScalingNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  float xcoeff = {};
  float ycoeff = {};
};

struct PipelineViewportWScalingStateCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV;

  using NativeType = VkPipelineViewportWScalingStateCreateInfoNV;

  auto operator<=>(const PipelineViewportWScalingStateCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 viewportWScalingEnable = {};
  uint32_t viewportCount = {};
  ViewportWScalingNV *pViewportWScalings = {};
};

struct ViewportSwizzleNV {

  using NativeType = VkViewportSwizzleNV;

  auto operator<=>(const ViewportSwizzleNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  ViewportCoordinateSwizzle x = {};
  ViewportCoordinateSwizzle y = {};
  ViewportCoordinateSwizzle z = {};
  ViewportCoordinateSwizzle w = {};
};

struct PipelineViewportSwizzleStateCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV;

  using NativeType = VkPipelineViewportSwizzleStateCreateInfoNV;

  auto operator<=>(const PipelineViewportSwizzleStateCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineViewportSwizzleStateCreateMask flags = {};
  uint32_t viewportCount = {};
  ViewportSwizzleNV *pViewportSwizzles = {};
};

struct PhysicalDeviceDiscardRectanglePropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceDiscardRectanglePropertiesEXT;

  auto operator<=>(const PhysicalDeviceDiscardRectanglePropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxDiscardRectangles = {};
};

struct PipelineDiscardRectangleStateCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT;

  using NativeType = VkPipelineDiscardRectangleStateCreateInfoEXT;

  auto operator<=>(const PipelineDiscardRectangleStateCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineDiscardRectangleStateCreateMask flags = {};
  DiscardRectangleMode discardRectangleMode = {};
  uint32_t discardRectangleCount = {};
  Rect2D *pDiscardRectangles = {};
};

struct PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX;

  using NativeType = VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX;

  auto operator<=>(const PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 perViewPositionAllComponents = {};
};

struct InputAttachmentAspectReference {

  using NativeType = VkInputAttachmentAspectReference;

  auto operator<=>(const InputAttachmentAspectReference &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t subpass = {};
  uint32_t inputAttachmentIndex = {};
  ImageAspectMask aspectMask = {};
};

struct RenderPassInputAttachmentAspectCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO;

  using NativeType = VkRenderPassInputAttachmentAspectCreateInfo;

  auto operator<=>(const RenderPassInputAttachmentAspectCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t aspectReferenceCount = {};
  InputAttachmentAspectReference *pAspectReferences = {};
};

struct PhysicalDeviceSurfaceInfo2KHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR;

  using NativeType = VkPhysicalDeviceSurfaceInfo2KHR;

  auto operator<=>(const PhysicalDeviceSurfaceInfo2KHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkSurfaceKHR surface = {};
};

struct SurfaceCapabilities2KHR {
  static constexpr StructureType structure_type = StructureType::E_SURFACE_CAPABILITIES_2_KHR;

  using NativeType = VkSurfaceCapabilities2KHR;

  auto operator<=>(const SurfaceCapabilities2KHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  SurfaceCapabilitiesKHR surfaceCapabilities = {};
};

struct SurfaceFormat2KHR {
  static constexpr StructureType structure_type = StructureType::E_SURFACE_FORMAT_2_KHR;

  using NativeType = VkSurfaceFormat2KHR;

  auto operator<=>(const SurfaceFormat2KHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  SurfaceFormatKHR surfaceFormat = {};
};

struct DisplayProperties2KHR {
  static constexpr StructureType structure_type = StructureType::E_DISPLAY_PROPERTIES_2_KHR;

  using NativeType = VkDisplayProperties2KHR;

  auto operator<=>(const DisplayProperties2KHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DisplayPropertiesKHR displayProperties = {};
};

struct DisplayPlaneProperties2KHR {
  static constexpr StructureType structure_type = StructureType::E_DISPLAY_PLANE_PROPERTIES_2_KHR;

  using NativeType = VkDisplayPlaneProperties2KHR;

  auto operator<=>(const DisplayPlaneProperties2KHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DisplayPlanePropertiesKHR displayPlaneProperties = {};
};

struct DisplayModeProperties2KHR {
  static constexpr StructureType structure_type = StructureType::E_DISPLAY_MODE_PROPERTIES_2_KHR;

  using NativeType = VkDisplayModeProperties2KHR;

  auto operator<=>(const DisplayModeProperties2KHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DisplayModePropertiesKHR displayModeProperties = {};
};

struct DisplayPlaneInfo2KHR {
  static constexpr StructureType structure_type = StructureType::E_DISPLAY_PLANE_INFO_2_KHR;

  using NativeType = VkDisplayPlaneInfo2KHR;

  auto operator<=>(const DisplayPlaneInfo2KHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDisplayModeKHR mode = {};
  uint32_t planeIndex = {};
};

struct DisplayPlaneCapabilities2KHR {
  static constexpr StructureType structure_type = StructureType::E_DISPLAY_PLANE_CAPABILITIES_2_KHR;

  using NativeType = VkDisplayPlaneCapabilities2KHR;

  auto operator<=>(const DisplayPlaneCapabilities2KHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DisplayPlaneCapabilitiesKHR capabilities = {};
};

struct SharedPresentSurfaceCapabilitiesKHR {
  static constexpr StructureType structure_type = StructureType::E_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR;

  using NativeType = VkSharedPresentSurfaceCapabilitiesKHR;

  auto operator<=>(const SharedPresentSurfaceCapabilitiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ImageUsageMask sharedPresentSupportedUsageFlags = {};
};

struct PhysicalDevice16BitStorageFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES;

  using NativeType = VkPhysicalDevice16BitStorageFeatures;

  auto operator<=>(const PhysicalDevice16BitStorageFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 storageBuffer16BitAccess = {};
  VkBool32 uniformAndStorageBuffer16BitAccess = {};
  VkBool32 storagePushConstant16 = {};
  VkBool32 storageInputOutput16 = {};
};

struct PhysicalDeviceSubgroupProperties {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES;

  using NativeType = VkPhysicalDeviceSubgroupProperties;

  auto operator<=>(const PhysicalDeviceSubgroupProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t subgroupSize = {};
  ShaderStageMask supportedStages = {};
  SubgroupFeatureMask supportedOperations = {};
  VkBool32 quadOperationsInAllStages = {};
};

struct PhysicalDeviceShaderSubgroupExtendedTypesFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES;

  using NativeType = VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures;

  auto operator<=>(const PhysicalDeviceShaderSubgroupExtendedTypesFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderSubgroupExtendedTypes = {};
};

struct BufferMemoryRequirementsInfo2 {
  static constexpr StructureType structure_type = StructureType::E_BUFFER_MEMORY_REQUIREMENTS_INFO_2;

  using NativeType = VkBufferMemoryRequirementsInfo2;

  auto operator<=>(const BufferMemoryRequirementsInfo2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBuffer buffer = {};
};

struct DeviceBufferMemoryRequirements {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_BUFFER_MEMORY_REQUIREMENTS;

  using NativeType = VkDeviceBufferMemoryRequirements;

  auto operator<=>(const DeviceBufferMemoryRequirements &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  BufferCreateInfo *pCreateInfo = {};
};

struct ImageMemoryRequirementsInfo2 {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_MEMORY_REQUIREMENTS_INFO_2;

  using NativeType = VkImageMemoryRequirementsInfo2;

  auto operator<=>(const ImageMemoryRequirementsInfo2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkImage image = {};
};

struct ImageSparseMemoryRequirementsInfo2 {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2;

  using NativeType = VkImageSparseMemoryRequirementsInfo2;

  auto operator<=>(const ImageSparseMemoryRequirementsInfo2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkImage image = {};
};

struct DeviceImageMemoryRequirements {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_IMAGE_MEMORY_REQUIREMENTS;

  using NativeType = VkDeviceImageMemoryRequirements;

  auto operator<=>(const DeviceImageMemoryRequirements &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ImageCreateInfo *pCreateInfo = {};
  ImageAspectMaskBits planeAspect = {};
};

struct MemoryRequirements2 {
  static constexpr StructureType structure_type = StructureType::E_MEMORY_REQUIREMENTS_2;

  using NativeType = VkMemoryRequirements2;

  auto operator<=>(const MemoryRequirements2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  MemoryRequirements memoryRequirements = {};
};

struct SparseImageMemoryRequirements2 {
  static constexpr StructureType structure_type = StructureType::E_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2;

  using NativeType = VkSparseImageMemoryRequirements2;

  auto operator<=>(const SparseImageMemoryRequirements2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  SparseImageMemoryRequirements memoryRequirements = {};
};

struct PhysicalDevicePointClippingProperties {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES;

  using NativeType = VkPhysicalDevicePointClippingProperties;

  auto operator<=>(const PhysicalDevicePointClippingProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PointClippingBehavior pointClippingBehavior = {};
};

struct MemoryDedicatedRequirements {
  static constexpr StructureType structure_type = StructureType::E_MEMORY_DEDICATED_REQUIREMENTS;

  using NativeType = VkMemoryDedicatedRequirements;

  auto operator<=>(const MemoryDedicatedRequirements &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 prefersDedicatedAllocation = {};
  VkBool32 requiresDedicatedAllocation = {};
};

struct MemoryDedicatedAllocateInfo {
  static constexpr StructureType structure_type = StructureType::E_MEMORY_DEDICATED_ALLOCATE_INFO;

  using NativeType = VkMemoryDedicatedAllocateInfo;

  auto operator<=>(const MemoryDedicatedAllocateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkImage image = {};
  VkBuffer buffer = {};
};

struct ImageViewUsageCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_VIEW_USAGE_CREATE_INFO;

  using NativeType = VkImageViewUsageCreateInfo;

  auto operator<=>(const ImageViewUsageCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ImageUsageMask usage = {};
};

struct ImageViewSlicedCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_VIEW_SLICED_CREATE_INFO_EXT;

  using NativeType = VkImageViewSlicedCreateInfoEXT;

  auto operator<=>(const ImageViewSlicedCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t sliceOffset = {};
  uint32_t sliceCount = {};
};

struct PipelineTessellationDomainOriginStateCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO;

  using NativeType = VkPipelineTessellationDomainOriginStateCreateInfo;

  auto operator<=>(const PipelineTessellationDomainOriginStateCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  TessellationDomainOrigin domainOrigin = {};
};

struct SamplerYcbcrConversionInfo {
  static constexpr StructureType structure_type = StructureType::E_SAMPLER_YCBCR_CONVERSION_INFO;

  using NativeType = VkSamplerYcbcrConversionInfo;

  auto operator<=>(const SamplerYcbcrConversionInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkSamplerYcbcrConversion conversion = {};
};

struct SamplerYcbcrConversionCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_SAMPLER_YCBCR_CONVERSION_CREATE_INFO;

  using NativeType = VkSamplerYcbcrConversionCreateInfo;

  auto operator<=>(const SamplerYcbcrConversionCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  Format format = {};
  SamplerYcbcrModelConversion ycbcrModel = {};
  SamplerYcbcrRange ycbcrRange = {};
  ComponentMapping components = {};
  ChromaLocation xChromaOffset = {};
  ChromaLocation yChromaOffset = {};
  Filter chromaFilter = {};
  VkBool32 forceExplicitReconstruction = {};
};

struct BindImagePlaneMemoryInfo {
  static constexpr StructureType structure_type = StructureType::E_BIND_IMAGE_PLANE_MEMORY_INFO;

  using NativeType = VkBindImagePlaneMemoryInfo;

  auto operator<=>(const BindImagePlaneMemoryInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ImageAspectMaskBits planeAspect = {};
};

struct ImagePlaneMemoryRequirementsInfo {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO;

  using NativeType = VkImagePlaneMemoryRequirementsInfo;

  auto operator<=>(const ImagePlaneMemoryRequirementsInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ImageAspectMaskBits planeAspect = {};
};

struct PhysicalDeviceSamplerYcbcrConversionFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES;

  using NativeType = VkPhysicalDeviceSamplerYcbcrConversionFeatures;

  auto operator<=>(const PhysicalDeviceSamplerYcbcrConversionFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 samplerYcbcrConversion = {};
};

struct SamplerYcbcrConversionImageFormatProperties {
  static constexpr StructureType structure_type = StructureType::E_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES;

  using NativeType = VkSamplerYcbcrConversionImageFormatProperties;

  auto operator<=>(const SamplerYcbcrConversionImageFormatProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t combinedImageSamplerDescriptorCount = {};
};

struct TextureLODGatherFormatPropertiesAMD {
  static constexpr StructureType structure_type = StructureType::E_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD;

  using NativeType = VkTextureLODGatherFormatPropertiesAMD;

  auto operator<=>(const TextureLODGatherFormatPropertiesAMD &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 supportsTextureGatherLODBiasAMD = {};
};

struct ConditionalRenderingBeginInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_CONDITIONAL_RENDERING_BEGIN_INFO_EXT;

  using NativeType = VkConditionalRenderingBeginInfoEXT;

  auto operator<=>(const ConditionalRenderingBeginInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBuffer buffer = {};
  VkDeviceSize offset = {};
  ConditionalRenderingMask flags = {};
};

struct ProtectedSubmitInfo {
  static constexpr StructureType structure_type = StructureType::E_PROTECTED_SUBMIT_INFO;

  using NativeType = VkProtectedSubmitInfo;

  auto operator<=>(const ProtectedSubmitInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 protectedSubmit = {};
};

struct PhysicalDeviceProtectedMemoryFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES;

  using NativeType = VkPhysicalDeviceProtectedMemoryFeatures;

  auto operator<=>(const PhysicalDeviceProtectedMemoryFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 protectedMemory = {};
};

struct PhysicalDeviceProtectedMemoryProperties {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES;

  using NativeType = VkPhysicalDeviceProtectedMemoryProperties;

  auto operator<=>(const PhysicalDeviceProtectedMemoryProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 protectedNoFault = {};
};

struct DeviceQueueInfo2 {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_QUEUE_INFO_2;

  using NativeType = VkDeviceQueueInfo2;

  auto operator<=>(const DeviceQueueInfo2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DeviceQueueCreateMask flags = {};
  uint32_t queueFamilyIndex = {};
  uint32_t queueIndex = {};
};

struct PipelineCoverageToColorStateCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV;

  using NativeType = VkPipelineCoverageToColorStateCreateInfoNV;

  auto operator<=>(const PipelineCoverageToColorStateCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineCoverageToColorStateCreateMask flags = {};
  VkBool32 coverageToColorEnable = {};
  uint32_t coverageToColorLocation = {};
};

struct PhysicalDeviceSamplerFilterMinmaxProperties {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES;

  using NativeType = VkPhysicalDeviceSamplerFilterMinmaxProperties;

  auto operator<=>(const PhysicalDeviceSamplerFilterMinmaxProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 filterMinmaxSingleComponentFormats = {};
  VkBool32 filterMinmaxImageComponentMapping = {};
};

struct SampleLocationEXT {

  using NativeType = VkSampleLocationEXT;

  auto operator<=>(const SampleLocationEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  float x = {};
  float y = {};
};

struct SampleLocationsInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_SAMPLE_LOCATIONS_INFO_EXT;

  using NativeType = VkSampleLocationsInfoEXT;

  auto operator<=>(const SampleLocationsInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  SampleCountMaskBits sampleLocationsPerPixel = {};
  Extent2D sampleLocationGridSize = {};
  uint32_t sampleLocationsCount = {};
  SampleLocationEXT *pSampleLocations = {};
};

struct AttachmentSampleLocationsEXT {

  using NativeType = VkAttachmentSampleLocationsEXT;

  auto operator<=>(const AttachmentSampleLocationsEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t attachmentIndex = {};
  SampleLocationsInfoEXT sampleLocationsInfo = {};
};

struct SubpassSampleLocationsEXT {

  using NativeType = VkSubpassSampleLocationsEXT;

  auto operator<=>(const SubpassSampleLocationsEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t subpassIndex = {};
  SampleLocationsInfoEXT sampleLocationsInfo = {};
};

struct RenderPassSampleLocationsBeginInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT;

  using NativeType = VkRenderPassSampleLocationsBeginInfoEXT;

  auto operator<=>(const RenderPassSampleLocationsBeginInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t attachmentInitialSampleLocationsCount = {};
  AttachmentSampleLocationsEXT *pAttachmentInitialSampleLocations = {};
  uint32_t postSubpassSampleLocationsCount = {};
  SubpassSampleLocationsEXT *pPostSubpassSampleLocations = {};
};

struct PipelineSampleLocationsStateCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT;

  using NativeType = VkPipelineSampleLocationsStateCreateInfoEXT;

  auto operator<=>(const PipelineSampleLocationsStateCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 sampleLocationsEnable = {};
  SampleLocationsInfoEXT sampleLocationsInfo = {};
};

struct PhysicalDeviceSampleLocationsPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceSampleLocationsPropertiesEXT;

  auto operator<=>(const PhysicalDeviceSampleLocationsPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  SampleCountMask sampleLocationSampleCounts = {};
  Extent2D maxSampleLocationGridSize = {};
  float sampleLocationCoordinateRange[2] = {};
  uint32_t sampleLocationSubPixelBits = {};
  VkBool32 variableSampleLocations = {};
};

struct MultisamplePropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_MULTISAMPLE_PROPERTIES_EXT;

  using NativeType = VkMultisamplePropertiesEXT;

  auto operator<=>(const MultisamplePropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  Extent2D maxSampleLocationGridSize = {};
};

struct SamplerReductionModeCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_SAMPLER_REDUCTION_MODE_CREATE_INFO;

  using NativeType = VkSamplerReductionModeCreateInfo;

  auto operator<=>(const SamplerReductionModeCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  SamplerReductionMode reductionMode = {};
};

struct PhysicalDeviceBlendOperationAdvancedFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT;

  auto operator<=>(const PhysicalDeviceBlendOperationAdvancedFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 advancedBlendCoherentOperations = {};
};

struct PhysicalDeviceMultiDrawFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceMultiDrawFeaturesEXT;

  auto operator<=>(const PhysicalDeviceMultiDrawFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 multiDraw = {};
};

struct PhysicalDeviceBlendOperationAdvancedPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT;

  auto operator<=>(const PhysicalDeviceBlendOperationAdvancedPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t advancedBlendMaxColorAttachments = {};
  VkBool32 advancedBlendIndependentBlend = {};
  VkBool32 advancedBlendNonPremultipliedSrcColor = {};
  VkBool32 advancedBlendNonPremultipliedDstColor = {};
  VkBool32 advancedBlendCorrelatedOverlap = {};
  VkBool32 advancedBlendAllOperations = {};
};

struct PipelineColorBlendAdvancedStateCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT;

  using NativeType = VkPipelineColorBlendAdvancedStateCreateInfoEXT;

  auto operator<=>(const PipelineColorBlendAdvancedStateCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 srcPremultiplied = {};
  VkBool32 dstPremultiplied = {};
  BlendOverlap blendOverlap = {};
};

struct PhysicalDeviceInlineUniformBlockFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES;

  using NativeType = VkPhysicalDeviceInlineUniformBlockFeatures;

  auto operator<=>(const PhysicalDeviceInlineUniformBlockFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 inlineUniformBlock = {};
  VkBool32 descriptorBindingInlineUniformBlockUpdateAfterBind = {};
};

struct PhysicalDeviceInlineUniformBlockProperties {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES;

  using NativeType = VkPhysicalDeviceInlineUniformBlockProperties;

  auto operator<=>(const PhysicalDeviceInlineUniformBlockProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxInlineUniformBlockSize = {};
  uint32_t maxPerStageDescriptorInlineUniformBlocks = {};
  uint32_t maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = {};
  uint32_t maxDescriptorSetInlineUniformBlocks = {};
  uint32_t maxDescriptorSetUpdateAfterBindInlineUniformBlocks = {};
};

struct WriteDescriptorSetInlineUniformBlock {
  static constexpr StructureType structure_type = StructureType::E_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK;

  using NativeType = VkWriteDescriptorSetInlineUniformBlock;

  auto operator<=>(const WriteDescriptorSetInlineUniformBlock &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t dataSize = {};
  void *pData = {};
};

struct DescriptorPoolInlineUniformBlockCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO;

  using NativeType = VkDescriptorPoolInlineUniformBlockCreateInfo;

  auto operator<=>(const DescriptorPoolInlineUniformBlockCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxInlineUniformBlockBindings = {};
};

struct PipelineCoverageModulationStateCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV;

  using NativeType = VkPipelineCoverageModulationStateCreateInfoNV;

  auto operator<=>(const PipelineCoverageModulationStateCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineCoverageModulationStateCreateMask flags = {};
  CoverageModulationMode coverageModulationMode = {};
  VkBool32 coverageModulationTableEnable = {};
  uint32_t coverageModulationTableCount = {};
  float *pCoverageModulationTable = {};
};

struct ImageFormatListCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_FORMAT_LIST_CREATE_INFO;

  using NativeType = VkImageFormatListCreateInfo;

  auto operator<=>(const ImageFormatListCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t viewFormatCount = {};
  Format *pViewFormats = {};
};

struct ValidationCacheCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_VALIDATION_CACHE_CREATE_INFO_EXT;

  using NativeType = VkValidationCacheCreateInfoEXT;

  auto operator<=>(const ValidationCacheCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ValidationCacheCreateMask flags = {};
  size_t initialDataSize = {};
  void *pInitialData = {};
};

struct ShaderModuleValidationCacheCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT;

  using NativeType = VkShaderModuleValidationCacheCreateInfoEXT;

  auto operator<=>(const ShaderModuleValidationCacheCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkValidationCacheEXT validationCache = {};
};

struct PhysicalDeviceMaintenance3Properties {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES;

  using NativeType = VkPhysicalDeviceMaintenance3Properties;

  auto operator<=>(const PhysicalDeviceMaintenance3Properties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxPerSetDescriptors = {};
  VkDeviceSize maxMemoryAllocationSize = {};
};

struct PhysicalDeviceMaintenance4Features {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES;

  using NativeType = VkPhysicalDeviceMaintenance4Features;

  auto operator<=>(const PhysicalDeviceMaintenance4Features &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 maintenance4 = {};
};

struct PhysicalDeviceMaintenance4Properties {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES;

  using NativeType = VkPhysicalDeviceMaintenance4Properties;

  auto operator<=>(const PhysicalDeviceMaintenance4Properties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceSize maxBufferSize = {};
};

struct PhysicalDeviceMaintenance5FeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceMaintenance5FeaturesKHR;

  auto operator<=>(const PhysicalDeviceMaintenance5FeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 maintenance5 = {};
};

struct PhysicalDeviceMaintenance5PropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES_KHR;

  using NativeType = VkPhysicalDeviceMaintenance5PropertiesKHR;

  auto operator<=>(const PhysicalDeviceMaintenance5PropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 earlyFragmentMultisampleCoverageAfterSampleCounting = {};
  VkBool32 earlyFragmentSampleMaskTestBeforeSampleCounting = {};
  VkBool32 depthStencilSwizzleOneSupport = {};
  VkBool32 polygonModePointSize = {};
  VkBool32 nonStrictSinglePixelWideLinesUseParallelogram = {};
  VkBool32 nonStrictWideLinesUseParallelogram = {};
};

struct PhysicalDeviceMaintenance6FeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceMaintenance6FeaturesKHR;

  auto operator<=>(const PhysicalDeviceMaintenance6FeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 maintenance6 = {};
};

struct PhysicalDeviceMaintenance6PropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_6_PROPERTIES_KHR;

  using NativeType = VkPhysicalDeviceMaintenance6PropertiesKHR;

  auto operator<=>(const PhysicalDeviceMaintenance6PropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 blockTexelViewCompatibleMultipleLayers = {};
  uint32_t maxCombinedImageSamplerDescriptorCount = {};
  VkBool32 fragmentShadingRateClampCombinerInputs = {};
};

struct PhysicalDeviceMaintenance7FeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_7_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceMaintenance7FeaturesKHR;

  auto operator<=>(const PhysicalDeviceMaintenance7FeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 maintenance7 = {};
};

struct PhysicalDeviceMaintenance7PropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_7_PROPERTIES_KHR;

  using NativeType = VkPhysicalDeviceMaintenance7PropertiesKHR;

  auto operator<=>(const PhysicalDeviceMaintenance7PropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 robustFragmentShadingRateAttachmentAccess = {};
  VkBool32 separateDepthStencilAttachmentAccess = {};
  uint32_t maxDescriptorSetTotalUniformBuffersDynamic = {};
  uint32_t maxDescriptorSetTotalStorageBuffersDynamic = {};
  uint32_t maxDescriptorSetTotalBuffersDynamic = {};
  uint32_t maxDescriptorSetUpdateAfterBindTotalUniformBuffersDynamic = {};
  uint32_t maxDescriptorSetUpdateAfterBindTotalStorageBuffersDynamic = {};
  uint32_t maxDescriptorSetUpdateAfterBindTotalBuffersDynamic = {};
};

struct PhysicalDeviceLayeredApiPropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_KHR;

  using NativeType = VkPhysicalDeviceLayeredApiPropertiesKHR;

  auto operator<=>(const PhysicalDeviceLayeredApiPropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t vendorID = {};
  uint32_t deviceID = {};
  PhysicalDeviceLayeredApi layeredAPI = {};
  char deviceName[VK_MAX_PHYSICAL_DEVICE_NAME_SIZE] = {};
};

struct PhysicalDeviceLayeredApiPropertiesListKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_LIST_KHR;

  using NativeType = VkPhysicalDeviceLayeredApiPropertiesListKHR;

  auto operator<=>(const PhysicalDeviceLayeredApiPropertiesListKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t layeredApiCount = {};
  PhysicalDeviceLayeredApiPropertiesKHR *pLayeredApis = {};
};

struct PhysicalDeviceLayeredApiVulkanPropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_LAYERED_API_VULKAN_PROPERTIES_KHR;

  using NativeType = VkPhysicalDeviceLayeredApiVulkanPropertiesKHR;

  auto operator<=>(const PhysicalDeviceLayeredApiVulkanPropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PhysicalDeviceProperties2 properties = {};
};

struct RenderingAreaInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_RENDERING_AREA_INFO_KHR;

  using NativeType = VkRenderingAreaInfoKHR;

  auto operator<=>(const RenderingAreaInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t viewMask = {};
  uint32_t colorAttachmentCount = {};
  Format *pColorAttachmentFormats = {};
  Format depthAttachmentFormat = {};
  Format stencilAttachmentFormat = {};
};

struct DescriptorSetLayoutSupport {
  static constexpr StructureType structure_type = StructureType::E_DESCRIPTOR_SET_LAYOUT_SUPPORT;

  using NativeType = VkDescriptorSetLayoutSupport;

  auto operator<=>(const DescriptorSetLayoutSupport &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 supported = {};
};

struct PhysicalDeviceShaderDrawParametersFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES;

  using NativeType = VkPhysicalDeviceShaderDrawParametersFeatures;

  auto operator<=>(const PhysicalDeviceShaderDrawParametersFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderDrawParameters = {};
};

struct PhysicalDeviceShaderFloat16Int8Features {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES;

  using NativeType = VkPhysicalDeviceShaderFloat16Int8Features;

  auto operator<=>(const PhysicalDeviceShaderFloat16Int8Features &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderFloat16 = {};
  VkBool32 shaderInt8 = {};
};

struct PhysicalDeviceFloatControlsProperties {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES;

  using NativeType = VkPhysicalDeviceFloatControlsProperties;

  auto operator<=>(const PhysicalDeviceFloatControlsProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ShaderFloatControlsIndependence denormBehaviorIndependence = {};
  ShaderFloatControlsIndependence roundingModeIndependence = {};
  VkBool32 shaderSignedZeroInfNanPreserveFloat16 = {};
  VkBool32 shaderSignedZeroInfNanPreserveFloat32 = {};
  VkBool32 shaderSignedZeroInfNanPreserveFloat64 = {};
  VkBool32 shaderDenormPreserveFloat16 = {};
  VkBool32 shaderDenormPreserveFloat32 = {};
  VkBool32 shaderDenormPreserveFloat64 = {};
  VkBool32 shaderDenormFlushToZeroFloat16 = {};
  VkBool32 shaderDenormFlushToZeroFloat32 = {};
  VkBool32 shaderDenormFlushToZeroFloat64 = {};
  VkBool32 shaderRoundingModeRTEFloat16 = {};
  VkBool32 shaderRoundingModeRTEFloat32 = {};
  VkBool32 shaderRoundingModeRTEFloat64 = {};
  VkBool32 shaderRoundingModeRTZFloat16 = {};
  VkBool32 shaderRoundingModeRTZFloat32 = {};
  VkBool32 shaderRoundingModeRTZFloat64 = {};
};

struct PhysicalDeviceHostQueryResetFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES;

  using NativeType = VkPhysicalDeviceHostQueryResetFeatures;

  auto operator<=>(const PhysicalDeviceHostQueryResetFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 hostQueryReset = {};
};

struct ShaderResourceUsageAMD {

  using NativeType = VkShaderResourceUsageAMD;

  auto operator<=>(const ShaderResourceUsageAMD &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t numUsedVgprs = {};
  uint32_t numUsedSgprs = {};
  uint32_t ldsSizePerLocalWorkGroup = {};
  size_t ldsUsageSizeInBytes = {};
  size_t scratchMemUsageInBytes = {};
};

struct ShaderStatisticsInfoAMD {

  using NativeType = VkShaderStatisticsInfoAMD;

  auto operator<=>(const ShaderStatisticsInfoAMD &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  ShaderStageMask shaderStageMask = {};
  ShaderResourceUsageAMD resourceUsage = {};
  uint32_t numPhysicalVgprs = {};
  uint32_t numPhysicalSgprs = {};
  uint32_t numAvailableVgprs = {};
  uint32_t numAvailableSgprs = {};
  uint32_t computeWorkGroupSize[3] = {};
};

struct DeviceQueueGlobalPriorityCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_KHR;

  using NativeType = VkDeviceQueueGlobalPriorityCreateInfoKHR;

  auto operator<=>(const DeviceQueueGlobalPriorityCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  QueueGlobalPriority globalPriority = {};
};

struct PhysicalDeviceGlobalPriorityQueryFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR;

  auto operator<=>(const PhysicalDeviceGlobalPriorityQueryFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 globalPriorityQuery = {};
};

struct QueueFamilyGlobalPriorityPropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_KHR;

  using NativeType = VkQueueFamilyGlobalPriorityPropertiesKHR;

  auto operator<=>(const QueueFamilyGlobalPriorityPropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t priorityCount = {};
  QueueGlobalPriority priorities[VK_MAX_GLOBAL_PRIORITY_SIZE_KHR] = {};
};

struct DebugUtilsObjectNameInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_DEBUG_UTILS_OBJECT_NAME_INFO_EXT;

  using NativeType = VkDebugUtilsObjectNameInfoEXT;

  auto operator<=>(const DebugUtilsObjectNameInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ObjectType objectType = {};
  uint64_t objectHandle = {};
  char *pObjectName = {};
};

struct DebugUtilsObjectTagInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_DEBUG_UTILS_OBJECT_TAG_INFO_EXT;

  using NativeType = VkDebugUtilsObjectTagInfoEXT;

  auto operator<=>(const DebugUtilsObjectTagInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ObjectType objectType = {};
  uint64_t objectHandle = {};
  uint64_t tagName = {};
  size_t tagSize = {};
  void *pTag = {};
};

struct DebugUtilsLabelEXT {
  static constexpr StructureType structure_type = StructureType::E_DEBUG_UTILS_LABEL_EXT;

  using NativeType = VkDebugUtilsLabelEXT;

  auto operator<=>(const DebugUtilsLabelEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  char *pLabelName = {};
  float color[4] = {};
};

struct DebugUtilsMessengerCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT;

  using NativeType = VkDebugUtilsMessengerCreateInfoEXT;

  auto operator<=>(const DebugUtilsMessengerCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DebugUtilsMessengerCreateMask flags = {};
  DebugUtilsMessageSeverityMask messageSeverity = {};
  DebugUtilsMessageTypeMask messageType = {};
  PFN_vkDebugUtilsMessengerCallbackEXT pfnUserCallback = {};
  void *pUserData = {};
};

struct DebugUtilsMessengerCallbackDataEXT {
  static constexpr StructureType structure_type = StructureType::E_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT;

  using NativeType = VkDebugUtilsMessengerCallbackDataEXT;

  auto operator<=>(const DebugUtilsMessengerCallbackDataEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DebugUtilsMessengerCallbackDataMask flags = {};
  char *pMessageIdName = {};
  int32_t messageIdNumber = {};
  char *pMessage = {};
  uint32_t queueLabelCount = {};
  DebugUtilsLabelEXT *pQueueLabels = {};
  uint32_t cmdBufLabelCount = {};
  DebugUtilsLabelEXT *pCmdBufLabels = {};
  uint32_t objectCount = {};
  DebugUtilsObjectNameInfoEXT *pObjects = {};
};

struct PhysicalDeviceDeviceMemoryReportFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceDeviceMemoryReportFeaturesEXT;

  auto operator<=>(const PhysicalDeviceDeviceMemoryReportFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 deviceMemoryReport = {};
};

struct DeviceDeviceMemoryReportCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT;

  using NativeType = VkDeviceDeviceMemoryReportCreateInfoEXT;

  auto operator<=>(const DeviceDeviceMemoryReportCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DeviceMemoryReportMask flags = {};
  PFN_vkDeviceMemoryReportCallbackEXT pfnUserCallback = {};
  void *pUserData = {};
};

struct DeviceMemoryReportCallbackDataEXT {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_MEMORY_REPORT_CALLBACK_DATA_EXT;

  using NativeType = VkDeviceMemoryReportCallbackDataEXT;

  auto operator<=>(const DeviceMemoryReportCallbackDataEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DeviceMemoryReportMask flags = {};
  DeviceMemoryReportEventType type = {};
  uint64_t memoryObjectId = {};
  VkDeviceSize size = {};
  ObjectType objectType = {};
  uint64_t objectHandle = {};
  uint32_t heapIndex = {};
};

struct ImportMemoryHostPointerInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_IMPORT_MEMORY_HOST_POINTER_INFO_EXT;

  using NativeType = VkImportMemoryHostPointerInfoEXT;

  auto operator<=>(const ImportMemoryHostPointerInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ExternalMemoryHandleTypeMaskBits handleType = {};
  void *pHostPointer = {};
};

struct MemoryHostPointerPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_MEMORY_HOST_POINTER_PROPERTIES_EXT;

  using NativeType = VkMemoryHostPointerPropertiesEXT;

  auto operator<=>(const MemoryHostPointerPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t memoryTypeBits = {};
};

struct PhysicalDeviceExternalMemoryHostPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceExternalMemoryHostPropertiesEXT;

  auto operator<=>(const PhysicalDeviceExternalMemoryHostPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceSize minImportedHostPointerAlignment = {};
};

struct PhysicalDeviceConservativeRasterizationPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceConservativeRasterizationPropertiesEXT;

  auto operator<=>(const PhysicalDeviceConservativeRasterizationPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  float primitiveOverestimationSize = {};
  float maxExtraPrimitiveOverestimationSize = {};
  float extraPrimitiveOverestimationSizeGranularity = {};
  VkBool32 primitiveUnderestimation = {};
  VkBool32 conservativePointAndLineRasterization = {};
  VkBool32 degenerateTrianglesRasterized = {};
  VkBool32 degenerateLinesRasterized = {};
  VkBool32 fullyCoveredFragmentShaderInputVariable = {};
  VkBool32 conservativeRasterizationPostDepthCoverage = {};
};

struct CalibratedTimestampInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_CALIBRATED_TIMESTAMP_INFO_KHR;

  using NativeType = VkCalibratedTimestampInfoKHR;

  auto operator<=>(const CalibratedTimestampInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  TimeDomain timeDomain = {};
};

struct PhysicalDeviceShaderCorePropertiesAMD {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD;

  using NativeType = VkPhysicalDeviceShaderCorePropertiesAMD;

  auto operator<=>(const PhysicalDeviceShaderCorePropertiesAMD &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t shaderEngineCount = {};
  uint32_t shaderArraysPerEngineCount = {};
  uint32_t computeUnitsPerShaderArray = {};
  uint32_t simdPerComputeUnit = {};
  uint32_t wavefrontsPerSimd = {};
  uint32_t wavefrontSize = {};
  uint32_t sgprsPerSimd = {};
  uint32_t minSgprAllocation = {};
  uint32_t maxSgprAllocation = {};
  uint32_t sgprAllocationGranularity = {};
  uint32_t vgprsPerSimd = {};
  uint32_t minVgprAllocation = {};
  uint32_t maxVgprAllocation = {};
  uint32_t vgprAllocationGranularity = {};
};

struct PhysicalDeviceShaderCoreProperties2AMD {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD;

  using NativeType = VkPhysicalDeviceShaderCoreProperties2AMD;

  auto operator<=>(const PhysicalDeviceShaderCoreProperties2AMD &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ShaderCorePropertiesMask shaderCoreFeatures = {};
  uint32_t activeComputeUnitCount = {};
};

struct PipelineRasterizationConservativeStateCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT;

  using NativeType = VkPipelineRasterizationConservativeStateCreateInfoEXT;

  auto operator<=>(const PipelineRasterizationConservativeStateCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineRasterizationConservativeStateCreateMask flags = {};
  ConservativeRasterizationMode conservativeRasterizationMode = {};
  float extraPrimitiveOverestimationSize = {};
};

struct PhysicalDeviceDescriptorIndexingFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES;

  using NativeType = VkPhysicalDeviceDescriptorIndexingFeatures;

  auto operator<=>(const PhysicalDeviceDescriptorIndexingFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderInputAttachmentArrayDynamicIndexing = {};
  VkBool32 shaderUniformTexelBufferArrayDynamicIndexing = {};
  VkBool32 shaderStorageTexelBufferArrayDynamicIndexing = {};
  VkBool32 shaderUniformBufferArrayNonUniformIndexing = {};
  VkBool32 shaderSampledImageArrayNonUniformIndexing = {};
  VkBool32 shaderStorageBufferArrayNonUniformIndexing = {};
  VkBool32 shaderStorageImageArrayNonUniformIndexing = {};
  VkBool32 shaderInputAttachmentArrayNonUniformIndexing = {};
  VkBool32 shaderUniformTexelBufferArrayNonUniformIndexing = {};
  VkBool32 shaderStorageTexelBufferArrayNonUniformIndexing = {};
  VkBool32 descriptorBindingUniformBufferUpdateAfterBind = {};
  VkBool32 descriptorBindingSampledImageUpdateAfterBind = {};
  VkBool32 descriptorBindingStorageImageUpdateAfterBind = {};
  VkBool32 descriptorBindingStorageBufferUpdateAfterBind = {};
  VkBool32 descriptorBindingUniformTexelBufferUpdateAfterBind = {};
  VkBool32 descriptorBindingStorageTexelBufferUpdateAfterBind = {};
  VkBool32 descriptorBindingUpdateUnusedWhilePending = {};
  VkBool32 descriptorBindingPartiallyBound = {};
  VkBool32 descriptorBindingVariableDescriptorCount = {};
  VkBool32 runtimeDescriptorArray = {};
};

struct PhysicalDeviceDescriptorIndexingProperties {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES;

  using NativeType = VkPhysicalDeviceDescriptorIndexingProperties;

  auto operator<=>(const PhysicalDeviceDescriptorIndexingProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxUpdateAfterBindDescriptorsInAllPools = {};
  VkBool32 shaderUniformBufferArrayNonUniformIndexingNative = {};
  VkBool32 shaderSampledImageArrayNonUniformIndexingNative = {};
  VkBool32 shaderStorageBufferArrayNonUniformIndexingNative = {};
  VkBool32 shaderStorageImageArrayNonUniformIndexingNative = {};
  VkBool32 shaderInputAttachmentArrayNonUniformIndexingNative = {};
  VkBool32 robustBufferAccessUpdateAfterBind = {};
  VkBool32 quadDivergentImplicitLod = {};
  uint32_t maxPerStageDescriptorUpdateAfterBindSamplers = {};
  uint32_t maxPerStageDescriptorUpdateAfterBindUniformBuffers = {};
  uint32_t maxPerStageDescriptorUpdateAfterBindStorageBuffers = {};
  uint32_t maxPerStageDescriptorUpdateAfterBindSampledImages = {};
  uint32_t maxPerStageDescriptorUpdateAfterBindStorageImages = {};
  uint32_t maxPerStageDescriptorUpdateAfterBindInputAttachments = {};
  uint32_t maxPerStageUpdateAfterBindResources = {};
  uint32_t maxDescriptorSetUpdateAfterBindSamplers = {};
  uint32_t maxDescriptorSetUpdateAfterBindUniformBuffers = {};
  uint32_t maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = {};
  uint32_t maxDescriptorSetUpdateAfterBindStorageBuffers = {};
  uint32_t maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = {};
  uint32_t maxDescriptorSetUpdateAfterBindSampledImages = {};
  uint32_t maxDescriptorSetUpdateAfterBindStorageImages = {};
  uint32_t maxDescriptorSetUpdateAfterBindInputAttachments = {};
};

struct DescriptorSetLayoutBindingFlagsCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO;

  using NativeType = VkDescriptorSetLayoutBindingFlagsCreateInfo;

  auto operator<=>(const DescriptorSetLayoutBindingFlagsCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t bindingCount = {};
  DescriptorBindingMask *pBindingFlags = {};
};

struct DescriptorSetVariableDescriptorCountAllocateInfo {
  static constexpr StructureType structure_type = StructureType::E_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO;

  using NativeType = VkDescriptorSetVariableDescriptorCountAllocateInfo;

  auto operator<=>(const DescriptorSetVariableDescriptorCountAllocateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t descriptorSetCount = {};
  uint32_t *pDescriptorCounts = {};
};

struct DescriptorSetVariableDescriptorCountLayoutSupport {
  static constexpr StructureType structure_type = StructureType::E_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT;

  using NativeType = VkDescriptorSetVariableDescriptorCountLayoutSupport;

  auto operator<=>(const DescriptorSetVariableDescriptorCountLayoutSupport &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxVariableDescriptorCount = {};
};

struct AttachmentDescription2 {
  static constexpr StructureType structure_type = StructureType::E_ATTACHMENT_DESCRIPTION_2;

  using NativeType = VkAttachmentDescription2;

  auto operator<=>(const AttachmentDescription2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  AttachmentDescriptionMask flags = {};
  Format format = {};
  SampleCountMaskBits samples = {};
  AttachmentLoadOp loadOp = {};
  AttachmentStoreOp storeOp = {};
  AttachmentLoadOp stencilLoadOp = {};
  AttachmentStoreOp stencilStoreOp = {};
  ImageLayout initialLayout = {};
  ImageLayout finalLayout = {};
};

struct AttachmentReference2 {
  static constexpr StructureType structure_type = StructureType::E_ATTACHMENT_REFERENCE_2;

  using NativeType = VkAttachmentReference2;

  auto operator<=>(const AttachmentReference2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t attachment = {};
  ImageLayout layout = {};
  ImageAspectMask aspectMask = {};
};

struct SubpassDescription2 {
  static constexpr StructureType structure_type = StructureType::E_SUBPASS_DESCRIPTION_2;

  using NativeType = VkSubpassDescription2;

  auto operator<=>(const SubpassDescription2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  SubpassDescriptionMask flags = {};
  PipelineBindPoint pipelineBindPoint = {};
  uint32_t viewMask = {};
  uint32_t inputAttachmentCount = {};
  AttachmentReference2 *pInputAttachments = {};
  uint32_t colorAttachmentCount = {};
  AttachmentReference2 *pColorAttachments = {};
  AttachmentReference2 *pResolveAttachments = {};
  AttachmentReference2 *pDepthStencilAttachment = {};
  uint32_t preserveAttachmentCount = {};
  uint32_t *pPreserveAttachments = {};
};

struct SubpassDependency2 {
  static constexpr StructureType structure_type = StructureType::E_SUBPASS_DEPENDENCY_2;

  using NativeType = VkSubpassDependency2;

  auto operator<=>(const SubpassDependency2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t srcSubpass = {};
  uint32_t dstSubpass = {};
  PipelineStageMask srcStageMask = {};
  PipelineStageMask dstStageMask = {};
  AccessMask srcAccessMask = {};
  AccessMask dstAccessMask = {};
  DependencyMask dependencyFlags = {};
  int32_t viewOffset = {};
};

struct RenderPassCreateInfo2 {
  static constexpr StructureType structure_type = StructureType::E_RENDER_PASS_CREATE_INFO_2;

  using NativeType = VkRenderPassCreateInfo2;

  auto operator<=>(const RenderPassCreateInfo2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  RenderPassCreateMask flags = {};
  uint32_t attachmentCount = {};
  AttachmentDescription2 *pAttachments = {};
  uint32_t subpassCount = {};
  SubpassDescription2 *pSubpasses = {};
  uint32_t dependencyCount = {};
  SubpassDependency2 *pDependencies = {};
  uint32_t correlatedViewMaskCount = {};
  uint32_t *pCorrelatedViewMasks = {};
};

struct SubpassBeginInfo {
  static constexpr StructureType structure_type = StructureType::E_SUBPASS_BEGIN_INFO;

  using NativeType = VkSubpassBeginInfo;

  auto operator<=>(const SubpassBeginInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  SubpassContents contents = {};
};

struct SubpassEndInfo {
  static constexpr StructureType structure_type = StructureType::E_SUBPASS_END_INFO;

  using NativeType = VkSubpassEndInfo;

  auto operator<=>(const SubpassEndInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
};

struct PhysicalDeviceTimelineSemaphoreFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES;

  using NativeType = VkPhysicalDeviceTimelineSemaphoreFeatures;

  auto operator<=>(const PhysicalDeviceTimelineSemaphoreFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 timelineSemaphore = {};
};

struct PhysicalDeviceTimelineSemaphoreProperties {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES;

  using NativeType = VkPhysicalDeviceTimelineSemaphoreProperties;

  auto operator<=>(const PhysicalDeviceTimelineSemaphoreProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint64_t maxTimelineSemaphoreValueDifference = {};
};

struct SemaphoreTypeCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_SEMAPHORE_TYPE_CREATE_INFO;

  using NativeType = VkSemaphoreTypeCreateInfo;

  auto operator<=>(const SemaphoreTypeCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  SemaphoreType semaphoreType = {};
  uint64_t initialValue = {};
};

struct TimelineSemaphoreSubmitInfo {
  static constexpr StructureType structure_type = StructureType::E_TIMELINE_SEMAPHORE_SUBMIT_INFO;

  using NativeType = VkTimelineSemaphoreSubmitInfo;

  auto operator<=>(const TimelineSemaphoreSubmitInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t waitSemaphoreValueCount = {};
  uint64_t *pWaitSemaphoreValues = {};
  uint32_t signalSemaphoreValueCount = {};
  uint64_t *pSignalSemaphoreValues = {};
};

struct SemaphoreWaitInfo {
  static constexpr StructureType structure_type = StructureType::E_SEMAPHORE_WAIT_INFO;

  using NativeType = VkSemaphoreWaitInfo;

  auto operator<=>(const SemaphoreWaitInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  SemaphoreWaitMask flags = {};
  uint32_t semaphoreCount = {};
  VkSemaphore *pSemaphores = {};
  uint64_t *pValues = {};
};

struct SemaphoreSignalInfo {
  static constexpr StructureType structure_type = StructureType::E_SEMAPHORE_SIGNAL_INFO;

  using NativeType = VkSemaphoreSignalInfo;

  auto operator<=>(const SemaphoreSignalInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkSemaphore semaphore = {};
  uint64_t value = {};
};

struct VertexInputBindingDivisorDescriptionKHR {

  using NativeType = VkVertexInputBindingDivisorDescriptionKHR;

  auto operator<=>(const VertexInputBindingDivisorDescriptionKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t binding = {};
  uint32_t divisor = {};
};

struct PipelineVertexInputDivisorStateCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_KHR;

  using NativeType = VkPipelineVertexInputDivisorStateCreateInfoKHR;

  auto operator<=>(const PipelineVertexInputDivisorStateCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t vertexBindingDivisorCount = {};
  VertexInputBindingDivisorDescriptionKHR *pVertexBindingDivisors = {};
};

struct PhysicalDeviceVertexAttributeDivisorPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT;

  auto operator<=>(const PhysicalDeviceVertexAttributeDivisorPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxVertexAttribDivisor = {};
};

struct PhysicalDeviceVertexAttributeDivisorPropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_KHR;

  using NativeType = VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR;

  auto operator<=>(const PhysicalDeviceVertexAttributeDivisorPropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxVertexAttribDivisor = {};
  VkBool32 supportsNonZeroFirstInstance = {};
};

struct PhysicalDevicePCIBusInfoPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT;

  using NativeType = VkPhysicalDevicePCIBusInfoPropertiesEXT;

  auto operator<=>(const PhysicalDevicePCIBusInfoPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t pciDomain = {};
  uint32_t pciBus = {};
  uint32_t pciDevice = {};
  uint32_t pciFunction = {};
};

struct CommandBufferInheritanceConditionalRenderingInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT;

  using NativeType = VkCommandBufferInheritanceConditionalRenderingInfoEXT;

  auto operator<=>(const CommandBufferInheritanceConditionalRenderingInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 conditionalRenderingEnable = {};
};

struct PhysicalDevice8BitStorageFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES;

  using NativeType = VkPhysicalDevice8BitStorageFeatures;

  auto operator<=>(const PhysicalDevice8BitStorageFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 storageBuffer8BitAccess = {};
  VkBool32 uniformAndStorageBuffer8BitAccess = {};
  VkBool32 storagePushConstant8 = {};
};

struct PhysicalDeviceConditionalRenderingFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceConditionalRenderingFeaturesEXT;

  auto operator<=>(const PhysicalDeviceConditionalRenderingFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 conditionalRendering = {};
  VkBool32 inheritedConditionalRendering = {};
};

struct PhysicalDeviceVulkanMemoryModelFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES;

  using NativeType = VkPhysicalDeviceVulkanMemoryModelFeatures;

  auto operator<=>(const PhysicalDeviceVulkanMemoryModelFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 vulkanMemoryModel = {};
  VkBool32 vulkanMemoryModelDeviceScope = {};
  VkBool32 vulkanMemoryModelAvailabilityVisibilityChains = {};
};

struct PhysicalDeviceShaderAtomicInt64Features {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES;

  using NativeType = VkPhysicalDeviceShaderAtomicInt64Features;

  auto operator<=>(const PhysicalDeviceShaderAtomicInt64Features &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderBufferInt64Atomics = {};
  VkBool32 shaderSharedInt64Atomics = {};
};

struct PhysicalDeviceShaderAtomicFloatFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceShaderAtomicFloatFeaturesEXT;

  auto operator<=>(const PhysicalDeviceShaderAtomicFloatFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderBufferFloat32Atomics = {};
  VkBool32 shaderBufferFloat32AtomicAdd = {};
  VkBool32 shaderBufferFloat64Atomics = {};
  VkBool32 shaderBufferFloat64AtomicAdd = {};
  VkBool32 shaderSharedFloat32Atomics = {};
  VkBool32 shaderSharedFloat32AtomicAdd = {};
  VkBool32 shaderSharedFloat64Atomics = {};
  VkBool32 shaderSharedFloat64AtomicAdd = {};
  VkBool32 shaderImageFloat32Atomics = {};
  VkBool32 shaderImageFloat32AtomicAdd = {};
  VkBool32 sparseImageFloat32Atomics = {};
  VkBool32 sparseImageFloat32AtomicAdd = {};
};

struct PhysicalDeviceShaderAtomicFloat2FeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT;

  auto operator<=>(const PhysicalDeviceShaderAtomicFloat2FeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderBufferFloat16Atomics = {};
  VkBool32 shaderBufferFloat16AtomicAdd = {};
  VkBool32 shaderBufferFloat16AtomicMinMax = {};
  VkBool32 shaderBufferFloat32AtomicMinMax = {};
  VkBool32 shaderBufferFloat64AtomicMinMax = {};
  VkBool32 shaderSharedFloat16Atomics = {};
  VkBool32 shaderSharedFloat16AtomicAdd = {};
  VkBool32 shaderSharedFloat16AtomicMinMax = {};
  VkBool32 shaderSharedFloat32AtomicMinMax = {};
  VkBool32 shaderSharedFloat64AtomicMinMax = {};
  VkBool32 shaderImageFloat32AtomicMinMax = {};
  VkBool32 sparseImageFloat32AtomicMinMax = {};
};

struct PhysicalDeviceVertexAttributeDivisorFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR;

  auto operator<=>(const PhysicalDeviceVertexAttributeDivisorFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 vertexAttributeInstanceRateDivisor = {};
  VkBool32 vertexAttributeInstanceRateZeroDivisor = {};
};

struct QueueFamilyCheckpointPropertiesNV {
  static constexpr StructureType structure_type = StructureType::E_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV;

  using NativeType = VkQueueFamilyCheckpointPropertiesNV;

  auto operator<=>(const QueueFamilyCheckpointPropertiesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineStageMask checkpointExecutionStageMask = {};
};

struct CheckpointDataNV {
  static constexpr StructureType structure_type = StructureType::E_CHECKPOINT_DATA_NV;

  using NativeType = VkCheckpointDataNV;

  auto operator<=>(const CheckpointDataNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineStageMaskBits stage = {};
  void *pCheckpointMarker = {};
};

struct PhysicalDeviceDepthStencilResolveProperties {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES;

  using NativeType = VkPhysicalDeviceDepthStencilResolveProperties;

  auto operator<=>(const PhysicalDeviceDepthStencilResolveProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ResolveModeMask supportedDepthResolveModes = {};
  ResolveModeMask supportedStencilResolveModes = {};
  VkBool32 independentResolveNone = {};
  VkBool32 independentResolve = {};
};

struct SubpassDescriptionDepthStencilResolve {
  static constexpr StructureType structure_type = StructureType::E_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE;

  using NativeType = VkSubpassDescriptionDepthStencilResolve;

  auto operator<=>(const SubpassDescriptionDepthStencilResolve &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ResolveModeMaskBits depthResolveMode = {};
  ResolveModeMaskBits stencilResolveMode = {};
  AttachmentReference2 *pDepthStencilResolveAttachment = {};
};

struct ImageViewASTCDecodeModeEXT {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_VIEW_ASTC_DECODE_MODE_EXT;

  using NativeType = VkImageViewASTCDecodeModeEXT;

  auto operator<=>(const ImageViewASTCDecodeModeEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  Format decodeMode = {};
};

struct PhysicalDeviceASTCDecodeFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceASTCDecodeFeaturesEXT;

  auto operator<=>(const PhysicalDeviceASTCDecodeFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 decodeModeSharedExponent = {};
};

struct PhysicalDeviceTransformFeedbackFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceTransformFeedbackFeaturesEXT;

  auto operator<=>(const PhysicalDeviceTransformFeedbackFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 transformFeedback = {};
  VkBool32 geometryStreams = {};
};

struct PhysicalDeviceTransformFeedbackPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceTransformFeedbackPropertiesEXT;

  auto operator<=>(const PhysicalDeviceTransformFeedbackPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxTransformFeedbackStreams = {};
  uint32_t maxTransformFeedbackBuffers = {};
  VkDeviceSize maxTransformFeedbackBufferSize = {};
  uint32_t maxTransformFeedbackStreamDataSize = {};
  uint32_t maxTransformFeedbackBufferDataSize = {};
  uint32_t maxTransformFeedbackBufferDataStride = {};
  VkBool32 transformFeedbackQueries = {};
  VkBool32 transformFeedbackStreamsLinesTriangles = {};
  VkBool32 transformFeedbackRasterizationStreamSelect = {};
  VkBool32 transformFeedbackDraw = {};
};

struct PipelineRasterizationStateStreamCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT;

  using NativeType = VkPipelineRasterizationStateStreamCreateInfoEXT;

  auto operator<=>(const PipelineRasterizationStateStreamCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineRasterizationStateStreamCreateMask flags = {};
  uint32_t rasterizationStream = {};
};

struct PhysicalDeviceRepresentativeFragmentTestFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV;

  using NativeType = VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV;

  auto operator<=>(const PhysicalDeviceRepresentativeFragmentTestFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 representativeFragmentTest = {};
};

struct PipelineRepresentativeFragmentTestStateCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV;

  using NativeType = VkPipelineRepresentativeFragmentTestStateCreateInfoNV;

  auto operator<=>(const PipelineRepresentativeFragmentTestStateCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 representativeFragmentTestEnable = {};
};

struct PhysicalDeviceExclusiveScissorFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV;

  using NativeType = VkPhysicalDeviceExclusiveScissorFeaturesNV;

  auto operator<=>(const PhysicalDeviceExclusiveScissorFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 exclusiveScissor = {};
};

struct PipelineViewportExclusiveScissorStateCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV;

  using NativeType = VkPipelineViewportExclusiveScissorStateCreateInfoNV;

  auto operator<=>(const PipelineViewportExclusiveScissorStateCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t exclusiveScissorCount = {};
  Rect2D *pExclusiveScissors = {};
};

struct PhysicalDeviceCornerSampledImageFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV;

  using NativeType = VkPhysicalDeviceCornerSampledImageFeaturesNV;

  auto operator<=>(const PhysicalDeviceCornerSampledImageFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 cornerSampledImage = {};
};

struct PhysicalDeviceComputeShaderDerivativesFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV;

  using NativeType = VkPhysicalDeviceComputeShaderDerivativesFeaturesNV;

  auto operator<=>(const PhysicalDeviceComputeShaderDerivativesFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 computeDerivativeGroupQuads = {};
  VkBool32 computeDerivativeGroupLinear = {};
};

struct PhysicalDeviceShaderImageFootprintFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV;

  using NativeType = VkPhysicalDeviceShaderImageFootprintFeaturesNV;

  auto operator<=>(const PhysicalDeviceShaderImageFootprintFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 imageFootprint = {};
};

struct PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV;

  using NativeType = VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV;

  auto operator<=>(const PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 dedicatedAllocationImageAliasing = {};
};

struct PhysicalDeviceCopyMemoryIndirectFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV;

  using NativeType = VkPhysicalDeviceCopyMemoryIndirectFeaturesNV;

  auto operator<=>(const PhysicalDeviceCopyMemoryIndirectFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 indirectCopy = {};
};

struct PhysicalDeviceCopyMemoryIndirectPropertiesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_NV;

  using NativeType = VkPhysicalDeviceCopyMemoryIndirectPropertiesNV;

  auto operator<=>(const PhysicalDeviceCopyMemoryIndirectPropertiesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  QueueMask supportedQueues = {};
};

struct PhysicalDeviceMemoryDecompressionFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV;

  using NativeType = VkPhysicalDeviceMemoryDecompressionFeaturesNV;

  auto operator<=>(const PhysicalDeviceMemoryDecompressionFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 memoryDecompression = {};
};

struct PhysicalDeviceMemoryDecompressionPropertiesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_NV;

  using NativeType = VkPhysicalDeviceMemoryDecompressionPropertiesNV;

  auto operator<=>(const PhysicalDeviceMemoryDecompressionPropertiesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  MemoryDecompressionMethodMask decompressionMethods = {};
  uint64_t maxDecompressionIndirectCount = {};
};

struct ShadingRatePaletteNV {

  using NativeType = VkShadingRatePaletteNV;

  auto operator<=>(const ShadingRatePaletteNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t shadingRatePaletteEntryCount = {};
  ShadingRatePaletteEntry *pShadingRatePaletteEntries = {};
};

struct PipelineViewportShadingRateImageStateCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV;

  using NativeType = VkPipelineViewportShadingRateImageStateCreateInfoNV;

  auto operator<=>(const PipelineViewportShadingRateImageStateCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shadingRateImageEnable = {};
  uint32_t viewportCount = {};
  ShadingRatePaletteNV *pShadingRatePalettes = {};
};

struct PhysicalDeviceShadingRateImageFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV;

  using NativeType = VkPhysicalDeviceShadingRateImageFeaturesNV;

  auto operator<=>(const PhysicalDeviceShadingRateImageFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shadingRateImage = {};
  VkBool32 shadingRateCoarseSampleOrder = {};
};

struct PhysicalDeviceShadingRateImagePropertiesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV;

  using NativeType = VkPhysicalDeviceShadingRateImagePropertiesNV;

  auto operator<=>(const PhysicalDeviceShadingRateImagePropertiesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  Extent2D shadingRateTexelSize = {};
  uint32_t shadingRatePaletteSize = {};
  uint32_t shadingRateMaxCoarseSamples = {};
};

struct PhysicalDeviceInvocationMaskFeaturesHUAWEI {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI;

  using NativeType = VkPhysicalDeviceInvocationMaskFeaturesHUAWEI;

  auto operator<=>(const PhysicalDeviceInvocationMaskFeaturesHUAWEI &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 invocationMask = {};
};

struct CoarseSampleLocationNV {

  using NativeType = VkCoarseSampleLocationNV;

  auto operator<=>(const CoarseSampleLocationNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t pixelX = {};
  uint32_t pixelY = {};
  uint32_t sample = {};
};

struct CoarseSampleOrderCustomNV {

  using NativeType = VkCoarseSampleOrderCustomNV;

  auto operator<=>(const CoarseSampleOrderCustomNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  ShadingRatePaletteEntry shadingRate = {};
  uint32_t sampleCount = {};
  uint32_t sampleLocationCount = {};
  CoarseSampleLocationNV *pSampleLocations = {};
};

struct PipelineViewportCoarseSampleOrderStateCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV;

  using NativeType = VkPipelineViewportCoarseSampleOrderStateCreateInfoNV;

  auto operator<=>(const PipelineViewportCoarseSampleOrderStateCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  CoarseSampleOrderType sampleOrderType = {};
  uint32_t customSampleOrderCount = {};
  CoarseSampleOrderCustomNV *pCustomSampleOrders = {};
};

struct PhysicalDeviceMeshShaderFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV;

  using NativeType = VkPhysicalDeviceMeshShaderFeaturesNV;

  auto operator<=>(const PhysicalDeviceMeshShaderFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 taskShader = {};
  VkBool32 meshShader = {};
};

struct PhysicalDeviceMeshShaderPropertiesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV;

  using NativeType = VkPhysicalDeviceMeshShaderPropertiesNV;

  auto operator<=>(const PhysicalDeviceMeshShaderPropertiesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxDrawMeshTasksCount = {};
  uint32_t maxTaskWorkGroupInvocations = {};
  uint32_t maxTaskWorkGroupSize[3] = {};
  uint32_t maxTaskTotalMemorySize = {};
  uint32_t maxTaskOutputCount = {};
  uint32_t maxMeshWorkGroupInvocations = {};
  uint32_t maxMeshWorkGroupSize[3] = {};
  uint32_t maxMeshTotalMemorySize = {};
  uint32_t maxMeshOutputVertices = {};
  uint32_t maxMeshOutputPrimitives = {};
  uint32_t maxMeshMultiviewViewCount = {};
  uint32_t meshOutputPerVertexGranularity = {};
  uint32_t meshOutputPerPrimitiveGranularity = {};
};

struct DrawMeshTasksIndirectCommandNV {

  using NativeType = VkDrawMeshTasksIndirectCommandNV;

  auto operator<=>(const DrawMeshTasksIndirectCommandNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t taskCount = {};
  uint32_t firstTask = {};
};

struct PhysicalDeviceMeshShaderFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceMeshShaderFeaturesEXT;

  auto operator<=>(const PhysicalDeviceMeshShaderFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 taskShader = {};
  VkBool32 meshShader = {};
  VkBool32 multiviewMeshShader = {};
  VkBool32 primitiveFragmentShadingRateMeshShader = {};
  VkBool32 meshShaderQueries = {};
};

struct PhysicalDeviceMeshShaderPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceMeshShaderPropertiesEXT;

  auto operator<=>(const PhysicalDeviceMeshShaderPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxTaskWorkGroupTotalCount = {};
  uint32_t maxTaskWorkGroupCount[3] = {};
  uint32_t maxTaskWorkGroupInvocations = {};
  uint32_t maxTaskWorkGroupSize[3] = {};
  uint32_t maxTaskPayloadSize = {};
  uint32_t maxTaskSharedMemorySize = {};
  uint32_t maxTaskPayloadAndSharedMemorySize = {};
  uint32_t maxMeshWorkGroupTotalCount = {};
  uint32_t maxMeshWorkGroupCount[3] = {};
  uint32_t maxMeshWorkGroupInvocations = {};
  uint32_t maxMeshWorkGroupSize[3] = {};
  uint32_t maxMeshSharedMemorySize = {};
  uint32_t maxMeshPayloadAndSharedMemorySize = {};
  uint32_t maxMeshOutputMemorySize = {};
  uint32_t maxMeshPayloadAndOutputMemorySize = {};
  uint32_t maxMeshOutputComponents = {};
  uint32_t maxMeshOutputVertices = {};
  uint32_t maxMeshOutputPrimitives = {};
  uint32_t maxMeshOutputLayers = {};
  uint32_t maxMeshMultiviewViewCount = {};
  uint32_t meshOutputPerVertexGranularity = {};
  uint32_t meshOutputPerPrimitiveGranularity = {};
  uint32_t maxPreferredTaskWorkGroupInvocations = {};
  uint32_t maxPreferredMeshWorkGroupInvocations = {};
  VkBool32 prefersLocalInvocationVertexOutput = {};
  VkBool32 prefersLocalInvocationPrimitiveOutput = {};
  VkBool32 prefersCompactVertexOutput = {};
  VkBool32 prefersCompactPrimitiveOutput = {};
};

struct DrawMeshTasksIndirectCommandEXT {

  using NativeType = VkDrawMeshTasksIndirectCommandEXT;

  auto operator<=>(const DrawMeshTasksIndirectCommandEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t groupCountX = {};
  uint32_t groupCountY = {};
  uint32_t groupCountZ = {};
};

struct RayTracingShaderGroupCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV;

  using NativeType = VkRayTracingShaderGroupCreateInfoNV;

  auto operator<=>(const RayTracingShaderGroupCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  RayTracingShaderGroupType type = {};
  uint32_t generalShader = {};
  uint32_t closestHitShader = {};
  uint32_t anyHitShader = {};
  uint32_t intersectionShader = {};
};

struct RayTracingShaderGroupCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR;

  using NativeType = VkRayTracingShaderGroupCreateInfoKHR;

  auto operator<=>(const RayTracingShaderGroupCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  RayTracingShaderGroupType type = {};
  uint32_t generalShader = {};
  uint32_t closestHitShader = {};
  uint32_t anyHitShader = {};
  uint32_t intersectionShader = {};
  void *pShaderGroupCaptureReplayHandle = {};
};

struct RayTracingPipelineCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_RAY_TRACING_PIPELINE_CREATE_INFO_NV;

  using NativeType = VkRayTracingPipelineCreateInfoNV;

  auto operator<=>(const RayTracingPipelineCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineCreateMask flags = {};
  uint32_t stageCount = {};
  PipelineShaderStageCreateInfo *pStages = {};
  uint32_t groupCount = {};
  RayTracingShaderGroupCreateInfoNV *pGroups = {};
  uint32_t maxRecursionDepth = {};
  VkPipelineLayout layout = {};
  VkPipeline basePipelineHandle = {};
  int32_t basePipelineIndex = {};
};

struct PipelineLibraryCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_LIBRARY_CREATE_INFO_KHR;

  using NativeType = VkPipelineLibraryCreateInfoKHR;

  auto operator<=>(const PipelineLibraryCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t libraryCount = {};
  VkPipeline *pLibraries = {};
};

struct RayTracingPipelineInterfaceCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR;

  using NativeType = VkRayTracingPipelineInterfaceCreateInfoKHR;

  auto operator<=>(const RayTracingPipelineInterfaceCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxPipelineRayPayloadSize = {};
  uint32_t maxPipelineRayHitAttributeSize = {};
};

struct RayTracingPipelineCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_RAY_TRACING_PIPELINE_CREATE_INFO_KHR;

  using NativeType = VkRayTracingPipelineCreateInfoKHR;

  auto operator<=>(const RayTracingPipelineCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineCreateMask flags = {};
  uint32_t stageCount = {};
  PipelineShaderStageCreateInfo *pStages = {};
  uint32_t groupCount = {};
  RayTracingShaderGroupCreateInfoKHR *pGroups = {};
  uint32_t maxPipelineRayRecursionDepth = {};
  PipelineLibraryCreateInfoKHR *pLibraryInfo = {};
  RayTracingPipelineInterfaceCreateInfoKHR *pLibraryInterface = {};
  PipelineDynamicStateCreateInfo *pDynamicState = {};
  VkPipelineLayout layout = {};
  VkPipeline basePipelineHandle = {};
  int32_t basePipelineIndex = {};
};

struct GeometryTrianglesNV {
  static constexpr StructureType structure_type = StructureType::E_GEOMETRY_TRIANGLES_NV;

  using NativeType = VkGeometryTrianglesNV;

  auto operator<=>(const GeometryTrianglesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBuffer vertexData = {};
  VkDeviceSize vertexOffset = {};
  uint32_t vertexCount = {};
  VkDeviceSize vertexStride = {};
  Format vertexFormat = {};
  VkBuffer indexData = {};
  VkDeviceSize indexOffset = {};
  uint32_t indexCount = {};
  IndexType indexType = {};
  VkBuffer transformData = {};
  VkDeviceSize transformOffset = {};
};

struct GeometryAABBNV {
  static constexpr StructureType structure_type = StructureType::E_GEOMETRY_AABB_NV;

  using NativeType = VkGeometryAABBNV;

  auto operator<=>(const GeometryAABBNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBuffer aabbData = {};
  uint32_t numAABBs = {};
  uint32_t stride = {};
  VkDeviceSize offset = {};
};

struct GeometryDataNV {

  using NativeType = VkGeometryDataNV;

  auto operator<=>(const GeometryDataNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  GeometryTrianglesNV triangles = {};
  GeometryAABBNV aabbs = {};
};

struct GeometryNV {
  static constexpr StructureType structure_type = StructureType::E_GEOMETRY_NV;

  using NativeType = VkGeometryNV;

  auto operator<=>(const GeometryNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  GeometryType geometryType = {};
  GeometryDataNV geometry = {};
  GeometryMask flags = {};
};

struct AccelerationStructureInfoNV {
  static constexpr StructureType structure_type = StructureType::E_ACCELERATION_STRUCTURE_INFO_NV;

  using NativeType = VkAccelerationStructureInfoNV;

  auto operator<=>(const AccelerationStructureInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkAccelerationStructureTypeNV type = {};
  VkBuildAccelerationStructureFlagsNV flags = {};
  uint32_t instanceCount = {};
  uint32_t geometryCount = {};
  GeometryNV *pGeometries = {};
};

struct AccelerationStructureCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_ACCELERATION_STRUCTURE_CREATE_INFO_NV;

  using NativeType = VkAccelerationStructureCreateInfoNV;

  auto operator<=>(const AccelerationStructureCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceSize compactedSize = {};
  AccelerationStructureInfoNV info = {};
};

struct BindAccelerationStructureMemoryInfoNV {
  static constexpr StructureType structure_type = StructureType::E_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV;

  using NativeType = VkBindAccelerationStructureMemoryInfoNV;

  auto operator<=>(const BindAccelerationStructureMemoryInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkAccelerationStructureNV accelerationStructure = {};
  VkDeviceMemory memory = {};
  VkDeviceSize memoryOffset = {};
  uint32_t deviceIndexCount = {};
  uint32_t *pDeviceIndices = {};
};

struct WriteDescriptorSetAccelerationStructureKHR {
  static constexpr StructureType structure_type = StructureType::E_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR;

  using NativeType = VkWriteDescriptorSetAccelerationStructureKHR;

  auto operator<=>(const WriteDescriptorSetAccelerationStructureKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t accelerationStructureCount = {};
  VkAccelerationStructureKHR *pAccelerationStructures = {};
};

struct WriteDescriptorSetAccelerationStructureNV {
  static constexpr StructureType structure_type = StructureType::E_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV;

  using NativeType = VkWriteDescriptorSetAccelerationStructureNV;

  auto operator<=>(const WriteDescriptorSetAccelerationStructureNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t accelerationStructureCount = {};
  VkAccelerationStructureNV *pAccelerationStructures = {};
};

struct AccelerationStructureMemoryRequirementsInfoNV {
  static constexpr StructureType structure_type = StructureType::E_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV;

  using NativeType = VkAccelerationStructureMemoryRequirementsInfoNV;

  auto operator<=>(const AccelerationStructureMemoryRequirementsInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  AccelerationStructureMemoryRequirementsType type = {};
  VkAccelerationStructureNV accelerationStructure = {};
};

struct PhysicalDeviceAccelerationStructureFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceAccelerationStructureFeaturesKHR;

  auto operator<=>(const PhysicalDeviceAccelerationStructureFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 accelerationStructure = {};
  VkBool32 accelerationStructureCaptureReplay = {};
  VkBool32 accelerationStructureIndirectBuild = {};
  VkBool32 accelerationStructureHostCommands = {};
  VkBool32 descriptorBindingAccelerationStructureUpdateAfterBind = {};
};

struct PhysicalDeviceRayTracingPipelineFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceRayTracingPipelineFeaturesKHR;

  auto operator<=>(const PhysicalDeviceRayTracingPipelineFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 rayTracingPipeline = {};
  VkBool32 rayTracingPipelineShaderGroupHandleCaptureReplay = {};
  VkBool32 rayTracingPipelineShaderGroupHandleCaptureReplayMixed = {};
  VkBool32 rayTracingPipelineTraceRaysIndirect = {};
  VkBool32 rayTraversalPrimitiveCulling = {};
};

struct PhysicalDeviceRayQueryFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceRayQueryFeaturesKHR;

  auto operator<=>(const PhysicalDeviceRayQueryFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 rayQuery = {};
};

struct PhysicalDeviceAccelerationStructurePropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR;

  using NativeType = VkPhysicalDeviceAccelerationStructurePropertiesKHR;

  auto operator<=>(const PhysicalDeviceAccelerationStructurePropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint64_t maxGeometryCount = {};
  uint64_t maxInstanceCount = {};
  uint64_t maxPrimitiveCount = {};
  uint32_t maxPerStageDescriptorAccelerationStructures = {};
  uint32_t maxPerStageDescriptorUpdateAfterBindAccelerationStructures = {};
  uint32_t maxDescriptorSetAccelerationStructures = {};
  uint32_t maxDescriptorSetUpdateAfterBindAccelerationStructures = {};
  uint32_t minAccelerationStructureScratchOffsetAlignment = {};
};

struct PhysicalDeviceRayTracingPipelinePropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR;

  using NativeType = VkPhysicalDeviceRayTracingPipelinePropertiesKHR;

  auto operator<=>(const PhysicalDeviceRayTracingPipelinePropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t shaderGroupHandleSize = {};
  uint32_t maxRayRecursionDepth = {};
  uint32_t maxShaderGroupStride = {};
  uint32_t shaderGroupBaseAlignment = {};
  uint32_t shaderGroupHandleCaptureReplaySize = {};
  uint32_t maxRayDispatchInvocationCount = {};
  uint32_t shaderGroupHandleAlignment = {};
  uint32_t maxRayHitAttributeSize = {};
};

struct PhysicalDeviceRayTracingPropertiesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV;

  using NativeType = VkPhysicalDeviceRayTracingPropertiesNV;

  auto operator<=>(const PhysicalDeviceRayTracingPropertiesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t shaderGroupHandleSize = {};
  uint32_t maxRecursionDepth = {};
  uint32_t maxShaderGroupStride = {};
  uint32_t shaderGroupBaseAlignment = {};
  uint64_t maxGeometryCount = {};
  uint64_t maxInstanceCount = {};
  uint64_t maxTriangleCount = {};
  uint32_t maxDescriptorSetAccelerationStructures = {};
};

struct StridedDeviceAddressRegionKHR {

  using NativeType = VkStridedDeviceAddressRegionKHR;

  auto operator<=>(const StridedDeviceAddressRegionKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkDeviceAddress deviceAddress = {};
  VkDeviceSize stride = {};
  VkDeviceSize size = {};
};

struct TraceRaysIndirectCommandKHR {

  using NativeType = VkTraceRaysIndirectCommandKHR;

  auto operator<=>(const TraceRaysIndirectCommandKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t width = {};
  uint32_t height = {};
  uint32_t depth = {};
};

struct TraceRaysIndirectCommand2KHR {

  using NativeType = VkTraceRaysIndirectCommand2KHR;

  auto operator<=>(const TraceRaysIndirectCommand2KHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkDeviceAddress raygenShaderRecordAddress = {};
  VkDeviceSize raygenShaderRecordSize = {};
  VkDeviceAddress missShaderBindingTableAddress = {};
  VkDeviceSize missShaderBindingTableSize = {};
  VkDeviceSize missShaderBindingTableStride = {};
  VkDeviceAddress hitShaderBindingTableAddress = {};
  VkDeviceSize hitShaderBindingTableSize = {};
  VkDeviceSize hitShaderBindingTableStride = {};
  VkDeviceAddress callableShaderBindingTableAddress = {};
  VkDeviceSize callableShaderBindingTableSize = {};
  VkDeviceSize callableShaderBindingTableStride = {};
  uint32_t width = {};
  uint32_t height = {};
  uint32_t depth = {};
};

struct PhysicalDeviceRayTracingMaintenance1FeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR;

  auto operator<=>(const PhysicalDeviceRayTracingMaintenance1FeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 rayTracingMaintenance1 = {};
  VkBool32 rayTracingPipelineTraceRaysIndirect2 = {};
};

struct DrmFormatModifierPropertiesEXT {

  using NativeType = VkDrmFormatModifierPropertiesEXT;

  auto operator<=>(const DrmFormatModifierPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint64_t drmFormatModifier = {};
  uint32_t drmFormatModifierPlaneCount = {};
  FormatFeatureMask drmFormatModifierTilingFeatures = {};
};

struct DrmFormatModifierPropertiesListEXT {
  static constexpr StructureType structure_type = StructureType::E_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT;

  using NativeType = VkDrmFormatModifierPropertiesListEXT;

  auto operator<=>(const DrmFormatModifierPropertiesListEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t drmFormatModifierCount = {};
  DrmFormatModifierPropertiesEXT *pDrmFormatModifierProperties = {};
};

struct PhysicalDeviceImageDrmFormatModifierInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT;

  using NativeType = VkPhysicalDeviceImageDrmFormatModifierInfoEXT;

  auto operator<=>(const PhysicalDeviceImageDrmFormatModifierInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint64_t drmFormatModifier = {};
  SharingMode sharingMode = {};
  uint32_t queueFamilyIndexCount = {};
  uint32_t *pQueueFamilyIndices = {};
};

struct ImageDrmFormatModifierListCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT;

  using NativeType = VkImageDrmFormatModifierListCreateInfoEXT;

  auto operator<=>(const ImageDrmFormatModifierListCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t drmFormatModifierCount = {};
  uint64_t *pDrmFormatModifiers = {};
};

struct ImageDrmFormatModifierExplicitCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT;

  using NativeType = VkImageDrmFormatModifierExplicitCreateInfoEXT;

  auto operator<=>(const ImageDrmFormatModifierExplicitCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint64_t drmFormatModifier = {};
  uint32_t drmFormatModifierPlaneCount = {};
  SubresourceLayout *pPlaneLayouts = {};
};

struct ImageDrmFormatModifierPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT;

  using NativeType = VkImageDrmFormatModifierPropertiesEXT;

  auto operator<=>(const ImageDrmFormatModifierPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint64_t drmFormatModifier = {};
};

struct ImageStencilUsageCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_STENCIL_USAGE_CREATE_INFO;

  using NativeType = VkImageStencilUsageCreateInfo;

  auto operator<=>(const ImageStencilUsageCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ImageUsageMask stencilUsage = {};
};

struct DeviceMemoryOverallocationCreateInfoAMD {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD;

  using NativeType = VkDeviceMemoryOverallocationCreateInfoAMD;

  auto operator<=>(const DeviceMemoryOverallocationCreateInfoAMD &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  MemoryOverallocationBehavior overallocationBehavior = {};
};

struct PhysicalDeviceFragmentDensityMapFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceFragmentDensityMapFeaturesEXT;

  auto operator<=>(const PhysicalDeviceFragmentDensityMapFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 fragmentDensityMap = {};
  VkBool32 fragmentDensityMapDynamic = {};
  VkBool32 fragmentDensityMapNonSubsampledImages = {};
};

struct PhysicalDeviceFragmentDensityMap2FeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceFragmentDensityMap2FeaturesEXT;

  auto operator<=>(const PhysicalDeviceFragmentDensityMap2FeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 fragmentDensityMapDeferred = {};
};

struct PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM;

  using NativeType = VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM;

  auto operator<=>(const PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 fragmentDensityMapOffset = {};
};

struct PhysicalDeviceFragmentDensityMapPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceFragmentDensityMapPropertiesEXT;

  auto operator<=>(const PhysicalDeviceFragmentDensityMapPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  Extent2D minFragmentDensityTexelSize = {};
  Extent2D maxFragmentDensityTexelSize = {};
  VkBool32 fragmentDensityInvocations = {};
};

struct PhysicalDeviceFragmentDensityMap2PropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceFragmentDensityMap2PropertiesEXT;

  auto operator<=>(const PhysicalDeviceFragmentDensityMap2PropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 subsampledLoads = {};
  VkBool32 subsampledCoarseReconstructionEarlyAccess = {};
  uint32_t maxSubsampledArrayLayers = {};
  uint32_t maxDescriptorSetSubsampledSamplers = {};
};

struct PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_QCOM;

  using NativeType = VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM;

  auto operator<=>(const PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  Extent2D fragmentDensityOffsetGranularity = {};
};

struct RenderPassFragmentDensityMapCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT;

  using NativeType = VkRenderPassFragmentDensityMapCreateInfoEXT;

  auto operator<=>(const RenderPassFragmentDensityMapCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  AttachmentReference fragmentDensityMapAttachment = {};
};

struct SubpassFragmentDensityMapOffsetEndInfoQCOM {
  static constexpr StructureType structure_type = StructureType::E_SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM;

  using NativeType = VkSubpassFragmentDensityMapOffsetEndInfoQCOM;

  auto operator<=>(const SubpassFragmentDensityMapOffsetEndInfoQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t fragmentDensityOffsetCount = {};
  Offset2D *pFragmentDensityOffsets = {};
};

struct PhysicalDeviceScalarBlockLayoutFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES;

  using NativeType = VkPhysicalDeviceScalarBlockLayoutFeatures;

  auto operator<=>(const PhysicalDeviceScalarBlockLayoutFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 scalarBlockLayout = {};
};

struct SurfaceProtectedCapabilitiesKHR {
  static constexpr StructureType structure_type = StructureType::E_SURFACE_PROTECTED_CAPABILITIES_KHR;

  using NativeType = VkSurfaceProtectedCapabilitiesKHR;

  auto operator<=>(const SurfaceProtectedCapabilitiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 supportsProtected = {};
};

struct PhysicalDeviceUniformBufferStandardLayoutFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES;

  using NativeType = VkPhysicalDeviceUniformBufferStandardLayoutFeatures;

  auto operator<=>(const PhysicalDeviceUniformBufferStandardLayoutFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 uniformBufferStandardLayout = {};
};

struct PhysicalDeviceDepthClipEnableFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceDepthClipEnableFeaturesEXT;

  auto operator<=>(const PhysicalDeviceDepthClipEnableFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 depthClipEnable = {};
};

struct PipelineRasterizationDepthClipStateCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT;

  using NativeType = VkPipelineRasterizationDepthClipStateCreateInfoEXT;

  auto operator<=>(const PipelineRasterizationDepthClipStateCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineRasterizationDepthClipStateCreateMask flags = {};
  VkBool32 depthClipEnable = {};
};

struct PhysicalDeviceMemoryBudgetPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceMemoryBudgetPropertiesEXT;

  auto operator<=>(const PhysicalDeviceMemoryBudgetPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceSize heapBudget[VK_MAX_MEMORY_HEAPS] = {};
  VkDeviceSize heapUsage[VK_MAX_MEMORY_HEAPS] = {};
};

struct PhysicalDeviceMemoryPriorityFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceMemoryPriorityFeaturesEXT;

  auto operator<=>(const PhysicalDeviceMemoryPriorityFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 memoryPriority = {};
};

struct MemoryPriorityAllocateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_MEMORY_PRIORITY_ALLOCATE_INFO_EXT;

  using NativeType = VkMemoryPriorityAllocateInfoEXT;

  auto operator<=>(const MemoryPriorityAllocateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  float priority = {};
};

struct PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT;

  using NativeType = VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT;

  auto operator<=>(const PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 pageableDeviceLocalMemory = {};
};

struct PhysicalDeviceBufferDeviceAddressFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES;

  using NativeType = VkPhysicalDeviceBufferDeviceAddressFeatures;

  auto operator<=>(const PhysicalDeviceBufferDeviceAddressFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 bufferDeviceAddress = {};
  VkBool32 bufferDeviceAddressCaptureReplay = {};
  VkBool32 bufferDeviceAddressMultiDevice = {};
};

struct PhysicalDeviceBufferDeviceAddressFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceBufferDeviceAddressFeaturesEXT;

  auto operator<=>(const PhysicalDeviceBufferDeviceAddressFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 bufferDeviceAddress = {};
  VkBool32 bufferDeviceAddressCaptureReplay = {};
  VkBool32 bufferDeviceAddressMultiDevice = {};
};

struct BufferDeviceAddressInfo {
  static constexpr StructureType structure_type = StructureType::E_BUFFER_DEVICE_ADDRESS_INFO;

  using NativeType = VkBufferDeviceAddressInfo;

  auto operator<=>(const BufferDeviceAddressInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBuffer buffer = {};
};

struct BufferOpaqueCaptureAddressCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO;

  using NativeType = VkBufferOpaqueCaptureAddressCreateInfo;

  auto operator<=>(const BufferOpaqueCaptureAddressCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint64_t opaqueCaptureAddress = {};
};

struct BufferDeviceAddressCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT;

  using NativeType = VkBufferDeviceAddressCreateInfoEXT;

  auto operator<=>(const BufferDeviceAddressCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceAddress deviceAddress = {};
};

struct PhysicalDeviceImageViewImageFormatInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT;

  using NativeType = VkPhysicalDeviceImageViewImageFormatInfoEXT;

  auto operator<=>(const PhysicalDeviceImageViewImageFormatInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ImageViewType imageViewType = {};
};

struct FilterCubicImageViewImageFormatPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT;

  using NativeType = VkFilterCubicImageViewImageFormatPropertiesEXT;

  auto operator<=>(const FilterCubicImageViewImageFormatPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 filterCubic = {};
  VkBool32 filterCubicMinmax = {};
};

struct PhysicalDeviceImagelessFramebufferFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES;

  using NativeType = VkPhysicalDeviceImagelessFramebufferFeatures;

  auto operator<=>(const PhysicalDeviceImagelessFramebufferFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 imagelessFramebuffer = {};
};

struct FramebufferAttachmentImageInfo {
  static constexpr StructureType structure_type = StructureType::E_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO;

  using NativeType = VkFramebufferAttachmentImageInfo;

  auto operator<=>(const FramebufferAttachmentImageInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ImageCreateMask flags = {};
  ImageUsageMask usage = {};
  uint32_t width = {};
  uint32_t height = {};
  uint32_t layerCount = {};
  uint32_t viewFormatCount = {};
  Format *pViewFormats = {};
};

struct FramebufferAttachmentsCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO;

  using NativeType = VkFramebufferAttachmentsCreateInfo;

  auto operator<=>(const FramebufferAttachmentsCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t attachmentImageInfoCount = {};
  FramebufferAttachmentImageInfo *pAttachmentImageInfos = {};
};

struct RenderPassAttachmentBeginInfo {
  static constexpr StructureType structure_type = StructureType::E_RENDER_PASS_ATTACHMENT_BEGIN_INFO;

  using NativeType = VkRenderPassAttachmentBeginInfo;

  auto operator<=>(const RenderPassAttachmentBeginInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t attachmentCount = {};
  VkImageView *pAttachments = {};
};

struct PhysicalDeviceTextureCompressionASTCHDRFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES;

  using NativeType = VkPhysicalDeviceTextureCompressionASTCHDRFeatures;

  auto operator<=>(const PhysicalDeviceTextureCompressionASTCHDRFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 textureCompressionASTC_HDR = {};
};

struct PhysicalDeviceCooperativeMatrixFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV;

  using NativeType = VkPhysicalDeviceCooperativeMatrixFeaturesNV;

  auto operator<=>(const PhysicalDeviceCooperativeMatrixFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 cooperativeMatrix = {};
  VkBool32 cooperativeMatrixRobustBufferAccess = {};
};

struct PhysicalDeviceCooperativeMatrixPropertiesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV;

  using NativeType = VkPhysicalDeviceCooperativeMatrixPropertiesNV;

  auto operator<=>(const PhysicalDeviceCooperativeMatrixPropertiesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ShaderStageMask cooperativeMatrixSupportedStages = {};
};

struct CooperativeMatrixPropertiesNV {
  static constexpr StructureType structure_type = StructureType::E_COOPERATIVE_MATRIX_PROPERTIES_NV;

  using NativeType = VkCooperativeMatrixPropertiesNV;

  auto operator<=>(const CooperativeMatrixPropertiesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t MSize = {};
  uint32_t NSize = {};
  uint32_t KSize = {};
  VkComponentTypeNV AType = {};
  VkComponentTypeNV BType = {};
  VkComponentTypeNV CType = {};
  VkComponentTypeNV DType = {};
  VkScopeNV scope = {};
};

struct PhysicalDeviceYcbcrImageArraysFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceYcbcrImageArraysFeaturesEXT;

  auto operator<=>(const PhysicalDeviceYcbcrImageArraysFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 ycbcrImageArrays = {};
};

struct ImageViewHandleInfoNVX {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_VIEW_HANDLE_INFO_NVX;

  using NativeType = VkImageViewHandleInfoNVX;

  auto operator<=>(const ImageViewHandleInfoNVX &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkImageView imageView = {};
  DescriptorType descriptorType = {};
  VkSampler sampler = {};
};

struct ImageViewAddressPropertiesNVX {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_VIEW_ADDRESS_PROPERTIES_NVX;

  using NativeType = VkImageViewAddressPropertiesNVX;

  auto operator<=>(const ImageViewAddressPropertiesNVX &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceAddress deviceAddress = {};
  VkDeviceSize size = {};
};

struct PipelineCreationFeedback {

  using NativeType = VkPipelineCreationFeedback;

  auto operator<=>(const PipelineCreationFeedback &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  PipelineCreationFeedbackMask flags = {};
  uint64_t duration = {};
};

struct PipelineCreationFeedbackCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_CREATION_FEEDBACK_CREATE_INFO;

  using NativeType = VkPipelineCreationFeedbackCreateInfo;

  auto operator<=>(const PipelineCreationFeedbackCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineCreationFeedback *pPipelineCreationFeedback = {};
  uint32_t pipelineStageCreationFeedbackCount = {};
  PipelineCreationFeedback *pPipelineStageCreationFeedbacks = {};
};

struct PhysicalDevicePresentBarrierFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV;

  using NativeType = VkPhysicalDevicePresentBarrierFeaturesNV;

  auto operator<=>(const PhysicalDevicePresentBarrierFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 presentBarrier = {};
};

struct SurfaceCapabilitiesPresentBarrierNV {
  static constexpr StructureType structure_type = StructureType::E_SURFACE_CAPABILITIES_PRESENT_BARRIER_NV;

  using NativeType = VkSurfaceCapabilitiesPresentBarrierNV;

  auto operator<=>(const SurfaceCapabilitiesPresentBarrierNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 presentBarrierSupported = {};
};

struct SwapchainPresentBarrierCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_SWAPCHAIN_PRESENT_BARRIER_CREATE_INFO_NV;

  using NativeType = VkSwapchainPresentBarrierCreateInfoNV;

  auto operator<=>(const SwapchainPresentBarrierCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 presentBarrierEnable = {};
};

struct PhysicalDevicePerformanceQueryFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR;

  using NativeType = VkPhysicalDevicePerformanceQueryFeaturesKHR;

  auto operator<=>(const PhysicalDevicePerformanceQueryFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 performanceCounterQueryPools = {};
  VkBool32 performanceCounterMultipleQueryPools = {};
};

struct PhysicalDevicePerformanceQueryPropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR;

  using NativeType = VkPhysicalDevicePerformanceQueryPropertiesKHR;

  auto operator<=>(const PhysicalDevicePerformanceQueryPropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 allowCommandBufferQueryCopies = {};
};

struct PerformanceCounterKHR {
  static constexpr StructureType structure_type = StructureType::E_PERFORMANCE_COUNTER_KHR;

  using NativeType = VkPerformanceCounterKHR;

  auto operator<=>(const PerformanceCounterKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PerformanceCounterUnit unit = {};
  PerformanceCounterScope scope = {};
  PerformanceCounterStorage storage = {};
  uint8_t uuid[VK_UUID_SIZE] = {};
};

struct PerformanceCounterDescriptionKHR {
  static constexpr StructureType structure_type = StructureType::E_PERFORMANCE_COUNTER_DESCRIPTION_KHR;

  using NativeType = VkPerformanceCounterDescriptionKHR;

  auto operator<=>(const PerformanceCounterDescriptionKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PerformanceCounterDescriptionMask flags = {};
  char name[VK_MAX_DESCRIPTION_SIZE] = {};
  char category[VK_MAX_DESCRIPTION_SIZE] = {};
  char description[VK_MAX_DESCRIPTION_SIZE] = {};
};

struct QueryPoolPerformanceCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR;

  using NativeType = VkQueryPoolPerformanceCreateInfoKHR;

  auto operator<=>(const QueryPoolPerformanceCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t queueFamilyIndex = {};
  uint32_t counterIndexCount = {};
  uint32_t *pCounterIndices = {};
};

struct AcquireProfilingLockInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_ACQUIRE_PROFILING_LOCK_INFO_KHR;

  using NativeType = VkAcquireProfilingLockInfoKHR;

  auto operator<=>(const AcquireProfilingLockInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  AcquireProfilingLockMask flags = {};
  uint64_t timeout = {};
};

struct PerformanceQuerySubmitInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_PERFORMANCE_QUERY_SUBMIT_INFO_KHR;

  using NativeType = VkPerformanceQuerySubmitInfoKHR;

  auto operator<=>(const PerformanceQuerySubmitInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t counterPassIndex = {};
};

struct HeadlessSurfaceCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_HEADLESS_SURFACE_CREATE_INFO_EXT;

  using NativeType = VkHeadlessSurfaceCreateInfoEXT;

  auto operator<=>(const HeadlessSurfaceCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  HeadlessSurfaceCreateMask flags = {};
};

struct PhysicalDeviceCoverageReductionModeFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV;

  using NativeType = VkPhysicalDeviceCoverageReductionModeFeaturesNV;

  auto operator<=>(const PhysicalDeviceCoverageReductionModeFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 coverageReductionMode = {};
};

struct PipelineCoverageReductionStateCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV;

  using NativeType = VkPipelineCoverageReductionStateCreateInfoNV;

  auto operator<=>(const PipelineCoverageReductionStateCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineCoverageReductionStateCreateMask flags = {};
  CoverageReductionMode coverageReductionMode = {};
};

struct FramebufferMixedSamplesCombinationNV {
  static constexpr StructureType structure_type = StructureType::E_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV;

  using NativeType = VkFramebufferMixedSamplesCombinationNV;

  auto operator<=>(const FramebufferMixedSamplesCombinationNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  CoverageReductionMode coverageReductionMode = {};
  SampleCountMaskBits rasterizationSamples = {};
  SampleCountMask depthStencilSamples = {};
  SampleCountMask colorSamples = {};
};

struct PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL;

  using NativeType = VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL;

  auto operator<=>(const PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderIntegerFunctions2 = {};
};

struct PerformanceValueINTEL {

  using NativeType = VkPerformanceValueINTEL;

  auto operator<=>(const PerformanceValueINTEL &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  PerformanceValueType type = {};
  VkPerformanceValueDataINTEL data = {};
};

struct InitializePerformanceApiInfoINTEL {
  static constexpr StructureType structure_type = StructureType::E_INITIALIZE_PERFORMANCE_API_INFO_INTEL;

  using NativeType = VkInitializePerformanceApiInfoINTEL;

  auto operator<=>(const InitializePerformanceApiInfoINTEL &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  void *pUserData = {};
};

struct QueryPoolPerformanceQueryCreateInfoINTEL {
  static constexpr StructureType structure_type = StructureType::E_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL;

  using NativeType = VkQueryPoolPerformanceQueryCreateInfoINTEL;

  auto operator<=>(const QueryPoolPerformanceQueryCreateInfoINTEL &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  QueryPoolSamplingMode performanceCountersSampling = {};
};

struct PerformanceMarkerInfoINTEL {
  static constexpr StructureType structure_type = StructureType::E_PERFORMANCE_MARKER_INFO_INTEL;

  using NativeType = VkPerformanceMarkerInfoINTEL;

  auto operator<=>(const PerformanceMarkerInfoINTEL &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint64_t marker = {};
};

struct PerformanceStreamMarkerInfoINTEL {
  static constexpr StructureType structure_type = StructureType::E_PERFORMANCE_STREAM_MARKER_INFO_INTEL;

  using NativeType = VkPerformanceStreamMarkerInfoINTEL;

  auto operator<=>(const PerformanceStreamMarkerInfoINTEL &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t marker = {};
};

struct PerformanceOverrideInfoINTEL {
  static constexpr StructureType structure_type = StructureType::E_PERFORMANCE_OVERRIDE_INFO_INTEL;

  using NativeType = VkPerformanceOverrideInfoINTEL;

  auto operator<=>(const PerformanceOverrideInfoINTEL &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PerformanceOverrideType type = {};
  VkBool32 enable = {};
  uint64_t parameter = {};
};

struct PerformanceConfigurationAcquireInfoINTEL {
  static constexpr StructureType structure_type = StructureType::E_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL;

  using NativeType = VkPerformanceConfigurationAcquireInfoINTEL;

  auto operator<=>(const PerformanceConfigurationAcquireInfoINTEL &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PerformanceConfigurationType type = {};
};

struct PhysicalDeviceShaderClockFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceShaderClockFeaturesKHR;

  auto operator<=>(const PhysicalDeviceShaderClockFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderSubgroupClock = {};
  VkBool32 shaderDeviceClock = {};
};

struct PhysicalDeviceIndexTypeUint8FeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceIndexTypeUint8FeaturesKHR;

  auto operator<=>(const PhysicalDeviceIndexTypeUint8FeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 indexTypeUint8 = {};
};

struct PhysicalDeviceShaderSMBuiltinsPropertiesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV;

  using NativeType = VkPhysicalDeviceShaderSMBuiltinsPropertiesNV;

  auto operator<=>(const PhysicalDeviceShaderSMBuiltinsPropertiesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t shaderSMCount = {};
  uint32_t shaderWarpsPerSM = {};
};

struct PhysicalDeviceShaderSMBuiltinsFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV;

  using NativeType = VkPhysicalDeviceShaderSMBuiltinsFeaturesNV;

  auto operator<=>(const PhysicalDeviceShaderSMBuiltinsFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderSMBuiltins = {};
};

struct PhysicalDeviceFragmentShaderInterlockFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT;

  auto operator<=>(const PhysicalDeviceFragmentShaderInterlockFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 fragmentShaderSampleInterlock = {};
  VkBool32 fragmentShaderPixelInterlock = {};
  VkBool32 fragmentShaderShadingRateInterlock = {};
};

struct PhysicalDeviceSeparateDepthStencilLayoutsFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES;

  using NativeType = VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures;

  auto operator<=>(const PhysicalDeviceSeparateDepthStencilLayoutsFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 separateDepthStencilLayouts = {};
};

struct AttachmentReferenceStencilLayout {
  static constexpr StructureType structure_type = StructureType::E_ATTACHMENT_REFERENCE_STENCIL_LAYOUT;

  using NativeType = VkAttachmentReferenceStencilLayout;

  auto operator<=>(const AttachmentReferenceStencilLayout &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ImageLayout stencilLayout = {};
};

struct PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT;

  using NativeType = VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT;

  auto operator<=>(const PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 primitiveTopologyListRestart = {};
  VkBool32 primitiveTopologyPatchListRestart = {};
};

struct AttachmentDescriptionStencilLayout {
  static constexpr StructureType structure_type = StructureType::E_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT;

  using NativeType = VkAttachmentDescriptionStencilLayout;

  auto operator<=>(const AttachmentDescriptionStencilLayout &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ImageLayout stencilInitialLayout = {};
  ImageLayout stencilFinalLayout = {};
};

struct PhysicalDevicePipelineExecutablePropertiesFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR;

  using NativeType = VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR;

  auto operator<=>(const PhysicalDevicePipelineExecutablePropertiesFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 pipelineExecutableInfo = {};
};

struct PipelineInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_INFO_KHR;

  using NativeType = VkPipelineInfoKHR;

  auto operator<=>(const PipelineInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkPipeline pipeline = {};
};

struct PipelineExecutablePropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_EXECUTABLE_PROPERTIES_KHR;

  using NativeType = VkPipelineExecutablePropertiesKHR;

  auto operator<=>(const PipelineExecutablePropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ShaderStageMask stages = {};
  char name[VK_MAX_DESCRIPTION_SIZE] = {};
  char description[VK_MAX_DESCRIPTION_SIZE] = {};
  uint32_t subgroupSize = {};
};

struct PipelineExecutableInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_EXECUTABLE_INFO_KHR;

  using NativeType = VkPipelineExecutableInfoKHR;

  auto operator<=>(const PipelineExecutableInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkPipeline pipeline = {};
  uint32_t executableIndex = {};
};

struct PipelineExecutableStatisticKHR {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_EXECUTABLE_STATISTIC_KHR;

  using NativeType = VkPipelineExecutableStatisticKHR;

  auto operator<=>(const PipelineExecutableStatisticKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  char name[VK_MAX_DESCRIPTION_SIZE] = {};
  char description[VK_MAX_DESCRIPTION_SIZE] = {};
  PipelineExecutableStatisticFormat format = {};
  VkPipelineExecutableStatisticValueKHR value = {};
};

struct PipelineExecutableInternalRepresentationKHR {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR;

  using NativeType = VkPipelineExecutableInternalRepresentationKHR;

  auto operator<=>(const PipelineExecutableInternalRepresentationKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  char name[VK_MAX_DESCRIPTION_SIZE] = {};
  char description[VK_MAX_DESCRIPTION_SIZE] = {};
  VkBool32 isText = {};
  size_t dataSize = {};
  void *pData = {};
};

struct PhysicalDeviceShaderDemoteToHelperInvocationFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES;

  using NativeType = VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures;

  auto operator<=>(const PhysicalDeviceShaderDemoteToHelperInvocationFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderDemoteToHelperInvocation = {};
};

struct PhysicalDeviceTexelBufferAlignmentFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT;

  auto operator<=>(const PhysicalDeviceTexelBufferAlignmentFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 texelBufferAlignment = {};
};

struct PhysicalDeviceTexelBufferAlignmentProperties {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES;

  using NativeType = VkPhysicalDeviceTexelBufferAlignmentProperties;

  auto operator<=>(const PhysicalDeviceTexelBufferAlignmentProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceSize storageTexelBufferOffsetAlignmentBytes = {};
  VkBool32 storageTexelBufferOffsetSingleTexelAlignment = {};
  VkDeviceSize uniformTexelBufferOffsetAlignmentBytes = {};
  VkBool32 uniformTexelBufferOffsetSingleTexelAlignment = {};
};

struct PhysicalDeviceSubgroupSizeControlFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES;

  using NativeType = VkPhysicalDeviceSubgroupSizeControlFeatures;

  auto operator<=>(const PhysicalDeviceSubgroupSizeControlFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 subgroupSizeControl = {};
  VkBool32 computeFullSubgroups = {};
};

struct PhysicalDeviceSubgroupSizeControlProperties {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES;

  using NativeType = VkPhysicalDeviceSubgroupSizeControlProperties;

  auto operator<=>(const PhysicalDeviceSubgroupSizeControlProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t minSubgroupSize = {};
  uint32_t maxSubgroupSize = {};
  uint32_t maxComputeWorkgroupSubgroups = {};
  ShaderStageMask requiredSubgroupSizeStages = {};
};

struct PipelineShaderStageRequiredSubgroupSizeCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO;

  using NativeType = VkPipelineShaderStageRequiredSubgroupSizeCreateInfo;

  auto operator<=>(const PipelineShaderStageRequiredSubgroupSizeCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t requiredSubgroupSize = {};
};

struct SubpassShadingPipelineCreateInfoHUAWEI {
  static constexpr StructureType structure_type = StructureType::E_SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI;

  using NativeType = VkSubpassShadingPipelineCreateInfoHUAWEI;

  auto operator<=>(const SubpassShadingPipelineCreateInfoHUAWEI &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkRenderPass renderPass = {};
  uint32_t subpass = {};
};

struct PhysicalDeviceSubpassShadingPropertiesHUAWEI {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI;

  using NativeType = VkPhysicalDeviceSubpassShadingPropertiesHUAWEI;

  auto operator<=>(const PhysicalDeviceSubpassShadingPropertiesHUAWEI &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxSubpassShadingWorkgroupSizeAspectRatio = {};
};

struct PhysicalDeviceClusterCullingShaderPropertiesHUAWEI {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_PROPERTIES_HUAWEI;

  using NativeType = VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI;

  auto operator<=>(const PhysicalDeviceClusterCullingShaderPropertiesHUAWEI &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxWorkGroupCount[3] = {};
  uint32_t maxWorkGroupSize[3] = {};
  uint32_t maxOutputClusterCount = {};
  VkDeviceSize indirectBufferOffsetAlignment = {};
};

struct MemoryOpaqueCaptureAddressAllocateInfo {
  static constexpr StructureType structure_type = StructureType::E_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO;

  using NativeType = VkMemoryOpaqueCaptureAddressAllocateInfo;

  auto operator<=>(const MemoryOpaqueCaptureAddressAllocateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint64_t opaqueCaptureAddress = {};
};

struct DeviceMemoryOpaqueCaptureAddressInfo {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO;

  using NativeType = VkDeviceMemoryOpaqueCaptureAddressInfo;

  auto operator<=>(const DeviceMemoryOpaqueCaptureAddressInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceMemory memory = {};
};

struct PhysicalDeviceLineRasterizationFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceLineRasterizationFeaturesKHR;

  auto operator<=>(const PhysicalDeviceLineRasterizationFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 rectangularLines = {};
  VkBool32 bresenhamLines = {};
  VkBool32 smoothLines = {};
  VkBool32 stippledRectangularLines = {};
  VkBool32 stippledBresenhamLines = {};
  VkBool32 stippledSmoothLines = {};
};

struct PhysicalDeviceLineRasterizationPropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_KHR;

  using NativeType = VkPhysicalDeviceLineRasterizationPropertiesKHR;

  auto operator<=>(const PhysicalDeviceLineRasterizationPropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t lineSubPixelPrecisionBits = {};
};

struct PipelineRasterizationLineStateCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_KHR;

  using NativeType = VkPipelineRasterizationLineStateCreateInfoKHR;

  auto operator<=>(const PipelineRasterizationLineStateCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  LineRasterizationMode lineRasterizationMode = {};
  VkBool32 stippledLineEnable = {};
  uint32_t lineStippleFactor = {};
  uint16_t lineStipplePattern = {};
};

struct PhysicalDevicePipelineCreationCacheControlFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES;

  using NativeType = VkPhysicalDevicePipelineCreationCacheControlFeatures;

  auto operator<=>(const PhysicalDevicePipelineCreationCacheControlFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 pipelineCreationCacheControl = {};
};

struct PhysicalDeviceVulkan11Features {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES;

  using NativeType = VkPhysicalDeviceVulkan11Features;

  auto operator<=>(const PhysicalDeviceVulkan11Features &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 storageBuffer16BitAccess = {};
  VkBool32 uniformAndStorageBuffer16BitAccess = {};
  VkBool32 storagePushConstant16 = {};
  VkBool32 storageInputOutput16 = {};
  VkBool32 multiview = {};
  VkBool32 multiviewGeometryShader = {};
  VkBool32 multiviewTessellationShader = {};
  VkBool32 variablePointersStorageBuffer = {};
  VkBool32 variablePointers = {};
  VkBool32 protectedMemory = {};
  VkBool32 samplerYcbcrConversion = {};
  VkBool32 shaderDrawParameters = {};
};

struct PhysicalDeviceVulkan11Properties {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES;

  using NativeType = VkPhysicalDeviceVulkan11Properties;

  auto operator<=>(const PhysicalDeviceVulkan11Properties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint8_t deviceUUID[VK_UUID_SIZE] = {};
  uint8_t driverUUID[VK_UUID_SIZE] = {};
  uint8_t deviceLUID[VK_LUID_SIZE] = {};
  uint32_t deviceNodeMask = {};
  VkBool32 deviceLUIDValid = {};
  uint32_t subgroupSize = {};
  ShaderStageMask subgroupSupportedStages = {};
  SubgroupFeatureMask subgroupSupportedOperations = {};
  VkBool32 subgroupQuadOperationsInAllStages = {};
  PointClippingBehavior pointClippingBehavior = {};
  uint32_t maxMultiviewViewCount = {};
  uint32_t maxMultiviewInstanceIndex = {};
  VkBool32 protectedNoFault = {};
  uint32_t maxPerSetDescriptors = {};
  VkDeviceSize maxMemoryAllocationSize = {};
};

struct PhysicalDeviceVulkan12Features {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES;

  using NativeType = VkPhysicalDeviceVulkan12Features;

  auto operator<=>(const PhysicalDeviceVulkan12Features &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 samplerMirrorClampToEdge = {};
  VkBool32 drawIndirectCount = {};
  VkBool32 storageBuffer8BitAccess = {};
  VkBool32 uniformAndStorageBuffer8BitAccess = {};
  VkBool32 storagePushConstant8 = {};
  VkBool32 shaderBufferInt64Atomics = {};
  VkBool32 shaderSharedInt64Atomics = {};
  VkBool32 shaderFloat16 = {};
  VkBool32 shaderInt8 = {};
  VkBool32 descriptorIndexing = {};
  VkBool32 shaderInputAttachmentArrayDynamicIndexing = {};
  VkBool32 shaderUniformTexelBufferArrayDynamicIndexing = {};
  VkBool32 shaderStorageTexelBufferArrayDynamicIndexing = {};
  VkBool32 shaderUniformBufferArrayNonUniformIndexing = {};
  VkBool32 shaderSampledImageArrayNonUniformIndexing = {};
  VkBool32 shaderStorageBufferArrayNonUniformIndexing = {};
  VkBool32 shaderStorageImageArrayNonUniformIndexing = {};
  VkBool32 shaderInputAttachmentArrayNonUniformIndexing = {};
  VkBool32 shaderUniformTexelBufferArrayNonUniformIndexing = {};
  VkBool32 shaderStorageTexelBufferArrayNonUniformIndexing = {};
  VkBool32 descriptorBindingUniformBufferUpdateAfterBind = {};
  VkBool32 descriptorBindingSampledImageUpdateAfterBind = {};
  VkBool32 descriptorBindingStorageImageUpdateAfterBind = {};
  VkBool32 descriptorBindingStorageBufferUpdateAfterBind = {};
  VkBool32 descriptorBindingUniformTexelBufferUpdateAfterBind = {};
  VkBool32 descriptorBindingStorageTexelBufferUpdateAfterBind = {};
  VkBool32 descriptorBindingUpdateUnusedWhilePending = {};
  VkBool32 descriptorBindingPartiallyBound = {};
  VkBool32 descriptorBindingVariableDescriptorCount = {};
  VkBool32 runtimeDescriptorArray = {};
  VkBool32 samplerFilterMinmax = {};
  VkBool32 scalarBlockLayout = {};
  VkBool32 imagelessFramebuffer = {};
  VkBool32 uniformBufferStandardLayout = {};
  VkBool32 shaderSubgroupExtendedTypes = {};
  VkBool32 separateDepthStencilLayouts = {};
  VkBool32 hostQueryReset = {};
  VkBool32 timelineSemaphore = {};
  VkBool32 bufferDeviceAddress = {};
  VkBool32 bufferDeviceAddressCaptureReplay = {};
  VkBool32 bufferDeviceAddressMultiDevice = {};
  VkBool32 vulkanMemoryModel = {};
  VkBool32 vulkanMemoryModelDeviceScope = {};
  VkBool32 vulkanMemoryModelAvailabilityVisibilityChains = {};
  VkBool32 shaderOutputViewportIndex = {};
  VkBool32 shaderOutputLayer = {};
  VkBool32 subgroupBroadcastDynamicId = {};
};

struct PhysicalDeviceVulkan12Properties {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES;

  using NativeType = VkPhysicalDeviceVulkan12Properties;

  auto operator<=>(const PhysicalDeviceVulkan12Properties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DriverId driverID = {};
  char driverName[VK_MAX_DRIVER_NAME_SIZE] = {};
  char driverInfo[VK_MAX_DRIVER_INFO_SIZE] = {};
  ConformanceVersion conformanceVersion = {};
  ShaderFloatControlsIndependence denormBehaviorIndependence = {};
  ShaderFloatControlsIndependence roundingModeIndependence = {};
  VkBool32 shaderSignedZeroInfNanPreserveFloat16 = {};
  VkBool32 shaderSignedZeroInfNanPreserveFloat32 = {};
  VkBool32 shaderSignedZeroInfNanPreserveFloat64 = {};
  VkBool32 shaderDenormPreserveFloat16 = {};
  VkBool32 shaderDenormPreserveFloat32 = {};
  VkBool32 shaderDenormPreserveFloat64 = {};
  VkBool32 shaderDenormFlushToZeroFloat16 = {};
  VkBool32 shaderDenormFlushToZeroFloat32 = {};
  VkBool32 shaderDenormFlushToZeroFloat64 = {};
  VkBool32 shaderRoundingModeRTEFloat16 = {};
  VkBool32 shaderRoundingModeRTEFloat32 = {};
  VkBool32 shaderRoundingModeRTEFloat64 = {};
  VkBool32 shaderRoundingModeRTZFloat16 = {};
  VkBool32 shaderRoundingModeRTZFloat32 = {};
  VkBool32 shaderRoundingModeRTZFloat64 = {};
  uint32_t maxUpdateAfterBindDescriptorsInAllPools = {};
  VkBool32 shaderUniformBufferArrayNonUniformIndexingNative = {};
  VkBool32 shaderSampledImageArrayNonUniformIndexingNative = {};
  VkBool32 shaderStorageBufferArrayNonUniformIndexingNative = {};
  VkBool32 shaderStorageImageArrayNonUniformIndexingNative = {};
  VkBool32 shaderInputAttachmentArrayNonUniformIndexingNative = {};
  VkBool32 robustBufferAccessUpdateAfterBind = {};
  VkBool32 quadDivergentImplicitLod = {};
  uint32_t maxPerStageDescriptorUpdateAfterBindSamplers = {};
  uint32_t maxPerStageDescriptorUpdateAfterBindUniformBuffers = {};
  uint32_t maxPerStageDescriptorUpdateAfterBindStorageBuffers = {};
  uint32_t maxPerStageDescriptorUpdateAfterBindSampledImages = {};
  uint32_t maxPerStageDescriptorUpdateAfterBindStorageImages = {};
  uint32_t maxPerStageDescriptorUpdateAfterBindInputAttachments = {};
  uint32_t maxPerStageUpdateAfterBindResources = {};
  uint32_t maxDescriptorSetUpdateAfterBindSamplers = {};
  uint32_t maxDescriptorSetUpdateAfterBindUniformBuffers = {};
  uint32_t maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = {};
  uint32_t maxDescriptorSetUpdateAfterBindStorageBuffers = {};
  uint32_t maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = {};
  uint32_t maxDescriptorSetUpdateAfterBindSampledImages = {};
  uint32_t maxDescriptorSetUpdateAfterBindStorageImages = {};
  uint32_t maxDescriptorSetUpdateAfterBindInputAttachments = {};
  ResolveModeMask supportedDepthResolveModes = {};
  ResolveModeMask supportedStencilResolveModes = {};
  VkBool32 independentResolveNone = {};
  VkBool32 independentResolve = {};
  VkBool32 filterMinmaxSingleComponentFormats = {};
  VkBool32 filterMinmaxImageComponentMapping = {};
  uint64_t maxTimelineSemaphoreValueDifference = {};
  SampleCountMask framebufferIntegerColorSampleCounts = {};
};

struct PhysicalDeviceVulkan13Features {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES;

  using NativeType = VkPhysicalDeviceVulkan13Features;

  auto operator<=>(const PhysicalDeviceVulkan13Features &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 robustImageAccess = {};
  VkBool32 inlineUniformBlock = {};
  VkBool32 descriptorBindingInlineUniformBlockUpdateAfterBind = {};
  VkBool32 pipelineCreationCacheControl = {};
  VkBool32 privateData = {};
  VkBool32 shaderDemoteToHelperInvocation = {};
  VkBool32 shaderTerminateInvocation = {};
  VkBool32 subgroupSizeControl = {};
  VkBool32 computeFullSubgroups = {};
  VkBool32 synchronization2 = {};
  VkBool32 textureCompressionASTC_HDR = {};
  VkBool32 shaderZeroInitializeWorkgroupMemory = {};
  VkBool32 dynamicRendering = {};
  VkBool32 shaderIntegerDotProduct = {};
  VkBool32 maintenance4 = {};
};

struct PhysicalDeviceVulkan13Properties {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES;

  using NativeType = VkPhysicalDeviceVulkan13Properties;

  auto operator<=>(const PhysicalDeviceVulkan13Properties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t minSubgroupSize = {};
  uint32_t maxSubgroupSize = {};
  uint32_t maxComputeWorkgroupSubgroups = {};
  ShaderStageMask requiredSubgroupSizeStages = {};
  uint32_t maxInlineUniformBlockSize = {};
  uint32_t maxPerStageDescriptorInlineUniformBlocks = {};
  uint32_t maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = {};
  uint32_t maxDescriptorSetInlineUniformBlocks = {};
  uint32_t maxDescriptorSetUpdateAfterBindInlineUniformBlocks = {};
  uint32_t maxInlineUniformTotalSize = {};
  VkBool32 integerDotProduct8BitUnsignedAccelerated = {};
  VkBool32 integerDotProduct8BitSignedAccelerated = {};
  VkBool32 integerDotProduct8BitMixedSignednessAccelerated = {};
  VkBool32 integerDotProduct4x8BitPackedUnsignedAccelerated = {};
  VkBool32 integerDotProduct4x8BitPackedSignedAccelerated = {};
  VkBool32 integerDotProduct4x8BitPackedMixedSignednessAccelerated = {};
  VkBool32 integerDotProduct16BitUnsignedAccelerated = {};
  VkBool32 integerDotProduct16BitSignedAccelerated = {};
  VkBool32 integerDotProduct16BitMixedSignednessAccelerated = {};
  VkBool32 integerDotProduct32BitUnsignedAccelerated = {};
  VkBool32 integerDotProduct32BitSignedAccelerated = {};
  VkBool32 integerDotProduct32BitMixedSignednessAccelerated = {};
  VkBool32 integerDotProduct64BitUnsignedAccelerated = {};
  VkBool32 integerDotProduct64BitSignedAccelerated = {};
  VkBool32 integerDotProduct64BitMixedSignednessAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating8BitUnsignedAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating8BitSignedAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating16BitUnsignedAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating16BitSignedAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating32BitUnsignedAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating32BitSignedAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating64BitUnsignedAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating64BitSignedAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated = {};
  VkDeviceSize storageTexelBufferOffsetAlignmentBytes = {};
  VkBool32 storageTexelBufferOffsetSingleTexelAlignment = {};
  VkDeviceSize uniformTexelBufferOffsetAlignmentBytes = {};
  VkBool32 uniformTexelBufferOffsetSingleTexelAlignment = {};
  VkDeviceSize maxBufferSize = {};
};

struct PipelineCompilerControlCreateInfoAMD {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD;

  using NativeType = VkPipelineCompilerControlCreateInfoAMD;

  auto operator<=>(const PipelineCompilerControlCreateInfoAMD &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineCompilerControlMask compilerControlFlags = {};
};

struct PhysicalDeviceCoherentMemoryFeaturesAMD {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD;

  using NativeType = VkPhysicalDeviceCoherentMemoryFeaturesAMD;

  auto operator<=>(const PhysicalDeviceCoherentMemoryFeaturesAMD &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 deviceCoherentMemory = {};
};

struct PhysicalDeviceToolProperties {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_TOOL_PROPERTIES;

  using NativeType = VkPhysicalDeviceToolProperties;

  auto operator<=>(const PhysicalDeviceToolProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  char name[VK_MAX_EXTENSION_NAME_SIZE] = {};
  char version[VK_MAX_EXTENSION_NAME_SIZE] = {};
  ToolPurposeMask purposes = {};
  char description[VK_MAX_DESCRIPTION_SIZE] = {};
  char layer[VK_MAX_EXTENSION_NAME_SIZE] = {};
};

struct SamplerCustomBorderColorCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT;

  using NativeType = VkSamplerCustomBorderColorCreateInfoEXT;

  auto operator<=>(const SamplerCustomBorderColorCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkClearColorValue customBorderColor = {};
  Format format = {};
};

struct PhysicalDeviceCustomBorderColorPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceCustomBorderColorPropertiesEXT;

  auto operator<=>(const PhysicalDeviceCustomBorderColorPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxCustomBorderColorSamplers = {};
};

struct PhysicalDeviceCustomBorderColorFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceCustomBorderColorFeaturesEXT;

  auto operator<=>(const PhysicalDeviceCustomBorderColorFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 customBorderColors = {};
  VkBool32 customBorderColorWithoutFormat = {};
};

struct SamplerBorderColorComponentMappingCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT;

  using NativeType = VkSamplerBorderColorComponentMappingCreateInfoEXT;

  auto operator<=>(const SamplerBorderColorComponentMappingCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ComponentMapping components = {};
  VkBool32 srgb = {};
};

struct PhysicalDeviceBorderColorSwizzleFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceBorderColorSwizzleFeaturesEXT;

  auto operator<=>(const PhysicalDeviceBorderColorSwizzleFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 borderColorSwizzle = {};
  VkBool32 borderColorSwizzleFromImage = {};
};

struct AccelerationStructureGeometryTrianglesDataKHR {
  static constexpr StructureType structure_type = StructureType::E_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR;

  using NativeType = VkAccelerationStructureGeometryTrianglesDataKHR;

  auto operator<=>(const AccelerationStructureGeometryTrianglesDataKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  Format vertexFormat = {};
  VkDeviceOrHostAddressConstKHR vertexData = {};
  VkDeviceSize vertexStride = {};
  uint32_t maxVertex = {};
  IndexType indexType = {};
  VkDeviceOrHostAddressConstKHR indexData = {};
  VkDeviceOrHostAddressConstKHR transformData = {};
};

struct AccelerationStructureGeometryAabbsDataKHR {
  static constexpr StructureType structure_type = StructureType::E_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR;

  using NativeType = VkAccelerationStructureGeometryAabbsDataKHR;

  auto operator<=>(const AccelerationStructureGeometryAabbsDataKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceOrHostAddressConstKHR data = {};
  VkDeviceSize stride = {};
};

struct AccelerationStructureGeometryInstancesDataKHR {
  static constexpr StructureType structure_type = StructureType::E_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR;

  using NativeType = VkAccelerationStructureGeometryInstancesDataKHR;

  auto operator<=>(const AccelerationStructureGeometryInstancesDataKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 arrayOfPointers = {};
  VkDeviceOrHostAddressConstKHR data = {};
};

struct AccelerationStructureGeometryKHR {
  static constexpr StructureType structure_type = StructureType::E_ACCELERATION_STRUCTURE_GEOMETRY_KHR;

  using NativeType = VkAccelerationStructureGeometryKHR;

  auto operator<=>(const AccelerationStructureGeometryKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  GeometryType geometryType = {};
  VkAccelerationStructureGeometryDataKHR geometry = {};
  GeometryMask flags = {};
};

struct AccelerationStructureBuildGeometryInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR;

  using NativeType = VkAccelerationStructureBuildGeometryInfoKHR;

  auto operator<=>(const AccelerationStructureBuildGeometryInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  AccelerationStructureType type = {};
  BuildAccelerationStructureMask flags = {};
  BuildAccelerationStructureMode mode = {};
  VkAccelerationStructureKHR srcAccelerationStructure = {};
  VkAccelerationStructureKHR dstAccelerationStructure = {};
  uint32_t geometryCount = {};
  AccelerationStructureGeometryKHR *pGeometries = {};
  AccelerationStructureGeometryKHR *const *ppGeometries = {};
  VkDeviceOrHostAddressKHR scratchData = {};
};

struct AccelerationStructureBuildRangeInfoKHR {

  using NativeType = VkAccelerationStructureBuildRangeInfoKHR;

  auto operator<=>(const AccelerationStructureBuildRangeInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t primitiveCount = {};
  uint32_t primitiveOffset = {};
  uint32_t firstVertex = {};
  uint32_t transformOffset = {};
};

struct AccelerationStructureCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_ACCELERATION_STRUCTURE_CREATE_INFO_KHR;

  using NativeType = VkAccelerationStructureCreateInfoKHR;

  auto operator<=>(const AccelerationStructureCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  AccelerationStructureCreateMask createFlags = {};
  VkBuffer buffer = {};
  VkDeviceSize offset = {};
  VkDeviceSize size = {};
  AccelerationStructureType type = {};
  VkDeviceAddress deviceAddress = {};
};

struct AabbPositionsKHR {

  using NativeType = VkAabbPositionsKHR;

  auto operator<=>(const AabbPositionsKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  float minX = {};
  float minY = {};
  float minZ = {};
  float maxX = {};
  float maxY = {};
  float maxZ = {};
};

struct TransformMatrixKHR {

  using NativeType = VkTransformMatrixKHR;

  auto operator<=>(const TransformMatrixKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  float matrix[3][4] = {};
};

struct AccelerationStructureInstanceKHR {

  using NativeType = VkAccelerationStructureInstanceKHR;

  auto operator<=>(const AccelerationStructureInstanceKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  TransformMatrixKHR transform = {};
  uint32_t instanceCustomIndex : 24 = {};
  uint32_t mask : 8 = {};
  uint32_t instanceShaderBindingTableRecordOffset : 24 = {};
  VkGeometryInstanceFlagsKHR flags : 8 = {};
  uint64_t accelerationStructureReference = {};
};

struct AccelerationStructureDeviceAddressInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR;

  using NativeType = VkAccelerationStructureDeviceAddressInfoKHR;

  auto operator<=>(const AccelerationStructureDeviceAddressInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkAccelerationStructureKHR accelerationStructure = {};
};

struct AccelerationStructureVersionInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_ACCELERATION_STRUCTURE_VERSION_INFO_KHR;

  using NativeType = VkAccelerationStructureVersionInfoKHR;

  auto operator<=>(const AccelerationStructureVersionInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint8_t *pVersionData = {};
};

struct CopyAccelerationStructureInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_COPY_ACCELERATION_STRUCTURE_INFO_KHR;

  using NativeType = VkCopyAccelerationStructureInfoKHR;

  auto operator<=>(const CopyAccelerationStructureInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkAccelerationStructureKHR src = {};
  VkAccelerationStructureKHR dst = {};
  CopyAccelerationStructureMode mode = {};
};

struct CopyAccelerationStructureToMemoryInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR;

  using NativeType = VkCopyAccelerationStructureToMemoryInfoKHR;

  auto operator<=>(const CopyAccelerationStructureToMemoryInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkAccelerationStructureKHR src = {};
  VkDeviceOrHostAddressKHR dst = {};
  CopyAccelerationStructureMode mode = {};
};

struct CopyMemoryToAccelerationStructureInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR;

  using NativeType = VkCopyMemoryToAccelerationStructureInfoKHR;

  auto operator<=>(const CopyMemoryToAccelerationStructureInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceOrHostAddressConstKHR src = {};
  VkAccelerationStructureKHR dst = {};
  CopyAccelerationStructureMode mode = {};
};

struct PhysicalDeviceExtendedDynamicStateFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceExtendedDynamicStateFeaturesEXT;

  auto operator<=>(const PhysicalDeviceExtendedDynamicStateFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 extendedDynamicState = {};
};

struct PhysicalDeviceExtendedDynamicState2FeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceExtendedDynamicState2FeaturesEXT;

  auto operator<=>(const PhysicalDeviceExtendedDynamicState2FeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 extendedDynamicState2 = {};
  VkBool32 extendedDynamicState2LogicOp = {};
  VkBool32 extendedDynamicState2PatchControlPoints = {};
};

struct PhysicalDeviceExtendedDynamicState3FeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceExtendedDynamicState3FeaturesEXT;

  auto operator<=>(const PhysicalDeviceExtendedDynamicState3FeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 extendedDynamicState3TessellationDomainOrigin = {};
  VkBool32 extendedDynamicState3DepthClampEnable = {};
  VkBool32 extendedDynamicState3PolygonMode = {};
  VkBool32 extendedDynamicState3RasterizationSamples = {};
  VkBool32 extendedDynamicState3SampleMask = {};
  VkBool32 extendedDynamicState3AlphaToCoverageEnable = {};
  VkBool32 extendedDynamicState3AlphaToOneEnable = {};
  VkBool32 extendedDynamicState3LogicOpEnable = {};
  VkBool32 extendedDynamicState3ColorBlendEnable = {};
  VkBool32 extendedDynamicState3ColorBlendEquation = {};
  VkBool32 extendedDynamicState3ColorWriteMask = {};
  VkBool32 extendedDynamicState3RasterizationStream = {};
  VkBool32 extendedDynamicState3ConservativeRasterizationMode = {};
  VkBool32 extendedDynamicState3ExtraPrimitiveOverestimationSize = {};
  VkBool32 extendedDynamicState3DepthClipEnable = {};
  VkBool32 extendedDynamicState3SampleLocationsEnable = {};
  VkBool32 extendedDynamicState3ColorBlendAdvanced = {};
  VkBool32 extendedDynamicState3ProvokingVertexMode = {};
  VkBool32 extendedDynamicState3LineRasterizationMode = {};
  VkBool32 extendedDynamicState3LineStippleEnable = {};
  VkBool32 extendedDynamicState3DepthClipNegativeOneToOne = {};
  VkBool32 extendedDynamicState3ViewportWScalingEnable = {};
  VkBool32 extendedDynamicState3ViewportSwizzle = {};
  VkBool32 extendedDynamicState3CoverageToColorEnable = {};
  VkBool32 extendedDynamicState3CoverageToColorLocation = {};
  VkBool32 extendedDynamicState3CoverageModulationMode = {};
  VkBool32 extendedDynamicState3CoverageModulationTableEnable = {};
  VkBool32 extendedDynamicState3CoverageModulationTable = {};
  VkBool32 extendedDynamicState3CoverageReductionMode = {};
  VkBool32 extendedDynamicState3RepresentativeFragmentTestEnable = {};
  VkBool32 extendedDynamicState3ShadingRateImageEnable = {};
};

struct PhysicalDeviceExtendedDynamicState3PropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceExtendedDynamicState3PropertiesEXT;

  auto operator<=>(const PhysicalDeviceExtendedDynamicState3PropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 dynamicPrimitiveTopologyUnrestricted = {};
};

struct ColorBlendEquationEXT {

  using NativeType = VkColorBlendEquationEXT;

  auto operator<=>(const ColorBlendEquationEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  BlendFactor srcColorBlendFactor = {};
  BlendFactor dstColorBlendFactor = {};
  BlendOp colorBlendOp = {};
  BlendFactor srcAlphaBlendFactor = {};
  BlendFactor dstAlphaBlendFactor = {};
  BlendOp alphaBlendOp = {};
};

struct ColorBlendAdvancedEXT {

  using NativeType = VkColorBlendAdvancedEXT;

  auto operator<=>(const ColorBlendAdvancedEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  BlendOp advancedBlendOp = {};
  VkBool32 srcPremultiplied = {};
  VkBool32 dstPremultiplied = {};
  BlendOverlap blendOverlap = {};
  VkBool32 clampResults = {};
};

struct RenderPassTransformBeginInfoQCOM {
  static constexpr StructureType structure_type = StructureType::E_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM;

  using NativeType = VkRenderPassTransformBeginInfoQCOM;

  auto operator<=>(const RenderPassTransformBeginInfoQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  SurfaceTransformMaskBits transform = {};
};

struct CopyCommandTransformInfoQCOM {
  static constexpr StructureType structure_type = StructureType::E_COPY_COMMAND_TRANSFORM_INFO_QCOM;

  using NativeType = VkCopyCommandTransformInfoQCOM;

  auto operator<=>(const CopyCommandTransformInfoQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  SurfaceTransformMaskBits transform = {};
};

struct CommandBufferInheritanceRenderPassTransformInfoQCOM {
  static constexpr StructureType structure_type = StructureType::E_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM;

  using NativeType = VkCommandBufferInheritanceRenderPassTransformInfoQCOM;

  auto operator<=>(const CommandBufferInheritanceRenderPassTransformInfoQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  SurfaceTransformMaskBits transform = {};
  Rect2D renderArea = {};
};

struct PhysicalDeviceDiagnosticsConfigFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV;

  using NativeType = VkPhysicalDeviceDiagnosticsConfigFeaturesNV;

  auto operator<=>(const PhysicalDeviceDiagnosticsConfigFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 diagnosticsConfig = {};
};

struct DeviceDiagnosticsConfigCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV;

  using NativeType = VkDeviceDiagnosticsConfigCreateInfoNV;

  auto operator<=>(const DeviceDiagnosticsConfigCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DeviceDiagnosticsConfigMask flags = {};
};

struct PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES;

  using NativeType = VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures;

  auto operator<=>(const PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderZeroInitializeWorkgroupMemory = {};
};

struct PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR;

  auto operator<=>(const PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderSubgroupUniformControlFlow = {};
};

struct PhysicalDeviceRobustness2FeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceRobustness2FeaturesEXT;

  auto operator<=>(const PhysicalDeviceRobustness2FeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 robustBufferAccess2 = {};
  VkBool32 robustImageAccess2 = {};
  VkBool32 nullDescriptor = {};
};

struct PhysicalDeviceRobustness2PropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceRobustness2PropertiesEXT;

  auto operator<=>(const PhysicalDeviceRobustness2PropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceSize robustStorageBufferAccessSizeAlignment = {};
  VkDeviceSize robustUniformBufferAccessSizeAlignment = {};
};

struct PhysicalDeviceImageRobustnessFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES;

  using NativeType = VkPhysicalDeviceImageRobustnessFeatures;

  auto operator<=>(const PhysicalDeviceImageRobustnessFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 robustImageAccess = {};
};

struct PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR;

  auto operator<=>(const PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 workgroupMemoryExplicitLayout = {};
  VkBool32 workgroupMemoryExplicitLayoutScalarBlockLayout = {};
  VkBool32 workgroupMemoryExplicitLayout8BitAccess = {};
  VkBool32 workgroupMemoryExplicitLayout16BitAccess = {};
};

struct PhysicalDevice4444FormatsFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT;

  using NativeType = VkPhysicalDevice4444FormatsFeaturesEXT;

  auto operator<=>(const PhysicalDevice4444FormatsFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 formatA4R4G4B4 = {};
  VkBool32 formatA4B4G4R4 = {};
};

struct PhysicalDeviceSubpassShadingFeaturesHUAWEI {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI;

  using NativeType = VkPhysicalDeviceSubpassShadingFeaturesHUAWEI;

  auto operator<=>(const PhysicalDeviceSubpassShadingFeaturesHUAWEI &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 subpassShading = {};
};

struct PhysicalDeviceClusterCullingShaderFeaturesHUAWEI {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI;

  using NativeType = VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI;

  auto operator<=>(const PhysicalDeviceClusterCullingShaderFeaturesHUAWEI &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 clustercullingShader = {};
  VkBool32 multiviewClusterCullingShader = {};
};

struct PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_VRS_FEATURES_HUAWEI;

  using NativeType = VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI;

  auto operator<=>(const PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 clusterShadingRate = {};
};

struct BufferCopy2 {
  static constexpr StructureType structure_type = StructureType::E_BUFFER_COPY_2;

  using NativeType = VkBufferCopy2;

  auto operator<=>(const BufferCopy2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceSize srcOffset = {};
  VkDeviceSize dstOffset = {};
  VkDeviceSize size = {};
};

struct ImageCopy2 {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_COPY_2;

  using NativeType = VkImageCopy2;

  auto operator<=>(const ImageCopy2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ImageSubresourceLayers srcSubresource = {};
  Offset3D srcOffset = {};
  ImageSubresourceLayers dstSubresource = {};
  Offset3D dstOffset = {};
  Extent3D extent = {};
};

struct ImageBlit2 {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_BLIT_2;

  using NativeType = VkImageBlit2;

  auto operator<=>(const ImageBlit2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ImageSubresourceLayers srcSubresource = {};
  Offset3D srcOffsets[2] = {};
  ImageSubresourceLayers dstSubresource = {};
  Offset3D dstOffsets[2] = {};
};

struct BufferImageCopy2 {
  static constexpr StructureType structure_type = StructureType::E_BUFFER_IMAGE_COPY_2;

  using NativeType = VkBufferImageCopy2;

  auto operator<=>(const BufferImageCopy2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceSize bufferOffset = {};
  uint32_t bufferRowLength = {};
  uint32_t bufferImageHeight = {};
  ImageSubresourceLayers imageSubresource = {};
  Offset3D imageOffset = {};
  Extent3D imageExtent = {};
};

struct ImageResolve2 {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_RESOLVE_2;

  using NativeType = VkImageResolve2;

  auto operator<=>(const ImageResolve2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ImageSubresourceLayers srcSubresource = {};
  Offset3D srcOffset = {};
  ImageSubresourceLayers dstSubresource = {};
  Offset3D dstOffset = {};
  Extent3D extent = {};
};

struct CopyBufferInfo2 {
  static constexpr StructureType structure_type = StructureType::E_COPY_BUFFER_INFO_2;

  using NativeType = VkCopyBufferInfo2;

  auto operator<=>(const CopyBufferInfo2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBuffer srcBuffer = {};
  VkBuffer dstBuffer = {};
  uint32_t regionCount = {};
  BufferCopy2 *pRegions = {};
};

struct CopyImageInfo2 {
  static constexpr StructureType structure_type = StructureType::E_COPY_IMAGE_INFO_2;

  using NativeType = VkCopyImageInfo2;

  auto operator<=>(const CopyImageInfo2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkImage srcImage = {};
  ImageLayout srcImageLayout = {};
  VkImage dstImage = {};
  ImageLayout dstImageLayout = {};
  uint32_t regionCount = {};
  ImageCopy2 *pRegions = {};
};

struct BlitImageInfo2 {
  static constexpr StructureType structure_type = StructureType::E_BLIT_IMAGE_INFO_2;

  using NativeType = VkBlitImageInfo2;

  auto operator<=>(const BlitImageInfo2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkImage srcImage = {};
  ImageLayout srcImageLayout = {};
  VkImage dstImage = {};
  ImageLayout dstImageLayout = {};
  uint32_t regionCount = {};
  ImageBlit2 *pRegions = {};
  Filter filter = {};
};

struct CopyBufferToImageInfo2 {
  static constexpr StructureType structure_type = StructureType::E_COPY_BUFFER_TO_IMAGE_INFO_2;

  using NativeType = VkCopyBufferToImageInfo2;

  auto operator<=>(const CopyBufferToImageInfo2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBuffer srcBuffer = {};
  VkImage dstImage = {};
  ImageLayout dstImageLayout = {};
  uint32_t regionCount = {};
  BufferImageCopy2 *pRegions = {};
};

struct CopyImageToBufferInfo2 {
  static constexpr StructureType structure_type = StructureType::E_COPY_IMAGE_TO_BUFFER_INFO_2;

  using NativeType = VkCopyImageToBufferInfo2;

  auto operator<=>(const CopyImageToBufferInfo2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkImage srcImage = {};
  ImageLayout srcImageLayout = {};
  VkBuffer dstBuffer = {};
  uint32_t regionCount = {};
  BufferImageCopy2 *pRegions = {};
};

struct ResolveImageInfo2 {
  static constexpr StructureType structure_type = StructureType::E_RESOLVE_IMAGE_INFO_2;

  using NativeType = VkResolveImageInfo2;

  auto operator<=>(const ResolveImageInfo2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkImage srcImage = {};
  ImageLayout srcImageLayout = {};
  VkImage dstImage = {};
  ImageLayout dstImageLayout = {};
  uint32_t regionCount = {};
  ImageResolve2 *pRegions = {};
};

struct PhysicalDeviceShaderImageAtomicInt64FeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT;

  auto operator<=>(const PhysicalDeviceShaderImageAtomicInt64FeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderImageInt64Atomics = {};
  VkBool32 sparseImageInt64Atomics = {};
};

struct FragmentShadingRateAttachmentInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR;

  using NativeType = VkFragmentShadingRateAttachmentInfoKHR;

  auto operator<=>(const FragmentShadingRateAttachmentInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  AttachmentReference2 *pFragmentShadingRateAttachment = {};
  Extent2D shadingRateAttachmentTexelSize = {};
};

struct PipelineFragmentShadingRateStateCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR;

  using NativeType = VkPipelineFragmentShadingRateStateCreateInfoKHR;

  auto operator<=>(const PipelineFragmentShadingRateStateCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  Extent2D fragmentSize = {};
  FragmentShadingRateCombinerOp combinerOps[2] = {};
};

struct PhysicalDeviceFragmentShadingRateFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceFragmentShadingRateFeaturesKHR;

  auto operator<=>(const PhysicalDeviceFragmentShadingRateFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 pipelineFragmentShadingRate = {};
  VkBool32 primitiveFragmentShadingRate = {};
  VkBool32 attachmentFragmentShadingRate = {};
};

struct PhysicalDeviceFragmentShadingRatePropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR;

  using NativeType = VkPhysicalDeviceFragmentShadingRatePropertiesKHR;

  auto operator<=>(const PhysicalDeviceFragmentShadingRatePropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  Extent2D minFragmentShadingRateAttachmentTexelSize = {};
  Extent2D maxFragmentShadingRateAttachmentTexelSize = {};
  uint32_t maxFragmentShadingRateAttachmentTexelSizeAspectRatio = {};
  VkBool32 primitiveFragmentShadingRateWithMultipleViewports = {};
  VkBool32 layeredShadingRateAttachments = {};
  VkBool32 fragmentShadingRateNonTrivialCombinerOps = {};
  Extent2D maxFragmentSize = {};
  uint32_t maxFragmentSizeAspectRatio = {};
  uint32_t maxFragmentShadingRateCoverageSamples = {};
  SampleCountMaskBits maxFragmentShadingRateRasterizationSamples = {};
  VkBool32 fragmentShadingRateWithShaderDepthStencilWrites = {};
  VkBool32 fragmentShadingRateWithSampleMask = {};
  VkBool32 fragmentShadingRateWithShaderSampleMask = {};
  VkBool32 fragmentShadingRateWithConservativeRasterization = {};
  VkBool32 fragmentShadingRateWithFragmentShaderInterlock = {};
  VkBool32 fragmentShadingRateWithCustomSampleLocations = {};
  VkBool32 fragmentShadingRateStrictMultiplyCombiner = {};
};

struct PhysicalDeviceFragmentShadingRateKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR;

  using NativeType = VkPhysicalDeviceFragmentShadingRateKHR;

  auto operator<=>(const PhysicalDeviceFragmentShadingRateKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  SampleCountMask sampleCounts = {};
  Extent2D fragmentSize = {};
};

struct PhysicalDeviceShaderTerminateInvocationFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES;

  using NativeType = VkPhysicalDeviceShaderTerminateInvocationFeatures;

  auto operator<=>(const PhysicalDeviceShaderTerminateInvocationFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderTerminateInvocation = {};
};

struct PhysicalDeviceFragmentShadingRateEnumsFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV;

  using NativeType = VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV;

  auto operator<=>(const PhysicalDeviceFragmentShadingRateEnumsFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 fragmentShadingRateEnums = {};
  VkBool32 supersampleFragmentShadingRates = {};
  VkBool32 noInvocationFragmentShadingRates = {};
};

struct PhysicalDeviceFragmentShadingRateEnumsPropertiesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV;

  using NativeType = VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV;

  auto operator<=>(const PhysicalDeviceFragmentShadingRateEnumsPropertiesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  SampleCountMaskBits maxFragmentShadingRateInvocationCount = {};
};

struct PipelineFragmentShadingRateEnumStateCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV;

  using NativeType = VkPipelineFragmentShadingRateEnumStateCreateInfoNV;

  auto operator<=>(const PipelineFragmentShadingRateEnumStateCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  FragmentShadingRateType shadingRateType = {};
  FragmentShadingRate shadingRate = {};
  FragmentShadingRateCombinerOp combinerOps[2] = {};
};

struct AccelerationStructureBuildSizesInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR;

  using NativeType = VkAccelerationStructureBuildSizesInfoKHR;

  auto operator<=>(const AccelerationStructureBuildSizesInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceSize accelerationStructureSize = {};
  VkDeviceSize updateScratchSize = {};
  VkDeviceSize buildScratchSize = {};
};

struct PhysicalDeviceImage2DViewOf3DFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceImage2DViewOf3DFeaturesEXT;

  auto operator<=>(const PhysicalDeviceImage2DViewOf3DFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 image2DViewOf3D = {};
  VkBool32 sampler2DViewOf3D = {};
};

struct PhysicalDeviceImageSlicedViewOf3DFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT;

  auto operator<=>(const PhysicalDeviceImageSlicedViewOf3DFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 imageSlicedViewOf3D = {};
};

struct PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT;

  auto operator<=>(const PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 attachmentFeedbackLoopDynamicState = {};
};

struct PhysicalDeviceLegacyVertexAttributesFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT;

  auto operator<=>(const PhysicalDeviceLegacyVertexAttributesFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 legacyVertexAttributes = {};
};

struct PhysicalDeviceLegacyVertexAttributesPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT;

  auto operator<=>(const PhysicalDeviceLegacyVertexAttributesPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 nativeUnalignedPerformance = {};
};

struct PhysicalDeviceMutableDescriptorTypeFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT;

  auto operator<=>(const PhysicalDeviceMutableDescriptorTypeFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 mutableDescriptorType = {};
};

struct MutableDescriptorTypeListEXT {

  using NativeType = VkMutableDescriptorTypeListEXT;

  auto operator<=>(const MutableDescriptorTypeListEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t descriptorTypeCount = {};
  DescriptorType *pDescriptorTypes = {};
};

struct MutableDescriptorTypeCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT;

  using NativeType = VkMutableDescriptorTypeCreateInfoEXT;

  auto operator<=>(const MutableDescriptorTypeCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t mutableDescriptorTypeListCount = {};
  MutableDescriptorTypeListEXT *pMutableDescriptorTypeLists = {};
};

struct PhysicalDeviceDepthClipControlFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceDepthClipControlFeaturesEXT;

  auto operator<=>(const PhysicalDeviceDepthClipControlFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 depthClipControl = {};
};

struct PipelineViewportDepthClipControlCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT;

  using NativeType = VkPipelineViewportDepthClipControlCreateInfoEXT;

  auto operator<=>(const PipelineViewportDepthClipControlCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 negativeOneToOne = {};
};

struct PhysicalDeviceVertexInputDynamicStateFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT;

  auto operator<=>(const PhysicalDeviceVertexInputDynamicStateFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 vertexInputDynamicState = {};
};

struct PhysicalDeviceExternalMemoryRDMAFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV;

  using NativeType = VkPhysicalDeviceExternalMemoryRDMAFeaturesNV;

  auto operator<=>(const PhysicalDeviceExternalMemoryRDMAFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 externalMemoryRDMA = {};
};

struct PhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_RELAXED_EXTENDED_INSTRUCTION_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR;

  auto operator<=>(const PhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderRelaxedExtendedInstruction = {};
};

struct VertexInputBindingDescription2EXT {
  static constexpr StructureType structure_type = StructureType::E_VERTEX_INPUT_BINDING_DESCRIPTION_2_EXT;

  using NativeType = VkVertexInputBindingDescription2EXT;

  auto operator<=>(const VertexInputBindingDescription2EXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t binding = {};
  uint32_t stride = {};
  VertexInputRate inputRate = {};
  uint32_t divisor = {};
};

struct VertexInputAttributeDescription2EXT {
  static constexpr StructureType structure_type = StructureType::E_VERTEX_INPUT_ATTRIBUTE_DESCRIPTION_2_EXT;

  using NativeType = VkVertexInputAttributeDescription2EXT;

  auto operator<=>(const VertexInputAttributeDescription2EXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t location = {};
  uint32_t binding = {};
  Format format = {};
  uint32_t offset = {};
};

struct PhysicalDeviceColorWriteEnableFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceColorWriteEnableFeaturesEXT;

  auto operator<=>(const PhysicalDeviceColorWriteEnableFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 colorWriteEnable = {};
};

struct PipelineColorWriteCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_COLOR_WRITE_CREATE_INFO_EXT;

  using NativeType = VkPipelineColorWriteCreateInfoEXT;

  auto operator<=>(const PipelineColorWriteCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t attachmentCount = {};
  VkBool32 *pColorWriteEnables = {};
};

struct MemoryBarrier2 {
  static constexpr StructureType structure_type = StructureType::E_MEMORY_BARRIER_2;

  using NativeType = VkMemoryBarrier2;

  auto operator<=>(const MemoryBarrier2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineStageMask2 srcStageMask = {};
  AccessMask2 srcAccessMask = {};
  PipelineStageMask2 dstStageMask = {};
  AccessMask2 dstAccessMask = {};
};

struct ImageMemoryBarrier2 {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_MEMORY_BARRIER_2;

  using NativeType = VkImageMemoryBarrier2;

  auto operator<=>(const ImageMemoryBarrier2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineStageMask2 srcStageMask = {};
  AccessMask2 srcAccessMask = {};
  PipelineStageMask2 dstStageMask = {};
  AccessMask2 dstAccessMask = {};
  ImageLayout oldLayout = {};
  ImageLayout newLayout = {};
  uint32_t srcQueueFamilyIndex = {};
  uint32_t dstQueueFamilyIndex = {};
  VkImage image = {};
  ImageSubresourceRange subresourceRange = {};
};

struct BufferMemoryBarrier2 {
  static constexpr StructureType structure_type = StructureType::E_BUFFER_MEMORY_BARRIER_2;

  using NativeType = VkBufferMemoryBarrier2;

  auto operator<=>(const BufferMemoryBarrier2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineStageMask2 srcStageMask = {};
  AccessMask2 srcAccessMask = {};
  PipelineStageMask2 dstStageMask = {};
  AccessMask2 dstAccessMask = {};
  uint32_t srcQueueFamilyIndex = {};
  uint32_t dstQueueFamilyIndex = {};
  VkBuffer buffer = {};
  VkDeviceSize offset = {};
  VkDeviceSize size = {};
};

struct DependencyInfo {
  static constexpr StructureType structure_type = StructureType::E_DEPENDENCY_INFO;

  using NativeType = VkDependencyInfo;

  auto operator<=>(const DependencyInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DependencyMask dependencyFlags = {};
  uint32_t memoryBarrierCount = {};
  MemoryBarrier2 *pMemoryBarriers = {};
  uint32_t bufferMemoryBarrierCount = {};
  BufferMemoryBarrier2 *pBufferMemoryBarriers = {};
  uint32_t imageMemoryBarrierCount = {};
  ImageMemoryBarrier2 *pImageMemoryBarriers = {};
};

struct SemaphoreSubmitInfo {
  static constexpr StructureType structure_type = StructureType::E_SEMAPHORE_SUBMIT_INFO;

  using NativeType = VkSemaphoreSubmitInfo;

  auto operator<=>(const SemaphoreSubmitInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkSemaphore semaphore = {};
  uint64_t value = {};
  PipelineStageMask2 stageMask = {};
  uint32_t deviceIndex = {};
};

struct CommandBufferSubmitInfo {
  static constexpr StructureType structure_type = StructureType::E_COMMAND_BUFFER_SUBMIT_INFO;

  using NativeType = VkCommandBufferSubmitInfo;

  auto operator<=>(const CommandBufferSubmitInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkCommandBuffer commandBuffer = {};
  uint32_t deviceMask = {};
};

struct SubmitInfo2 {
  static constexpr StructureType structure_type = StructureType::E_SUBMIT_INFO_2;

  using NativeType = VkSubmitInfo2;

  auto operator<=>(const SubmitInfo2 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  SubmitMask flags = {};
  uint32_t waitSemaphoreInfoCount = {};
  SemaphoreSubmitInfo *pWaitSemaphoreInfos = {};
  uint32_t commandBufferInfoCount = {};
  CommandBufferSubmitInfo *pCommandBufferInfos = {};
  uint32_t signalSemaphoreInfoCount = {};
  SemaphoreSubmitInfo *pSignalSemaphoreInfos = {};
};

struct QueueFamilyCheckpointProperties2NV {
  static constexpr StructureType structure_type = StructureType::E_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV;

  using NativeType = VkQueueFamilyCheckpointProperties2NV;

  auto operator<=>(const QueueFamilyCheckpointProperties2NV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineStageMask2 checkpointExecutionStageMask = {};
};

struct CheckpointData2NV {
  static constexpr StructureType structure_type = StructureType::E_CHECKPOINT_DATA_2_NV;

  using NativeType = VkCheckpointData2NV;

  auto operator<=>(const CheckpointData2NV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineStageMask2 stage = {};
  void *pCheckpointMarker = {};
};

struct PhysicalDeviceSynchronization2Features {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES;

  using NativeType = VkPhysicalDeviceSynchronization2Features;

  auto operator<=>(const PhysicalDeviceSynchronization2Features &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 synchronization2 = {};
};

struct PhysicalDeviceHostImageCopyFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceHostImageCopyFeaturesEXT;

  auto operator<=>(const PhysicalDeviceHostImageCopyFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 hostImageCopy = {};
};

struct PhysicalDeviceHostImageCopyPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceHostImageCopyPropertiesEXT;

  auto operator<=>(const PhysicalDeviceHostImageCopyPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t copySrcLayoutCount = {};
  ImageLayout *pCopySrcLayouts = {};
  uint32_t copyDstLayoutCount = {};
  ImageLayout *pCopyDstLayouts = {};
  uint8_t optimalTilingLayoutUUID[VK_UUID_SIZE] = {};
  VkBool32 identicalMemoryTypeRequirements = {};
};

struct MemoryToImageCopyEXT {
  static constexpr StructureType structure_type = StructureType::E_MEMORY_TO_IMAGE_COPY_EXT;

  using NativeType = VkMemoryToImageCopyEXT;

  auto operator<=>(const MemoryToImageCopyEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  void *pHostPointer = {};
  uint32_t memoryRowLength = {};
  uint32_t memoryImageHeight = {};
  ImageSubresourceLayers imageSubresource = {};
  Offset3D imageOffset = {};
  Extent3D imageExtent = {};
};

struct ImageToMemoryCopyEXT {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_TO_MEMORY_COPY_EXT;

  using NativeType = VkImageToMemoryCopyEXT;

  auto operator<=>(const ImageToMemoryCopyEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  void *pHostPointer = {};
  uint32_t memoryRowLength = {};
  uint32_t memoryImageHeight = {};
  ImageSubresourceLayers imageSubresource = {};
  Offset3D imageOffset = {};
  Extent3D imageExtent = {};
};

struct CopyMemoryToImageInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_COPY_MEMORY_TO_IMAGE_INFO_EXT;

  using NativeType = VkCopyMemoryToImageInfoEXT;

  auto operator<=>(const CopyMemoryToImageInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  HostImageCopyMask flags = {};
  VkImage dstImage = {};
  ImageLayout dstImageLayout = {};
  uint32_t regionCount = {};
  MemoryToImageCopyEXT *pRegions = {};
};

struct CopyImageToMemoryInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_COPY_IMAGE_TO_MEMORY_INFO_EXT;

  using NativeType = VkCopyImageToMemoryInfoEXT;

  auto operator<=>(const CopyImageToMemoryInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  HostImageCopyMask flags = {};
  VkImage srcImage = {};
  ImageLayout srcImageLayout = {};
  uint32_t regionCount = {};
  ImageToMemoryCopyEXT *pRegions = {};
};

struct CopyImageToImageInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_COPY_IMAGE_TO_IMAGE_INFO_EXT;

  using NativeType = VkCopyImageToImageInfoEXT;

  auto operator<=>(const CopyImageToImageInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  HostImageCopyMask flags = {};
  VkImage srcImage = {};
  ImageLayout srcImageLayout = {};
  VkImage dstImage = {};
  ImageLayout dstImageLayout = {};
  uint32_t regionCount = {};
  ImageCopy2 *pRegions = {};
};

struct HostImageLayoutTransitionInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_HOST_IMAGE_LAYOUT_TRANSITION_INFO_EXT;

  using NativeType = VkHostImageLayoutTransitionInfoEXT;

  auto operator<=>(const HostImageLayoutTransitionInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkImage image = {};
  ImageLayout oldLayout = {};
  ImageLayout newLayout = {};
  ImageSubresourceRange subresourceRange = {};
};

struct SubresourceHostMemcpySizeEXT {
  static constexpr StructureType structure_type = StructureType::E_SUBRESOURCE_HOST_MEMCPY_SIZE_EXT;

  using NativeType = VkSubresourceHostMemcpySizeEXT;

  auto operator<=>(const SubresourceHostMemcpySizeEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceSize size = {};
};

struct HostImageCopyDevicePerformanceQueryEXT {
  static constexpr StructureType structure_type = StructureType::E_HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY_EXT;

  using NativeType = VkHostImageCopyDevicePerformanceQueryEXT;

  auto operator<=>(const HostImageCopyDevicePerformanceQueryEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 optimalDeviceAccess = {};
  VkBool32 identicalMemoryLayout = {};
};

struct PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT;

  using NativeType = VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT;

  auto operator<=>(const PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 primitivesGeneratedQuery = {};
  VkBool32 primitivesGeneratedQueryWithRasterizerDiscard = {};
  VkBool32 primitivesGeneratedQueryWithNonZeroStreams = {};
};

struct PhysicalDeviceLegacyDitheringFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceLegacyDitheringFeaturesEXT;

  auto operator<=>(const PhysicalDeviceLegacyDitheringFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 legacyDithering = {};
};

struct PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT;

  auto operator<=>(const PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 multisampledRenderToSingleSampled = {};
};

struct SubpassResolvePerformanceQueryEXT {
  static constexpr StructureType structure_type = StructureType::E_SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT;

  using NativeType = VkSubpassResolvePerformanceQueryEXT;

  auto operator<=>(const SubpassResolvePerformanceQueryEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 optimal = {};
};

struct MultisampledRenderToSingleSampledInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT;

  using NativeType = VkMultisampledRenderToSingleSampledInfoEXT;

  auto operator<=>(const MultisampledRenderToSingleSampledInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 multisampledRenderToSingleSampledEnable = {};
  SampleCountMaskBits rasterizationSamples = {};
};

struct PhysicalDevicePipelineProtectedAccessFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT;

  using NativeType = VkPhysicalDevicePipelineProtectedAccessFeaturesEXT;

  auto operator<=>(const PhysicalDevicePipelineProtectedAccessFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 pipelineProtectedAccess = {};
};

struct QueueFamilyVideoPropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_QUEUE_FAMILY_VIDEO_PROPERTIES_KHR;

  using NativeType = VkQueueFamilyVideoPropertiesKHR;

  auto operator<=>(const QueueFamilyVideoPropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoCodecOperationMask videoCodecOperations = {};
};

struct QueueFamilyQueryResultStatusPropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_QUEUE_FAMILY_QUERY_RESULT_STATUS_PROPERTIES_KHR;

  using NativeType = VkQueueFamilyQueryResultStatusPropertiesKHR;

  auto operator<=>(const QueueFamilyQueryResultStatusPropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 queryResultStatusSupport = {};
};

struct VideoProfileInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_PROFILE_INFO_KHR;

  using NativeType = VkVideoProfileInfoKHR;

  auto operator<=>(const VideoProfileInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoCodecOperationMaskBits videoCodecOperation = {};
  VideoChromaSubsamplingMask chromaSubsampling = {};
  VideoComponentBitDepthMask lumaBitDepth = {};
  VideoComponentBitDepthMask chromaBitDepth = {};
};

struct VideoProfileListInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_PROFILE_LIST_INFO_KHR;

  using NativeType = VkVideoProfileListInfoKHR;

  auto operator<=>(const VideoProfileListInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t profileCount = {};
  VideoProfileInfoKHR *pProfiles = {};
};

struct PhysicalDeviceVideoFormatInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_VIDEO_FORMAT_INFO_KHR;

  using NativeType = VkPhysicalDeviceVideoFormatInfoKHR;

  auto operator<=>(const PhysicalDeviceVideoFormatInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ImageUsageMask imageUsage = {};
};

struct VideoFormatPropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_FORMAT_PROPERTIES_KHR;

  using NativeType = VkVideoFormatPropertiesKHR;

  auto operator<=>(const VideoFormatPropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  Format format = {};
  ComponentMapping componentMapping = {};
  ImageCreateMask imageCreateFlags = {};
  ImageType imageType = {};
  ImageTiling imageTiling = {};
  ImageUsageMask imageUsageFlags = {};
};

struct VideoCapabilitiesKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_CAPABILITIES_KHR;

  using NativeType = VkVideoCapabilitiesKHR;

  auto operator<=>(const VideoCapabilitiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoCapabilityMask flags = {};
  VkDeviceSize minBitstreamBufferOffsetAlignment = {};
  VkDeviceSize minBitstreamBufferSizeAlignment = {};
  Extent2D pictureAccessGranularity = {};
  Extent2D minCodedExtent = {};
  Extent2D maxCodedExtent = {};
  uint32_t maxDpbSlots = {};
  uint32_t maxActiveReferencePictures = {};
  ExtensionProperties stdHeaderVersion = {};
};

struct VideoSessionMemoryRequirementsKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_SESSION_MEMORY_REQUIREMENTS_KHR;

  using NativeType = VkVideoSessionMemoryRequirementsKHR;

  auto operator<=>(const VideoSessionMemoryRequirementsKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t memoryBindIndex = {};
  MemoryRequirements memoryRequirements = {};
};

struct BindVideoSessionMemoryInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_BIND_VIDEO_SESSION_MEMORY_INFO_KHR;

  using NativeType = VkBindVideoSessionMemoryInfoKHR;

  auto operator<=>(const BindVideoSessionMemoryInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t memoryBindIndex = {};
  VkDeviceMemory memory = {};
  VkDeviceSize memoryOffset = {};
  VkDeviceSize memorySize = {};
};

struct VideoPictureResourceInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_PICTURE_RESOURCE_INFO_KHR;

  using NativeType = VkVideoPictureResourceInfoKHR;

  auto operator<=>(const VideoPictureResourceInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  Offset2D codedOffset = {};
  Extent2D codedExtent = {};
  uint32_t baseArrayLayer = {};
  VkImageView imageViewBinding = {};
};

struct VideoReferenceSlotInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_REFERENCE_SLOT_INFO_KHR;

  using NativeType = VkVideoReferenceSlotInfoKHR;

  auto operator<=>(const VideoReferenceSlotInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  int32_t slotIndex = {};
  VideoPictureResourceInfoKHR *pPictureResource = {};
};

struct VideoDecodeCapabilitiesKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_DECODE_CAPABILITIES_KHR;

  using NativeType = VkVideoDecodeCapabilitiesKHR;

  auto operator<=>(const VideoDecodeCapabilitiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoDecodeCapabilityMask flags = {};
};

struct VideoDecodeUsageInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_DECODE_USAGE_INFO_KHR;

  using NativeType = VkVideoDecodeUsageInfoKHR;

  auto operator<=>(const VideoDecodeUsageInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoDecodeUsageMask videoUsageHints = {};
};

struct VideoDecodeInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_DECODE_INFO_KHR;

  using NativeType = VkVideoDecodeInfoKHR;

  auto operator<=>(const VideoDecodeInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoDecodeMask flags = {};
  VkBuffer srcBuffer = {};
  VkDeviceSize srcBufferOffset = {};
  VkDeviceSize srcBufferRange = {};
  VideoPictureResourceInfoKHR dstPictureResource = {};
  VideoReferenceSlotInfoKHR *pSetupReferenceSlot = {};
  uint32_t referenceSlotCount = {};
  VideoReferenceSlotInfoKHR *pReferenceSlots = {};
};

struct PhysicalDeviceVideoMaintenance1FeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceVideoMaintenance1FeaturesKHR;

  auto operator<=>(const PhysicalDeviceVideoMaintenance1FeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 videoMaintenance1 = {};
};

struct VideoInlineQueryInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_INLINE_QUERY_INFO_KHR;

  using NativeType = VkVideoInlineQueryInfoKHR;

  auto operator<=>(const VideoInlineQueryInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkQueryPool queryPool = {};
  uint32_t firstQuery = {};
  uint32_t queryCount = {};
};

struct VideoDecodeH264ProfileInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_DECODE_H264_PROFILE_INFO_KHR;

  using NativeType = VkVideoDecodeH264ProfileInfoKHR;

  auto operator<=>(const VideoDecodeH264ProfileInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  StdVideoH264ProfileIdc stdProfileIdc = {};
  VideoDecodeH264PictureLayoutMaskBits pictureLayout = {};
};

struct VideoDecodeH264CapabilitiesKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_DECODE_H264_CAPABILITIES_KHR;

  using NativeType = VkVideoDecodeH264CapabilitiesKHR;

  auto operator<=>(const VideoDecodeH264CapabilitiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  StdVideoH264LevelIdc maxLevelIdc = {};
  Offset2D fieldOffsetGranularity = {};
};

struct VideoDecodeH264SessionParametersAddInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR;

  using NativeType = VkVideoDecodeH264SessionParametersAddInfoKHR;

  auto operator<=>(const VideoDecodeH264SessionParametersAddInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t stdSPSCount = {};
  StdVideoH264SequenceParameterSet *pStdSPSs = {};
  uint32_t stdPPSCount = {};
  StdVideoH264PictureParameterSet *pStdPPSs = {};
};

struct VideoDecodeH264SessionParametersCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR;

  using NativeType = VkVideoDecodeH264SessionParametersCreateInfoKHR;

  auto operator<=>(const VideoDecodeH264SessionParametersCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxStdSPSCount = {};
  uint32_t maxStdPPSCount = {};
  VideoDecodeH264SessionParametersAddInfoKHR *pParametersAddInfo = {};
};

struct VideoDecodeH264PictureInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_DECODE_H264_PICTURE_INFO_KHR;

  using NativeType = VkVideoDecodeH264PictureInfoKHR;

  auto operator<=>(const VideoDecodeH264PictureInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  StdVideoDecodeH264PictureInfo *pStdPictureInfo = {};
  uint32_t sliceCount = {};
  uint32_t *pSliceOffsets = {};
};

struct VideoDecodeH264DpbSlotInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_DECODE_H264_DPB_SLOT_INFO_KHR;

  using NativeType = VkVideoDecodeH264DpbSlotInfoKHR;

  auto operator<=>(const VideoDecodeH264DpbSlotInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  StdVideoDecodeH264ReferenceInfo *pStdReferenceInfo = {};
};

struct VideoDecodeH265ProfileInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_DECODE_H265_PROFILE_INFO_KHR;

  using NativeType = VkVideoDecodeH265ProfileInfoKHR;

  auto operator<=>(const VideoDecodeH265ProfileInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  StdVideoH265ProfileIdc stdProfileIdc = {};
};

struct VideoDecodeH265CapabilitiesKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_DECODE_H265_CAPABILITIES_KHR;

  using NativeType = VkVideoDecodeH265CapabilitiesKHR;

  auto operator<=>(const VideoDecodeH265CapabilitiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  StdVideoH265LevelIdc maxLevelIdc = {};
};

struct VideoDecodeH265SessionParametersAddInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR;

  using NativeType = VkVideoDecodeH265SessionParametersAddInfoKHR;

  auto operator<=>(const VideoDecodeH265SessionParametersAddInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t stdVPSCount = {};
  StdVideoH265VideoParameterSet *pStdVPSs = {};
  uint32_t stdSPSCount = {};
  StdVideoH265SequenceParameterSet *pStdSPSs = {};
  uint32_t stdPPSCount = {};
  StdVideoH265PictureParameterSet *pStdPPSs = {};
};

struct VideoDecodeH265SessionParametersCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR;

  using NativeType = VkVideoDecodeH265SessionParametersCreateInfoKHR;

  auto operator<=>(const VideoDecodeH265SessionParametersCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxStdVPSCount = {};
  uint32_t maxStdSPSCount = {};
  uint32_t maxStdPPSCount = {};
  VideoDecodeH265SessionParametersAddInfoKHR *pParametersAddInfo = {};
};

struct VideoDecodeH265PictureInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_DECODE_H265_PICTURE_INFO_KHR;

  using NativeType = VkVideoDecodeH265PictureInfoKHR;

  auto operator<=>(const VideoDecodeH265PictureInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  StdVideoDecodeH265PictureInfo *pStdPictureInfo = {};
  uint32_t sliceSegmentCount = {};
  uint32_t *pSliceSegmentOffsets = {};
};

struct VideoDecodeH265DpbSlotInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_DECODE_H265_DPB_SLOT_INFO_KHR;

  using NativeType = VkVideoDecodeH265DpbSlotInfoKHR;

  auto operator<=>(const VideoDecodeH265DpbSlotInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  StdVideoDecodeH265ReferenceInfo *pStdReferenceInfo = {};
};

struct VideoDecodeAV1ProfileInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_DECODE_AV1_PROFILE_INFO_KHR;

  using NativeType = VkVideoDecodeAV1ProfileInfoKHR;

  auto operator<=>(const VideoDecodeAV1ProfileInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  StdVideoAV1Profile stdProfile = {};
  VkBool32 filmGrainSupport = {};
};

struct VideoDecodeAV1CapabilitiesKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_DECODE_AV1_CAPABILITIES_KHR;

  using NativeType = VkVideoDecodeAV1CapabilitiesKHR;

  auto operator<=>(const VideoDecodeAV1CapabilitiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  StdVideoAV1Level maxLevel = {};
};

struct VideoDecodeAV1SessionParametersCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_DECODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR;

  using NativeType = VkVideoDecodeAV1SessionParametersCreateInfoKHR;

  auto operator<=>(const VideoDecodeAV1SessionParametersCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  StdVideoAV1SequenceHeader *pStdSequenceHeader = {};
};

struct VideoDecodeAV1PictureInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_DECODE_AV1_PICTURE_INFO_KHR;

  using NativeType = VkVideoDecodeAV1PictureInfoKHR;

  auto operator<=>(const VideoDecodeAV1PictureInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  StdVideoDecodeAV1PictureInfo *pStdPictureInfo = {};
  int32_t referenceNameSlotIndices[VK_MAX_VIDEO_AV1_REFERENCES_PER_FRAME_KHR] = {};
  uint32_t frameHeaderOffset = {};
  uint32_t tileCount = {};
  uint32_t *pTileOffsets = {};
  uint32_t *pTileSizes = {};
};

struct VideoDecodeAV1DpbSlotInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_DECODE_AV1_DPB_SLOT_INFO_KHR;

  using NativeType = VkVideoDecodeAV1DpbSlotInfoKHR;

  auto operator<=>(const VideoDecodeAV1DpbSlotInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  StdVideoDecodeAV1ReferenceInfo *pStdReferenceInfo = {};
};

struct VideoSessionCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_SESSION_CREATE_INFO_KHR;

  using NativeType = VkVideoSessionCreateInfoKHR;

  auto operator<=>(const VideoSessionCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t queueFamilyIndex = {};
  VideoSessionCreateMask flags = {};
  VideoProfileInfoKHR *pVideoProfile = {};
  Format pictureFormat = {};
  Extent2D maxCodedExtent = {};
  Format referencePictureFormat = {};
  uint32_t maxDpbSlots = {};
  uint32_t maxActiveReferencePictures = {};
  ExtensionProperties *pStdHeaderVersion = {};
};

struct VideoSessionParametersCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_SESSION_PARAMETERS_CREATE_INFO_KHR;

  using NativeType = VkVideoSessionParametersCreateInfoKHR;

  auto operator<=>(const VideoSessionParametersCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoSessionParametersCreateMask flags = {};
  VkVideoSessionParametersKHR videoSessionParametersTemplate = {};
  VkVideoSessionKHR videoSession = {};
};

struct VideoSessionParametersUpdateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_SESSION_PARAMETERS_UPDATE_INFO_KHR;

  using NativeType = VkVideoSessionParametersUpdateInfoKHR;

  auto operator<=>(const VideoSessionParametersUpdateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t updateSequenceCount = {};
};

struct VideoEncodeSessionParametersGetInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_SESSION_PARAMETERS_GET_INFO_KHR;

  using NativeType = VkVideoEncodeSessionParametersGetInfoKHR;

  auto operator<=>(const VideoEncodeSessionParametersGetInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkVideoSessionParametersKHR videoSessionParameters = {};
};

struct VideoEncodeSessionParametersFeedbackInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_SESSION_PARAMETERS_FEEDBACK_INFO_KHR;

  using NativeType = VkVideoEncodeSessionParametersFeedbackInfoKHR;

  auto operator<=>(const VideoEncodeSessionParametersFeedbackInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 hasOverrides = {};
};

struct VideoBeginCodingInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_BEGIN_CODING_INFO_KHR;

  using NativeType = VkVideoBeginCodingInfoKHR;

  auto operator<=>(const VideoBeginCodingInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoBeginCodingMask flags = {};
  VkVideoSessionKHR videoSession = {};
  VkVideoSessionParametersKHR videoSessionParameters = {};
  uint32_t referenceSlotCount = {};
  VideoReferenceSlotInfoKHR *pReferenceSlots = {};
};

struct VideoEndCodingInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_END_CODING_INFO_KHR;

  using NativeType = VkVideoEndCodingInfoKHR;

  auto operator<=>(const VideoEndCodingInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoEndCodingMask flags = {};
};

struct VideoCodingControlInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_CODING_CONTROL_INFO_KHR;

  using NativeType = VkVideoCodingControlInfoKHR;

  auto operator<=>(const VideoCodingControlInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoCodingControlMask flags = {};
};

struct VideoEncodeUsageInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_USAGE_INFO_KHR;

  using NativeType = VkVideoEncodeUsageInfoKHR;

  auto operator<=>(const VideoEncodeUsageInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoEncodeUsageMask videoUsageHints = {};
  VideoEncodeContentMask videoContentHints = {};
  VideoEncodeTuningMode tuningMode = {};
};

struct VideoEncodeInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_INFO_KHR;

  using NativeType = VkVideoEncodeInfoKHR;

  auto operator<=>(const VideoEncodeInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoEncodeMask flags = {};
  VkBuffer dstBuffer = {};
  VkDeviceSize dstBufferOffset = {};
  VkDeviceSize dstBufferRange = {};
  VideoPictureResourceInfoKHR srcPictureResource = {};
  VideoReferenceSlotInfoKHR *pSetupReferenceSlot = {};
  uint32_t referenceSlotCount = {};
  VideoReferenceSlotInfoKHR *pReferenceSlots = {};
  uint32_t precedingExternallyEncodedBytes = {};
};

struct QueryPoolVideoEncodeFeedbackCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_QUERY_POOL_VIDEO_ENCODE_FEEDBACK_CREATE_INFO_KHR;

  using NativeType = VkQueryPoolVideoEncodeFeedbackCreateInfoKHR;

  auto operator<=>(const QueryPoolVideoEncodeFeedbackCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoEncodeFeedbackMask encodeFeedbackFlags = {};
};

struct VideoEncodeQualityLevelInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR;

  using NativeType = VkVideoEncodeQualityLevelInfoKHR;

  auto operator<=>(const VideoEncodeQualityLevelInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t qualityLevel = {};
};

struct PhysicalDeviceVideoEncodeQualityLevelInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR;

  using NativeType = VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR;

  auto operator<=>(const PhysicalDeviceVideoEncodeQualityLevelInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoProfileInfoKHR *pVideoProfile = {};
  uint32_t qualityLevel = {};
};

struct VideoEncodeQualityLevelPropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_QUALITY_LEVEL_PROPERTIES_KHR;

  using NativeType = VkVideoEncodeQualityLevelPropertiesKHR;

  auto operator<=>(const VideoEncodeQualityLevelPropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoEncodeRateControlModeMaskBits preferredRateControlMode = {};
  uint32_t preferredRateControlLayerCount = {};
};

struct VideoEncodeRateControlLayerInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_RATE_CONTROL_LAYER_INFO_KHR;

  using NativeType = VkVideoEncodeRateControlLayerInfoKHR;

  auto operator<=>(const VideoEncodeRateControlLayerInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint64_t averageBitrate = {};
  uint64_t maxBitrate = {};
  uint32_t frameRateNumerator = {};
  uint32_t frameRateDenominator = {};
};

struct VideoEncodeRateControlInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_RATE_CONTROL_INFO_KHR;

  using NativeType = VkVideoEncodeRateControlInfoKHR;

  auto operator<=>(const VideoEncodeRateControlInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoEncodeRateControlMask flags = {};
  VideoEncodeRateControlModeMaskBits rateControlMode = {};
  uint32_t layerCount = {};
  VideoEncodeRateControlLayerInfoKHR *pLayers = {};
  uint32_t virtualBufferSizeInMs = {};
  uint32_t initialVirtualBufferSizeInMs = {};
};

struct VideoEncodeCapabilitiesKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_CAPABILITIES_KHR;

  using NativeType = VkVideoEncodeCapabilitiesKHR;

  auto operator<=>(const VideoEncodeCapabilitiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoEncodeCapabilityMask flags = {};
  VideoEncodeRateControlModeMask rateControlModes = {};
  uint32_t maxRateControlLayers = {};
  uint64_t maxBitrate = {};
  uint32_t maxQualityLevels = {};
  Extent2D encodeInputPictureGranularity = {};
  VideoEncodeFeedbackMask supportedEncodeFeedbackFlags = {};
};

struct VideoEncodeH264CapabilitiesKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H264_CAPABILITIES_KHR;

  using NativeType = VkVideoEncodeH264CapabilitiesKHR;

  auto operator<=>(const VideoEncodeH264CapabilitiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoEncodeH264CapabilityMask flags = {};
  StdVideoH264LevelIdc maxLevelIdc = {};
  uint32_t maxSliceCount = {};
  uint32_t maxPPictureL0ReferenceCount = {};
  uint32_t maxBPictureL0ReferenceCount = {};
  uint32_t maxL1ReferenceCount = {};
  uint32_t maxTemporalLayerCount = {};
  VkBool32 expectDyadicTemporalLayerPattern = {};
  int32_t minQp = {};
  int32_t maxQp = {};
  VkBool32 prefersGopRemainingFrames = {};
  VkBool32 requiresGopRemainingFrames = {};
  VideoEncodeH264StdMask stdSyntaxFlags = {};
};

struct VideoEncodeH264QpKHR {

  using NativeType = VkVideoEncodeH264QpKHR;

  auto operator<=>(const VideoEncodeH264QpKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  int32_t qpI = {};
  int32_t qpP = {};
  int32_t qpB = {};
};

struct VideoEncodeH264QualityLevelPropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H264_QUALITY_LEVEL_PROPERTIES_KHR;

  using NativeType = VkVideoEncodeH264QualityLevelPropertiesKHR;

  auto operator<=>(const VideoEncodeH264QualityLevelPropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoEncodeH264RateControlMask preferredRateControlFlags = {};
  uint32_t preferredGopFrameCount = {};
  uint32_t preferredIdrPeriod = {};
  uint32_t preferredConsecutiveBFrameCount = {};
  uint32_t preferredTemporalLayerCount = {};
  VideoEncodeH264QpKHR preferredConstantQp = {};
  uint32_t preferredMaxL0ReferenceCount = {};
  uint32_t preferredMaxL1ReferenceCount = {};
  VkBool32 preferredStdEntropyCodingModeFlag = {};
};

struct VideoEncodeH264SessionCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H264_SESSION_CREATE_INFO_KHR;

  using NativeType = VkVideoEncodeH264SessionCreateInfoKHR;

  auto operator<=>(const VideoEncodeH264SessionCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 useMaxLevelIdc = {};
  StdVideoH264LevelIdc maxLevelIdc = {};
};

struct VideoEncodeH264SessionParametersAddInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR;

  using NativeType = VkVideoEncodeH264SessionParametersAddInfoKHR;

  auto operator<=>(const VideoEncodeH264SessionParametersAddInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t stdSPSCount = {};
  StdVideoH264SequenceParameterSet *pStdSPSs = {};
  uint32_t stdPPSCount = {};
  StdVideoH264PictureParameterSet *pStdPPSs = {};
};

struct VideoEncodeH264SessionParametersCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR;

  using NativeType = VkVideoEncodeH264SessionParametersCreateInfoKHR;

  auto operator<=>(const VideoEncodeH264SessionParametersCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxStdSPSCount = {};
  uint32_t maxStdPPSCount = {};
  VideoEncodeH264SessionParametersAddInfoKHR *pParametersAddInfo = {};
};

struct VideoEncodeH264SessionParametersGetInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H264_SESSION_PARAMETERS_GET_INFO_KHR;

  using NativeType = VkVideoEncodeH264SessionParametersGetInfoKHR;

  auto operator<=>(const VideoEncodeH264SessionParametersGetInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 writeStdSPS = {};
  VkBool32 writeStdPPS = {};
  uint32_t stdSPSId = {};
  uint32_t stdPPSId = {};
};

struct VideoEncodeH264SessionParametersFeedbackInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H264_SESSION_PARAMETERS_FEEDBACK_INFO_KHR;

  using NativeType = VkVideoEncodeH264SessionParametersFeedbackInfoKHR;

  auto operator<=>(const VideoEncodeH264SessionParametersFeedbackInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 hasStdSPSOverrides = {};
  VkBool32 hasStdPPSOverrides = {};
};

struct VideoEncodeH264DpbSlotInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H264_DPB_SLOT_INFO_KHR;

  using NativeType = VkVideoEncodeH264DpbSlotInfoKHR;

  auto operator<=>(const VideoEncodeH264DpbSlotInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  StdVideoEncodeH264ReferenceInfo *pStdReferenceInfo = {};
};

struct VideoEncodeH264NaluSliceInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H264_NALU_SLICE_INFO_KHR;

  using NativeType = VkVideoEncodeH264NaluSliceInfoKHR;

  auto operator<=>(const VideoEncodeH264NaluSliceInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  int32_t constantQp = {};
  StdVideoEncodeH264SliceHeader *pStdSliceHeader = {};
};

struct VideoEncodeH264PictureInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H264_PICTURE_INFO_KHR;

  using NativeType = VkVideoEncodeH264PictureInfoKHR;

  auto operator<=>(const VideoEncodeH264PictureInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t naluSliceEntryCount = {};
  VideoEncodeH264NaluSliceInfoKHR *pNaluSliceEntries = {};
  StdVideoEncodeH264PictureInfo *pStdPictureInfo = {};
  VkBool32 generatePrefixNalu = {};
};

struct VideoEncodeH264ProfileInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H264_PROFILE_INFO_KHR;

  using NativeType = VkVideoEncodeH264ProfileInfoKHR;

  auto operator<=>(const VideoEncodeH264ProfileInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  StdVideoH264ProfileIdc stdProfileIdc = {};
};

struct VideoEncodeH264RateControlInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H264_RATE_CONTROL_INFO_KHR;

  using NativeType = VkVideoEncodeH264RateControlInfoKHR;

  auto operator<=>(const VideoEncodeH264RateControlInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoEncodeH264RateControlMask flags = {};
  uint32_t gopFrameCount = {};
  uint32_t idrPeriod = {};
  uint32_t consecutiveBFrameCount = {};
  uint32_t temporalLayerCount = {};
};

struct VideoEncodeH264FrameSizeKHR {

  using NativeType = VkVideoEncodeH264FrameSizeKHR;

  auto operator<=>(const VideoEncodeH264FrameSizeKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t frameISize = {};
  uint32_t framePSize = {};
  uint32_t frameBSize = {};
};

struct VideoEncodeH264GopRemainingFrameInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H264_GOP_REMAINING_FRAME_INFO_KHR;

  using NativeType = VkVideoEncodeH264GopRemainingFrameInfoKHR;

  auto operator<=>(const VideoEncodeH264GopRemainingFrameInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 useGopRemainingFrames = {};
  uint32_t gopRemainingI = {};
  uint32_t gopRemainingP = {};
  uint32_t gopRemainingB = {};
};

struct VideoEncodeH264RateControlLayerInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H264_RATE_CONTROL_LAYER_INFO_KHR;

  using NativeType = VkVideoEncodeH264RateControlLayerInfoKHR;

  auto operator<=>(const VideoEncodeH264RateControlLayerInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 useMinQp = {};
  VideoEncodeH264QpKHR minQp = {};
  VkBool32 useMaxQp = {};
  VideoEncodeH264QpKHR maxQp = {};
  VkBool32 useMaxFrameSize = {};
  VideoEncodeH264FrameSizeKHR maxFrameSize = {};
};

struct VideoEncodeH265CapabilitiesKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H265_CAPABILITIES_KHR;

  using NativeType = VkVideoEncodeH265CapabilitiesKHR;

  auto operator<=>(const VideoEncodeH265CapabilitiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoEncodeH265CapabilityMask flags = {};
  StdVideoH265LevelIdc maxLevelIdc = {};
  uint32_t maxSliceSegmentCount = {};
  Extent2D maxTiles = {};
  VideoEncodeH265CtbSizeMask ctbSizes = {};
  VideoEncodeH265TransformBlockSizeMask transformBlockSizes = {};
  uint32_t maxPPictureL0ReferenceCount = {};
  uint32_t maxBPictureL0ReferenceCount = {};
  uint32_t maxL1ReferenceCount = {};
  uint32_t maxSubLayerCount = {};
  VkBool32 expectDyadicTemporalSubLayerPattern = {};
  int32_t minQp = {};
  int32_t maxQp = {};
  VkBool32 prefersGopRemainingFrames = {};
  VkBool32 requiresGopRemainingFrames = {};
  VideoEncodeH265StdMask stdSyntaxFlags = {};
};

struct VideoEncodeH265QpKHR {

  using NativeType = VkVideoEncodeH265QpKHR;

  auto operator<=>(const VideoEncodeH265QpKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  int32_t qpI = {};
  int32_t qpP = {};
  int32_t qpB = {};
};

struct VideoEncodeH265QualityLevelPropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H265_QUALITY_LEVEL_PROPERTIES_KHR;

  using NativeType = VkVideoEncodeH265QualityLevelPropertiesKHR;

  auto operator<=>(const VideoEncodeH265QualityLevelPropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoEncodeH265RateControlMask preferredRateControlFlags = {};
  uint32_t preferredGopFrameCount = {};
  uint32_t preferredIdrPeriod = {};
  uint32_t preferredConsecutiveBFrameCount = {};
  uint32_t preferredSubLayerCount = {};
  VideoEncodeH265QpKHR preferredConstantQp = {};
  uint32_t preferredMaxL0ReferenceCount = {};
  uint32_t preferredMaxL1ReferenceCount = {};
};

struct VideoEncodeH265SessionCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H265_SESSION_CREATE_INFO_KHR;

  using NativeType = VkVideoEncodeH265SessionCreateInfoKHR;

  auto operator<=>(const VideoEncodeH265SessionCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 useMaxLevelIdc = {};
  StdVideoH265LevelIdc maxLevelIdc = {};
};

struct VideoEncodeH265SessionParametersAddInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR;

  using NativeType = VkVideoEncodeH265SessionParametersAddInfoKHR;

  auto operator<=>(const VideoEncodeH265SessionParametersAddInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t stdVPSCount = {};
  StdVideoH265VideoParameterSet *pStdVPSs = {};
  uint32_t stdSPSCount = {};
  StdVideoH265SequenceParameterSet *pStdSPSs = {};
  uint32_t stdPPSCount = {};
  StdVideoH265PictureParameterSet *pStdPPSs = {};
};

struct VideoEncodeH265SessionParametersCreateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR;

  using NativeType = VkVideoEncodeH265SessionParametersCreateInfoKHR;

  auto operator<=>(const VideoEncodeH265SessionParametersCreateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxStdVPSCount = {};
  uint32_t maxStdSPSCount = {};
  uint32_t maxStdPPSCount = {};
  VideoEncodeH265SessionParametersAddInfoKHR *pParametersAddInfo = {};
};

struct VideoEncodeH265SessionParametersGetInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H265_SESSION_PARAMETERS_GET_INFO_KHR;

  using NativeType = VkVideoEncodeH265SessionParametersGetInfoKHR;

  auto operator<=>(const VideoEncodeH265SessionParametersGetInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 writeStdVPS = {};
  VkBool32 writeStdSPS = {};
  VkBool32 writeStdPPS = {};
  uint32_t stdVPSId = {};
  uint32_t stdSPSId = {};
  uint32_t stdPPSId = {};
};

struct VideoEncodeH265SessionParametersFeedbackInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H265_SESSION_PARAMETERS_FEEDBACK_INFO_KHR;

  using NativeType = VkVideoEncodeH265SessionParametersFeedbackInfoKHR;

  auto operator<=>(const VideoEncodeH265SessionParametersFeedbackInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 hasStdVPSOverrides = {};
  VkBool32 hasStdSPSOverrides = {};
  VkBool32 hasStdPPSOverrides = {};
};

struct VideoEncodeH265NaluSliceSegmentInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H265_NALU_SLICE_SEGMENT_INFO_KHR;

  using NativeType = VkVideoEncodeH265NaluSliceSegmentInfoKHR;

  auto operator<=>(const VideoEncodeH265NaluSliceSegmentInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  int32_t constantQp = {};
  StdVideoEncodeH265SliceSegmentHeader *pStdSliceSegmentHeader = {};
};

struct VideoEncodeH265PictureInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H265_PICTURE_INFO_KHR;

  using NativeType = VkVideoEncodeH265PictureInfoKHR;

  auto operator<=>(const VideoEncodeH265PictureInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t naluSliceSegmentEntryCount = {};
  VideoEncodeH265NaluSliceSegmentInfoKHR *pNaluSliceSegmentEntries = {};
  StdVideoEncodeH265PictureInfo *pStdPictureInfo = {};
};

struct VideoEncodeH265RateControlInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H265_RATE_CONTROL_INFO_KHR;

  using NativeType = VkVideoEncodeH265RateControlInfoKHR;

  auto operator<=>(const VideoEncodeH265RateControlInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VideoEncodeH265RateControlMask flags = {};
  uint32_t gopFrameCount = {};
  uint32_t idrPeriod = {};
  uint32_t consecutiveBFrameCount = {};
  uint32_t subLayerCount = {};
};

struct VideoEncodeH265FrameSizeKHR {

  using NativeType = VkVideoEncodeH265FrameSizeKHR;

  auto operator<=>(const VideoEncodeH265FrameSizeKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t frameISize = {};
  uint32_t framePSize = {};
  uint32_t frameBSize = {};
};

struct VideoEncodeH265GopRemainingFrameInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H265_GOP_REMAINING_FRAME_INFO_KHR;

  using NativeType = VkVideoEncodeH265GopRemainingFrameInfoKHR;

  auto operator<=>(const VideoEncodeH265GopRemainingFrameInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 useGopRemainingFrames = {};
  uint32_t gopRemainingI = {};
  uint32_t gopRemainingP = {};
  uint32_t gopRemainingB = {};
};

struct VideoEncodeH265RateControlLayerInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H265_RATE_CONTROL_LAYER_INFO_KHR;

  using NativeType = VkVideoEncodeH265RateControlLayerInfoKHR;

  auto operator<=>(const VideoEncodeH265RateControlLayerInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 useMinQp = {};
  VideoEncodeH265QpKHR minQp = {};
  VkBool32 useMaxQp = {};
  VideoEncodeH265QpKHR maxQp = {};
  VkBool32 useMaxFrameSize = {};
  VideoEncodeH265FrameSizeKHR maxFrameSize = {};
};

struct VideoEncodeH265ProfileInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H265_PROFILE_INFO_KHR;

  using NativeType = VkVideoEncodeH265ProfileInfoKHR;

  auto operator<=>(const VideoEncodeH265ProfileInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  StdVideoH265ProfileIdc stdProfileIdc = {};
};

struct VideoEncodeH265DpbSlotInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_VIDEO_ENCODE_H265_DPB_SLOT_INFO_KHR;

  using NativeType = VkVideoEncodeH265DpbSlotInfoKHR;

  auto operator<=>(const VideoEncodeH265DpbSlotInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  StdVideoEncodeH265ReferenceInfo *pStdReferenceInfo = {};
};

struct PhysicalDeviceInheritedViewportScissorFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV;

  using NativeType = VkPhysicalDeviceInheritedViewportScissorFeaturesNV;

  auto operator<=>(const PhysicalDeviceInheritedViewportScissorFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 inheritedViewportScissor2D = {};
};

struct CommandBufferInheritanceViewportScissorInfoNV {
  static constexpr StructureType structure_type = StructureType::E_COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV;

  using NativeType = VkCommandBufferInheritanceViewportScissorInfoNV;

  auto operator<=>(const CommandBufferInheritanceViewportScissorInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 viewportScissor2D = {};
  uint32_t viewportDepthCount = {};
  Viewport *pViewportDepths = {};
};

struct PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT;

  auto operator<=>(const PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 ycbcr2plane444Formats = {};
};

struct PhysicalDeviceProvokingVertexFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceProvokingVertexFeaturesEXT;

  auto operator<=>(const PhysicalDeviceProvokingVertexFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 provokingVertexLast = {};
  VkBool32 transformFeedbackPreservesProvokingVertex = {};
};

struct PhysicalDeviceProvokingVertexPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceProvokingVertexPropertiesEXT;

  auto operator<=>(const PhysicalDeviceProvokingVertexPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 provokingVertexModePerPipeline = {};
  VkBool32 transformFeedbackPreservesTriangleFanProvokingVertex = {};
};

struct PipelineRasterizationProvokingVertexStateCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT;

  using NativeType = VkPipelineRasterizationProvokingVertexStateCreateInfoEXT;

  auto operator<=>(const PipelineRasterizationProvokingVertexStateCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ProvokingVertexMode provokingVertexMode = {};
};

struct CuModuleCreateInfoNVX {
  static constexpr StructureType structure_type = StructureType::E_CU_MODULE_CREATE_INFO_NVX;

  using NativeType = VkCuModuleCreateInfoNVX;

  auto operator<=>(const CuModuleCreateInfoNVX &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  size_t dataSize = {};
  void *pData = {};
};

struct CuFunctionCreateInfoNVX {
  static constexpr StructureType structure_type = StructureType::E_CU_FUNCTION_CREATE_INFO_NVX;

  using NativeType = VkCuFunctionCreateInfoNVX;

  auto operator<=>(const CuFunctionCreateInfoNVX &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkCuModuleNVX module = {};
  char *pName = {};
};

struct CuLaunchInfoNVX {
  static constexpr StructureType structure_type = StructureType::E_CU_LAUNCH_INFO_NVX;

  using NativeType = VkCuLaunchInfoNVX;

  auto operator<=>(const CuLaunchInfoNVX &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkCuFunctionNVX function = {};
  uint32_t gridDimX = {};
  uint32_t gridDimY = {};
  uint32_t gridDimZ = {};
  uint32_t blockDimX = {};
  uint32_t blockDimY = {};
  uint32_t blockDimZ = {};
  uint32_t sharedMemBytes = {};
  size_t paramCount = {};
  void *const *pParams = {};
  size_t extraCount = {};
  void *const *pExtras = {};
};

struct PhysicalDeviceDescriptorBufferFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceDescriptorBufferFeaturesEXT;

  auto operator<=>(const PhysicalDeviceDescriptorBufferFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 descriptorBuffer = {};
  VkBool32 descriptorBufferCaptureReplay = {};
  VkBool32 descriptorBufferImageLayoutIgnored = {};
  VkBool32 descriptorBufferPushDescriptors = {};
};

struct PhysicalDeviceDescriptorBufferPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceDescriptorBufferPropertiesEXT;

  auto operator<=>(const PhysicalDeviceDescriptorBufferPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 combinedImageSamplerDescriptorSingleArray = {};
  VkBool32 bufferlessPushDescriptors = {};
  VkBool32 allowSamplerImageViewPostSubmitCreation = {};
  VkDeviceSize descriptorBufferOffsetAlignment = {};
  uint32_t maxDescriptorBufferBindings = {};
  uint32_t maxResourceDescriptorBufferBindings = {};
  uint32_t maxSamplerDescriptorBufferBindings = {};
  uint32_t maxEmbeddedImmutableSamplerBindings = {};
  uint32_t maxEmbeddedImmutableSamplers = {};
  size_t bufferCaptureReplayDescriptorDataSize = {};
  size_t imageCaptureReplayDescriptorDataSize = {};
  size_t imageViewCaptureReplayDescriptorDataSize = {};
  size_t samplerCaptureReplayDescriptorDataSize = {};
  size_t accelerationStructureCaptureReplayDescriptorDataSize = {};
  size_t samplerDescriptorSize = {};
  size_t combinedImageSamplerDescriptorSize = {};
  size_t sampledImageDescriptorSize = {};
  size_t storageImageDescriptorSize = {};
  size_t uniformTexelBufferDescriptorSize = {};
  size_t robustUniformTexelBufferDescriptorSize = {};
  size_t storageTexelBufferDescriptorSize = {};
  size_t robustStorageTexelBufferDescriptorSize = {};
  size_t uniformBufferDescriptorSize = {};
  size_t robustUniformBufferDescriptorSize = {};
  size_t storageBufferDescriptorSize = {};
  size_t robustStorageBufferDescriptorSize = {};
  size_t inputAttachmentDescriptorSize = {};
  size_t accelerationStructureDescriptorSize = {};
  VkDeviceSize maxSamplerDescriptorBufferRange = {};
  VkDeviceSize maxResourceDescriptorBufferRange = {};
  VkDeviceSize samplerDescriptorBufferAddressSpaceSize = {};
  VkDeviceSize resourceDescriptorBufferAddressSpaceSize = {};
  VkDeviceSize descriptorBufferAddressSpaceSize = {};
};

struct PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_DENSITY_MAP_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT;

  auto operator<=>(const PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  size_t combinedImageSamplerDensityMapDescriptorSize = {};
};

struct DescriptorAddressInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_DESCRIPTOR_ADDRESS_INFO_EXT;

  using NativeType = VkDescriptorAddressInfoEXT;

  auto operator<=>(const DescriptorAddressInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceAddress address = {};
  VkDeviceSize range = {};
  Format format = {};
};

struct DescriptorBufferBindingInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_DESCRIPTOR_BUFFER_BINDING_INFO_EXT;

  using NativeType = VkDescriptorBufferBindingInfoEXT;

  auto operator<=>(const DescriptorBufferBindingInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceAddress address = {};
  BufferUsageMask usage = {};
};

struct DescriptorBufferBindingPushDescriptorBufferHandleEXT {
  static constexpr StructureType structure_type = StructureType::E_DESCRIPTOR_BUFFER_BINDING_PUSH_DESCRIPTOR_BUFFER_HANDLE_EXT;

  using NativeType = VkDescriptorBufferBindingPushDescriptorBufferHandleEXT;

  auto operator<=>(const DescriptorBufferBindingPushDescriptorBufferHandleEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBuffer buffer = {};
};

struct DescriptorGetInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_DESCRIPTOR_GET_INFO_EXT;

  using NativeType = VkDescriptorGetInfoEXT;

  auto operator<=>(const DescriptorGetInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DescriptorType type = {};
  VkDescriptorDataEXT data = {};
};

struct BufferCaptureDescriptorDataInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_BUFFER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT;

  using NativeType = VkBufferCaptureDescriptorDataInfoEXT;

  auto operator<=>(const BufferCaptureDescriptorDataInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBuffer buffer = {};
};

struct ImageCaptureDescriptorDataInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT;

  using NativeType = VkImageCaptureDescriptorDataInfoEXT;

  auto operator<=>(const ImageCaptureDescriptorDataInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkImage image = {};
};

struct ImageViewCaptureDescriptorDataInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_VIEW_CAPTURE_DESCRIPTOR_DATA_INFO_EXT;

  using NativeType = VkImageViewCaptureDescriptorDataInfoEXT;

  auto operator<=>(const ImageViewCaptureDescriptorDataInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkImageView imageView = {};
};

struct SamplerCaptureDescriptorDataInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_SAMPLER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT;

  using NativeType = VkSamplerCaptureDescriptorDataInfoEXT;

  auto operator<=>(const SamplerCaptureDescriptorDataInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkSampler sampler = {};
};

struct AccelerationStructureCaptureDescriptorDataInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_ACCELERATION_STRUCTURE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT;

  using NativeType = VkAccelerationStructureCaptureDescriptorDataInfoEXT;

  auto operator<=>(const AccelerationStructureCaptureDescriptorDataInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkAccelerationStructureKHR accelerationStructure = {};
  VkAccelerationStructureNV accelerationStructureNV = {};
};

struct OpaqueCaptureDescriptorDataCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT;

  using NativeType = VkOpaqueCaptureDescriptorDataCreateInfoEXT;

  auto operator<=>(const OpaqueCaptureDescriptorDataCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  void *opaqueCaptureDescriptorData = {};
};

struct PhysicalDeviceShaderIntegerDotProductFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES;

  using NativeType = VkPhysicalDeviceShaderIntegerDotProductFeatures;

  auto operator<=>(const PhysicalDeviceShaderIntegerDotProductFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderIntegerDotProduct = {};
};

struct PhysicalDeviceShaderIntegerDotProductProperties {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES;

  using NativeType = VkPhysicalDeviceShaderIntegerDotProductProperties;

  auto operator<=>(const PhysicalDeviceShaderIntegerDotProductProperties &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 integerDotProduct8BitUnsignedAccelerated = {};
  VkBool32 integerDotProduct8BitSignedAccelerated = {};
  VkBool32 integerDotProduct8BitMixedSignednessAccelerated = {};
  VkBool32 integerDotProduct4x8BitPackedUnsignedAccelerated = {};
  VkBool32 integerDotProduct4x8BitPackedSignedAccelerated = {};
  VkBool32 integerDotProduct4x8BitPackedMixedSignednessAccelerated = {};
  VkBool32 integerDotProduct16BitUnsignedAccelerated = {};
  VkBool32 integerDotProduct16BitSignedAccelerated = {};
  VkBool32 integerDotProduct16BitMixedSignednessAccelerated = {};
  VkBool32 integerDotProduct32BitUnsignedAccelerated = {};
  VkBool32 integerDotProduct32BitSignedAccelerated = {};
  VkBool32 integerDotProduct32BitMixedSignednessAccelerated = {};
  VkBool32 integerDotProduct64BitUnsignedAccelerated = {};
  VkBool32 integerDotProduct64BitSignedAccelerated = {};
  VkBool32 integerDotProduct64BitMixedSignednessAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating8BitUnsignedAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating8BitSignedAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating16BitUnsignedAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating16BitSignedAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating32BitUnsignedAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating32BitSignedAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating64BitUnsignedAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating64BitSignedAccelerated = {};
  VkBool32 integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated = {};
};

struct PhysicalDeviceDrmPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceDrmPropertiesEXT;

  auto operator<=>(const PhysicalDeviceDrmPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 hasPrimary = {};
  VkBool32 hasRender = {};
  int64_t primaryMajor = {};
  int64_t primaryMinor = {};
  int64_t renderMajor = {};
  int64_t renderMinor = {};
};

struct PhysicalDeviceFragmentShaderBarycentricFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR;

  auto operator<=>(const PhysicalDeviceFragmentShaderBarycentricFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 fragmentShaderBarycentric = {};
};

struct PhysicalDeviceFragmentShaderBarycentricPropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_PROPERTIES_KHR;

  using NativeType = VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR;

  auto operator<=>(const PhysicalDeviceFragmentShaderBarycentricPropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 triStripVertexOrderIndependentOfProvokingVertex = {};
};

struct PhysicalDeviceRayTracingMotionBlurFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV;

  using NativeType = VkPhysicalDeviceRayTracingMotionBlurFeaturesNV;

  auto operator<=>(const PhysicalDeviceRayTracingMotionBlurFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 rayTracingMotionBlur = {};
  VkBool32 rayTracingMotionBlurPipelineTraceRaysIndirect = {};
};

struct PhysicalDeviceRayTracingValidationFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV;

  using NativeType = VkPhysicalDeviceRayTracingValidationFeaturesNV;

  auto operator<=>(const PhysicalDeviceRayTracingValidationFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 rayTracingValidation = {};
};

struct AccelerationStructureGeometryMotionTrianglesDataNV {
  static constexpr StructureType structure_type = StructureType::E_ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV;

  using NativeType = VkAccelerationStructureGeometryMotionTrianglesDataNV;

  auto operator<=>(const AccelerationStructureGeometryMotionTrianglesDataNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceOrHostAddressConstKHR vertexData = {};
};

struct AccelerationStructureMotionInfoNV {
  static constexpr StructureType structure_type = StructureType::E_ACCELERATION_STRUCTURE_MOTION_INFO_NV;

  using NativeType = VkAccelerationStructureMotionInfoNV;

  auto operator<=>(const AccelerationStructureMotionInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxInstances = {};
  AccelerationStructureMotionInfoMask flags = {};
};

struct SRTDataNV {

  using NativeType = VkSRTDataNV;

  auto operator<=>(const SRTDataNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  float sx = {};
  float a = {};
  float b = {};
  float pvx = {};
  float sy = {};
  float c = {};
  float pvy = {};
  float sz = {};
  float pvz = {};
  float qx = {};
  float qy = {};
  float qz = {};
  float qw = {};
  float tx = {};
  float ty = {};
  float tz = {};
};

struct AccelerationStructureSRTMotionInstanceNV {

  using NativeType = VkAccelerationStructureSRTMotionInstanceNV;

  auto operator<=>(const AccelerationStructureSRTMotionInstanceNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  SRTDataNV transformT0 = {};
  SRTDataNV transformT1 = {};
  uint32_t instanceCustomIndex : 24 = {};
  uint32_t mask : 8 = {};
  uint32_t instanceShaderBindingTableRecordOffset : 24 = {};
  VkGeometryInstanceFlagsKHR flags : 8 = {};
  uint64_t accelerationStructureReference = {};
};

struct AccelerationStructureMatrixMotionInstanceNV {

  using NativeType = VkAccelerationStructureMatrixMotionInstanceNV;

  auto operator<=>(const AccelerationStructureMatrixMotionInstanceNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  TransformMatrixKHR transformT0 = {};
  TransformMatrixKHR transformT1 = {};
  uint32_t instanceCustomIndex : 24 = {};
  uint32_t mask : 8 = {};
  uint32_t instanceShaderBindingTableRecordOffset : 24 = {};
  VkGeometryInstanceFlagsKHR flags : 8 = {};
  uint64_t accelerationStructureReference = {};
};

struct AccelerationStructureMotionInstanceNV {

  using NativeType = VkAccelerationStructureMotionInstanceNV;

  auto operator<=>(const AccelerationStructureMotionInstanceNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  AccelerationStructureMotionInstanceType type = {};
  AccelerationStructureMotionInstanceMask flags = {};
  VkAccelerationStructureMotionInstanceDataNV data = {};
};

struct MemoryGetRemoteAddressInfoNV {
  static constexpr StructureType structure_type = StructureType::E_MEMORY_GET_REMOTE_ADDRESS_INFO_NV;

  using NativeType = VkMemoryGetRemoteAddressInfoNV;

  auto operator<=>(const MemoryGetRemoteAddressInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceMemory memory = {};
  ExternalMemoryHandleTypeMaskBits handleType = {};
};

struct CudaModuleCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_CUDA_MODULE_CREATE_INFO_NV;

  using NativeType = VkCudaModuleCreateInfoNV;

  auto operator<=>(const CudaModuleCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  size_t dataSize = {};
  void *pData = {};
};

struct CudaFunctionCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_CUDA_FUNCTION_CREATE_INFO_NV;

  using NativeType = VkCudaFunctionCreateInfoNV;

  auto operator<=>(const CudaFunctionCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkCudaModuleNV module = {};
  char *pName = {};
};

struct CudaLaunchInfoNV {
  static constexpr StructureType structure_type = StructureType::E_CUDA_LAUNCH_INFO_NV;

  using NativeType = VkCudaLaunchInfoNV;

  auto operator<=>(const CudaLaunchInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkCudaFunctionNV function = {};
  uint32_t gridDimX = {};
  uint32_t gridDimY = {};
  uint32_t gridDimZ = {};
  uint32_t blockDimX = {};
  uint32_t blockDimY = {};
  uint32_t blockDimZ = {};
  uint32_t sharedMemBytes = {};
  size_t paramCount = {};
  void *const *pParams = {};
  size_t extraCount = {};
  void *const *pExtras = {};
};

struct PhysicalDeviceRGBA10X6FormatsFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT;

  auto operator<=>(const PhysicalDeviceRGBA10X6FormatsFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 formatRgba10x6WithoutYCbCrSampler = {};
};

struct FormatProperties3 {
  static constexpr StructureType structure_type = StructureType::E_FORMAT_PROPERTIES_3;

  using NativeType = VkFormatProperties3;

  auto operator<=>(const FormatProperties3 &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  FormatFeatureMask2 linearTilingFeatures = {};
  FormatFeatureMask2 optimalTilingFeatures = {};
  FormatFeatureMask2 bufferFeatures = {};
};

struct DrmFormatModifierProperties2EXT {

  using NativeType = VkDrmFormatModifierProperties2EXT;

  auto operator<=>(const DrmFormatModifierProperties2EXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint64_t drmFormatModifier = {};
  uint32_t drmFormatModifierPlaneCount = {};
  FormatFeatureMask2 drmFormatModifierTilingFeatures = {};
};

struct DrmFormatModifierPropertiesList2EXT {
  static constexpr StructureType structure_type = StructureType::E_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT;

  using NativeType = VkDrmFormatModifierPropertiesList2EXT;

  auto operator<=>(const DrmFormatModifierPropertiesList2EXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t drmFormatModifierCount = {};
  DrmFormatModifierProperties2EXT *pDrmFormatModifierProperties = {};
};

struct PipelineRenderingCreateInfo {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_RENDERING_CREATE_INFO;

  using NativeType = VkPipelineRenderingCreateInfo;

  auto operator<=>(const PipelineRenderingCreateInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t viewMask = {};
  uint32_t colorAttachmentCount = {};
  Format *pColorAttachmentFormats = {};
  Format depthAttachmentFormat = {};
  Format stencilAttachmentFormat = {};
};

struct RenderingAttachmentInfo {
  static constexpr StructureType structure_type = StructureType::E_RENDERING_ATTACHMENT_INFO;

  using NativeType = VkRenderingAttachmentInfo;

  auto operator<=>(const RenderingAttachmentInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkImageView imageView = {};
  ImageLayout imageLayout = {};
  ResolveModeMaskBits resolveMode = {};
  VkImageView resolveImageView = {};
  ImageLayout resolveImageLayout = {};
  AttachmentLoadOp loadOp = {};
  AttachmentStoreOp storeOp = {};
  VkClearValue clearValue = {};
};

struct RenderingInfo {
  static constexpr StructureType structure_type = StructureType::E_RENDERING_INFO;

  using NativeType = VkRenderingInfo;

  auto operator<=>(const RenderingInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  RenderingMask flags = {};
  Rect2D renderArea = {};
  uint32_t layerCount = {};
  uint32_t viewMask = {};
  uint32_t colorAttachmentCount = {};
  RenderingAttachmentInfo *pColorAttachments = {};
  RenderingAttachmentInfo *pDepthAttachment = {};
  RenderingAttachmentInfo *pStencilAttachment = {};
};

struct RenderingFragmentShadingRateAttachmentInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR;

  using NativeType = VkRenderingFragmentShadingRateAttachmentInfoKHR;

  auto operator<=>(const RenderingFragmentShadingRateAttachmentInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkImageView imageView = {};
  ImageLayout imageLayout = {};
  Extent2D shadingRateAttachmentTexelSize = {};
};

struct RenderingFragmentDensityMapAttachmentInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT;

  using NativeType = VkRenderingFragmentDensityMapAttachmentInfoEXT;

  auto operator<=>(const RenderingFragmentDensityMapAttachmentInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkImageView imageView = {};
  ImageLayout imageLayout = {};
};

struct PhysicalDeviceDynamicRenderingFeatures {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES;

  using NativeType = VkPhysicalDeviceDynamicRenderingFeatures;

  auto operator<=>(const PhysicalDeviceDynamicRenderingFeatures &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 dynamicRendering = {};
};

struct CommandBufferInheritanceRenderingInfo {
  static constexpr StructureType structure_type = StructureType::E_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO;

  using NativeType = VkCommandBufferInheritanceRenderingInfo;

  auto operator<=>(const CommandBufferInheritanceRenderingInfo &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  RenderingMask flags = {};
  uint32_t viewMask = {};
  uint32_t colorAttachmentCount = {};
  Format *pColorAttachmentFormats = {};
  Format depthAttachmentFormat = {};
  Format stencilAttachmentFormat = {};
  SampleCountMaskBits rasterizationSamples = {};
};

struct AttachmentSampleCountInfoAMD {
  static constexpr StructureType structure_type = StructureType::E_ATTACHMENT_SAMPLE_COUNT_INFO_AMD;

  using NativeType = VkAttachmentSampleCountInfoAMD;

  auto operator<=>(const AttachmentSampleCountInfoAMD &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t colorAttachmentCount = {};
  SampleCountMaskBits *pColorAttachmentSamples = {};
  SampleCountMaskBits depthStencilAttachmentSamples = {};
};

struct MultiviewPerViewAttributesInfoNVX {
  static constexpr StructureType structure_type = StructureType::E_MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX;

  using NativeType = VkMultiviewPerViewAttributesInfoNVX;

  auto operator<=>(const MultiviewPerViewAttributesInfoNVX &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 perViewAttributes = {};
  VkBool32 perViewAttributesPositionXOnly = {};
};

struct PhysicalDeviceImageViewMinLodFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceImageViewMinLodFeaturesEXT;

  auto operator<=>(const PhysicalDeviceImageViewMinLodFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 minLod = {};
};

struct ImageViewMinLodCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT;

  using NativeType = VkImageViewMinLodCreateInfoEXT;

  auto operator<=>(const ImageViewMinLodCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  float minLod = {};
};

struct PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT;

  auto operator<=>(const PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 rasterizationOrderColorAttachmentAccess = {};
  VkBool32 rasterizationOrderDepthAttachmentAccess = {};
  VkBool32 rasterizationOrderStencilAttachmentAccess = {};
};

struct PhysicalDeviceLinearColorAttachmentFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV;

  using NativeType = VkPhysicalDeviceLinearColorAttachmentFeaturesNV;

  auto operator<=>(const PhysicalDeviceLinearColorAttachmentFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 linearColorAttachment = {};
};

struct PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT;

  auto operator<=>(const PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 graphicsPipelineLibrary = {};
};

struct PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT;

  auto operator<=>(const PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 graphicsPipelineLibraryFastLinking = {};
  VkBool32 graphicsPipelineLibraryIndependentInterpolationDecoration = {};
};

struct GraphicsPipelineLibraryCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT;

  using NativeType = VkGraphicsPipelineLibraryCreateInfoEXT;

  auto operator<=>(const GraphicsPipelineLibraryCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  GraphicsPipelineLibraryMask flags = {};
};

struct PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE;

  using NativeType = VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE;

  auto operator<=>(const PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 descriptorSetHostMapping = {};
};

struct DescriptorSetBindingReferenceVALVE {
  static constexpr StructureType structure_type = StructureType::E_DESCRIPTOR_SET_BINDING_REFERENCE_VALVE;

  using NativeType = VkDescriptorSetBindingReferenceVALVE;

  auto operator<=>(const DescriptorSetBindingReferenceVALVE &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDescriptorSetLayout descriptorSetLayout = {};
  uint32_t binding = {};
};

struct DescriptorSetLayoutHostMappingInfoVALVE {
  static constexpr StructureType structure_type = StructureType::E_DESCRIPTOR_SET_LAYOUT_HOST_MAPPING_INFO_VALVE;

  using NativeType = VkDescriptorSetLayoutHostMappingInfoVALVE;

  auto operator<=>(const DescriptorSetLayoutHostMappingInfoVALVE &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  size_t descriptorOffset = {};
  uint32_t descriptorSize = {};
};

struct PhysicalDeviceNestedCommandBufferFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceNestedCommandBufferFeaturesEXT;

  auto operator<=>(const PhysicalDeviceNestedCommandBufferFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 nestedCommandBuffer = {};
  VkBool32 nestedCommandBufferRendering = {};
  VkBool32 nestedCommandBufferSimultaneousUse = {};
};

struct PhysicalDeviceNestedCommandBufferPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceNestedCommandBufferPropertiesEXT;

  auto operator<=>(const PhysicalDeviceNestedCommandBufferPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxCommandBufferNestingLevel = {};
};

struct PhysicalDeviceShaderModuleIdentifierFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT;

  auto operator<=>(const PhysicalDeviceShaderModuleIdentifierFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderModuleIdentifier = {};
};

struct PhysicalDeviceShaderModuleIdentifierPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT;

  auto operator<=>(const PhysicalDeviceShaderModuleIdentifierPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint8_t shaderModuleIdentifierAlgorithmUUID[VK_UUID_SIZE] = {};
};

struct PipelineShaderStageModuleIdentifierCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT;

  using NativeType = VkPipelineShaderStageModuleIdentifierCreateInfoEXT;

  auto operator<=>(const PipelineShaderStageModuleIdentifierCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t identifierSize = {};
  uint8_t *pIdentifier = {};
};

struct ShaderModuleIdentifierEXT {
  static constexpr StructureType structure_type = StructureType::E_SHADER_MODULE_IDENTIFIER_EXT;

  using NativeType = VkShaderModuleIdentifierEXT;

  auto operator<=>(const ShaderModuleIdentifierEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t identifierSize = {};
  uint8_t identifier[VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT] = {};
};

struct ImageCompressionControlEXT {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_COMPRESSION_CONTROL_EXT;

  using NativeType = VkImageCompressionControlEXT;

  auto operator<=>(const ImageCompressionControlEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ImageCompressionMask flags = {};
  uint32_t compressionControlPlaneCount = {};
  ImageCompressionFixedRateMask *pFixedRateFlags = {};
};

struct PhysicalDeviceImageCompressionControlFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceImageCompressionControlFeaturesEXT;

  auto operator<=>(const PhysicalDeviceImageCompressionControlFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 imageCompressionControl = {};
};

struct ImageCompressionPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_COMPRESSION_PROPERTIES_EXT;

  using NativeType = VkImageCompressionPropertiesEXT;

  auto operator<=>(const ImageCompressionPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ImageCompressionMask imageCompressionFlags = {};
  ImageCompressionFixedRateMask imageCompressionFixedRateFlags = {};
};

struct PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT;

  auto operator<=>(const PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 imageCompressionControlSwapchain = {};
};

struct ImageSubresource2KHR {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_SUBRESOURCE_2_KHR;

  using NativeType = VkImageSubresource2KHR;

  auto operator<=>(const ImageSubresource2KHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ImageSubresource imageSubresource = {};
};

struct SubresourceLayout2KHR {
  static constexpr StructureType structure_type = StructureType::E_SUBRESOURCE_LAYOUT_2_KHR;

  using NativeType = VkSubresourceLayout2KHR;

  auto operator<=>(const SubresourceLayout2KHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  SubresourceLayout subresourceLayout = {};
};

struct RenderPassCreationControlEXT {
  static constexpr StructureType structure_type = StructureType::E_RENDER_PASS_CREATION_CONTROL_EXT;

  using NativeType = VkRenderPassCreationControlEXT;

  auto operator<=>(const RenderPassCreationControlEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 disallowMerging = {};
};

struct RenderPassCreationFeedbackInfoEXT {

  using NativeType = VkRenderPassCreationFeedbackInfoEXT;

  auto operator<=>(const RenderPassCreationFeedbackInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t postMergeSubpassCount = {};
};

struct RenderPassCreationFeedbackCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT;

  using NativeType = VkRenderPassCreationFeedbackCreateInfoEXT;

  auto operator<=>(const RenderPassCreationFeedbackCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  RenderPassCreationFeedbackInfoEXT *pRenderPassFeedback = {};
};

struct RenderPassSubpassFeedbackInfoEXT {

  using NativeType = VkRenderPassSubpassFeedbackInfoEXT;

  auto operator<=>(const RenderPassSubpassFeedbackInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  SubpassMergeStatus subpassMergeStatus = {};
  char description[VK_MAX_DESCRIPTION_SIZE] = {};
  uint32_t postMergeIndex = {};
};

struct RenderPassSubpassFeedbackCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT;

  using NativeType = VkRenderPassSubpassFeedbackCreateInfoEXT;

  auto operator<=>(const RenderPassSubpassFeedbackCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  RenderPassSubpassFeedbackInfoEXT *pSubpassFeedback = {};
};

struct PhysicalDeviceSubpassMergeFeedbackFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT;

  auto operator<=>(const PhysicalDeviceSubpassMergeFeedbackFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 subpassMergeFeedback = {};
};

struct MicromapUsageEXT {

  using NativeType = VkMicromapUsageEXT;

  auto operator<=>(const MicromapUsageEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t count = {};
  uint32_t subdivisionLevel = {};
  uint32_t format = {};
};

struct MicromapBuildInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_MICROMAP_BUILD_INFO_EXT;

  using NativeType = VkMicromapBuildInfoEXT;

  auto operator<=>(const MicromapBuildInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  MicromapType type = {};
  BuildMicromapMask flags = {};
  BuildMicromapMode mode = {};
  VkMicromapEXT dstMicromap = {};
  uint32_t usageCountsCount = {};
  MicromapUsageEXT *pUsageCounts = {};
  MicromapUsageEXT *const *ppUsageCounts = {};
  VkDeviceOrHostAddressConstKHR data = {};
  VkDeviceOrHostAddressKHR scratchData = {};
  VkDeviceOrHostAddressConstKHR triangleArray = {};
  VkDeviceSize triangleArrayStride = {};
};

struct MicromapCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_MICROMAP_CREATE_INFO_EXT;

  using NativeType = VkMicromapCreateInfoEXT;

  auto operator<=>(const MicromapCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  MicromapCreateMask createFlags = {};
  VkBuffer buffer = {};
  VkDeviceSize offset = {};
  VkDeviceSize size = {};
  MicromapType type = {};
  VkDeviceAddress deviceAddress = {};
};

struct MicromapVersionInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_MICROMAP_VERSION_INFO_EXT;

  using NativeType = VkMicromapVersionInfoEXT;

  auto operator<=>(const MicromapVersionInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint8_t *pVersionData = {};
};

struct CopyMicromapInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_COPY_MICROMAP_INFO_EXT;

  using NativeType = VkCopyMicromapInfoEXT;

  auto operator<=>(const CopyMicromapInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkMicromapEXT src = {};
  VkMicromapEXT dst = {};
  CopyMicromapMode mode = {};
};

struct CopyMicromapToMemoryInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_COPY_MICROMAP_TO_MEMORY_INFO_EXT;

  using NativeType = VkCopyMicromapToMemoryInfoEXT;

  auto operator<=>(const CopyMicromapToMemoryInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkMicromapEXT src = {};
  VkDeviceOrHostAddressKHR dst = {};
  CopyMicromapMode mode = {};
};

struct CopyMemoryToMicromapInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_COPY_MEMORY_TO_MICROMAP_INFO_EXT;

  using NativeType = VkCopyMemoryToMicromapInfoEXT;

  auto operator<=>(const CopyMemoryToMicromapInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceOrHostAddressConstKHR src = {};
  VkMicromapEXT dst = {};
  CopyMicromapMode mode = {};
};

struct MicromapBuildSizesInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_MICROMAP_BUILD_SIZES_INFO_EXT;

  using NativeType = VkMicromapBuildSizesInfoEXT;

  auto operator<=>(const MicromapBuildSizesInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceSize micromapSize = {};
  VkDeviceSize buildScratchSize = {};
  VkBool32 discardable = {};
};

struct MicromapTriangleEXT {

  using NativeType = VkMicromapTriangleEXT;

  auto operator<=>(const MicromapTriangleEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t dataOffset = {};
  uint16_t subdivisionLevel = {};
  uint16_t format = {};
};

struct PhysicalDeviceOpacityMicromapFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceOpacityMicromapFeaturesEXT;

  auto operator<=>(const PhysicalDeviceOpacityMicromapFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 micromap = {};
  VkBool32 micromapCaptureReplay = {};
  VkBool32 micromapHostCommands = {};
};

struct PhysicalDeviceOpacityMicromapPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceOpacityMicromapPropertiesEXT;

  auto operator<=>(const PhysicalDeviceOpacityMicromapPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxOpacity2StateSubdivisionLevel = {};
  uint32_t maxOpacity4StateSubdivisionLevel = {};
};

struct AccelerationStructureTrianglesOpacityMicromapEXT {
  static constexpr StructureType structure_type = StructureType::E_ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT;

  using NativeType = VkAccelerationStructureTrianglesOpacityMicromapEXT;

  auto operator<=>(const AccelerationStructureTrianglesOpacityMicromapEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  IndexType indexType = {};
  VkDeviceOrHostAddressConstKHR indexBuffer = {};
  VkDeviceSize indexStride = {};
  uint32_t baseTriangle = {};
  uint32_t usageCountsCount = {};
  MicromapUsageEXT *pUsageCounts = {};
  MicromapUsageEXT *const *ppUsageCounts = {};
  VkMicromapEXT micromap = {};
};

struct PipelinePropertiesIdentifierEXT {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_PROPERTIES_IDENTIFIER_EXT;

  using NativeType = VkPipelinePropertiesIdentifierEXT;

  auto operator<=>(const PipelinePropertiesIdentifierEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint8_t pipelineIdentifier[VK_UUID_SIZE] = {};
};

struct PhysicalDevicePipelinePropertiesFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT;

  using NativeType = VkPhysicalDevicePipelinePropertiesFeaturesEXT;

  auto operator<=>(const PhysicalDevicePipelinePropertiesFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 pipelinePropertiesIdentifier = {};
};

struct PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD;

  using NativeType = VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD;

  auto operator<=>(const PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderEarlyAndLateFragmentTests = {};
};

struct ExternalMemoryAcquireUnmodifiedEXT {
  static constexpr StructureType structure_type = StructureType::E_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT;

  using NativeType = VkExternalMemoryAcquireUnmodifiedEXT;

  auto operator<=>(const ExternalMemoryAcquireUnmodifiedEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 acquireUnmodifiedMemory = {};
};

struct PhysicalDeviceNonSeamlessCubeMapFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT;

  auto operator<=>(const PhysicalDeviceNonSeamlessCubeMapFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 nonSeamlessCubeMap = {};
};

struct PhysicalDevicePipelineRobustnessFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT;

  using NativeType = VkPhysicalDevicePipelineRobustnessFeaturesEXT;

  auto operator<=>(const PhysicalDevicePipelineRobustnessFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 pipelineRobustness = {};
};

struct PipelineRobustnessCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_PIPELINE_ROBUSTNESS_CREATE_INFO_EXT;

  using NativeType = VkPipelineRobustnessCreateInfoEXT;

  auto operator<=>(const PipelineRobustnessCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineRobustnessBufferBehavior storageBuffers = {};
  PipelineRobustnessBufferBehavior uniformBuffers = {};
  PipelineRobustnessBufferBehavior vertexInputs = {};
  PipelineRobustnessImageBehavior images = {};
};

struct PhysicalDevicePipelineRobustnessPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES_EXT;

  using NativeType = VkPhysicalDevicePipelineRobustnessPropertiesEXT;

  auto operator<=>(const PhysicalDevicePipelineRobustnessPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PipelineRobustnessBufferBehavior defaultRobustnessStorageBuffers = {};
  PipelineRobustnessBufferBehavior defaultRobustnessUniformBuffers = {};
  PipelineRobustnessBufferBehavior defaultRobustnessVertexInputs = {};
  PipelineRobustnessImageBehavior defaultRobustnessImages = {};
};

struct ImageViewSampleWeightCreateInfoQCOM {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_VIEW_SAMPLE_WEIGHT_CREATE_INFO_QCOM;

  using NativeType = VkImageViewSampleWeightCreateInfoQCOM;

  auto operator<=>(const ImageViewSampleWeightCreateInfoQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  Offset2D filterCenter = {};
  Extent2D filterSize = {};
  uint32_t numPhases = {};
};

struct PhysicalDeviceImageProcessingFeaturesQCOM {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM;

  using NativeType = VkPhysicalDeviceImageProcessingFeaturesQCOM;

  auto operator<=>(const PhysicalDeviceImageProcessingFeaturesQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 textureSampleWeighted = {};
  VkBool32 textureBoxFilter = {};
  VkBool32 textureBlockMatch = {};
};

struct PhysicalDeviceImageProcessingPropertiesQCOM {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_IMAGE_PROCESSING_PROPERTIES_QCOM;

  using NativeType = VkPhysicalDeviceImageProcessingPropertiesQCOM;

  auto operator<=>(const PhysicalDeviceImageProcessingPropertiesQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maxWeightFilterPhases = {};
  Extent2D maxWeightFilterDimension = {};
  Extent2D maxBlockMatchRegion = {};
  Extent2D maxBoxFilterBlockSize = {};
};

struct PhysicalDeviceTilePropertiesFeaturesQCOM {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM;

  using NativeType = VkPhysicalDeviceTilePropertiesFeaturesQCOM;

  auto operator<=>(const PhysicalDeviceTilePropertiesFeaturesQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 tileProperties = {};
};

struct TilePropertiesQCOM {
  static constexpr StructureType structure_type = StructureType::E_TILE_PROPERTIES_QCOM;

  using NativeType = VkTilePropertiesQCOM;

  auto operator<=>(const TilePropertiesQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  Extent3D tileSize = {};
  Extent2D apronSize = {};
  Offset2D origin = {};
};

struct PhysicalDeviceAmigoProfilingFeaturesSEC {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC;

  using NativeType = VkPhysicalDeviceAmigoProfilingFeaturesSEC;

  auto operator<=>(const PhysicalDeviceAmigoProfilingFeaturesSEC &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 amigoProfiling = {};
};

struct AmigoProfilingSubmitInfoSEC {
  static constexpr StructureType structure_type = StructureType::E_AMIGO_PROFILING_SUBMIT_INFO_SEC;

  using NativeType = VkAmigoProfilingSubmitInfoSEC;

  auto operator<=>(const AmigoProfilingSubmitInfoSEC &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint64_t firstDrawTimestamp = {};
  uint64_t swapBufferTimestamp = {};
};

struct PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT;

  auto operator<=>(const PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 attachmentFeedbackLoopLayout = {};
};

struct PhysicalDeviceDepthClampZeroOneFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceDepthClampZeroOneFeaturesEXT;

  auto operator<=>(const PhysicalDeviceDepthClampZeroOneFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 depthClampZeroOne = {};
};

struct PhysicalDeviceAddressBindingReportFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceAddressBindingReportFeaturesEXT;

  auto operator<=>(const PhysicalDeviceAddressBindingReportFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 reportAddressBinding = {};
};

struct DeviceAddressBindingCallbackDataEXT {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT;

  using NativeType = VkDeviceAddressBindingCallbackDataEXT;

  auto operator<=>(const DeviceAddressBindingCallbackDataEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DeviceAddressBindingMask flags = {};
  VkDeviceAddress baseAddress = {};
  VkDeviceSize size = {};
  DeviceAddressBindingType bindingType = {};
};

struct PhysicalDeviceOpticalFlowFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV;

  using NativeType = VkPhysicalDeviceOpticalFlowFeaturesNV;

  auto operator<=>(const PhysicalDeviceOpticalFlowFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 opticalFlow = {};
};

struct PhysicalDeviceOpticalFlowPropertiesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_OPTICAL_FLOW_PROPERTIES_NV;

  using NativeType = VkPhysicalDeviceOpticalFlowPropertiesNV;

  auto operator<=>(const PhysicalDeviceOpticalFlowPropertiesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  OpticalFlowGridSizeMask supportedOutputGridSizes = {};
  OpticalFlowGridSizeMask supportedHintGridSizes = {};
  VkBool32 hintSupported = {};
  VkBool32 costSupported = {};
  VkBool32 bidirectionalFlowSupported = {};
  VkBool32 globalFlowSupported = {};
  uint32_t minWidth = {};
  uint32_t minHeight = {};
  uint32_t maxWidth = {};
  uint32_t maxHeight = {};
  uint32_t maxNumRegionsOfInterest = {};
};

struct OpticalFlowImageFormatInfoNV {
  static constexpr StructureType structure_type = StructureType::E_OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV;

  using NativeType = VkOpticalFlowImageFormatInfoNV;

  auto operator<=>(const OpticalFlowImageFormatInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  OpticalFlowUsageMask usage = {};
};

struct OpticalFlowImageFormatPropertiesNV {
  static constexpr StructureType structure_type = StructureType::E_OPTICAL_FLOW_IMAGE_FORMAT_PROPERTIES_NV;

  using NativeType = VkOpticalFlowImageFormatPropertiesNV;

  auto operator<=>(const OpticalFlowImageFormatPropertiesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  Format format = {};
};

struct OpticalFlowSessionCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_OPTICAL_FLOW_SESSION_CREATE_INFO_NV;

  using NativeType = VkOpticalFlowSessionCreateInfoNV;

  auto operator<=>(const OpticalFlowSessionCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t width = {};
  uint32_t height = {};
  Format imageFormat = {};
  Format flowVectorFormat = {};
  Format costFormat = {};
  OpticalFlowGridSizeMask outputGridSize = {};
  OpticalFlowGridSizeMask hintGridSize = {};
  OpticalFlowPerformanceLevel performanceLevel = {};
  OpticalFlowSessionCreateMask flags = {};
};

struct OpticalFlowSessionCreatePrivateDataInfoNV {
  static constexpr StructureType structure_type = StructureType::E_OPTICAL_FLOW_SESSION_CREATE_PRIVATE_DATA_INFO_NV;

  using NativeType = VkOpticalFlowSessionCreatePrivateDataInfoNV;

  auto operator<=>(const OpticalFlowSessionCreatePrivateDataInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t id = {};
  uint32_t size = {};
  void *pPrivateData = {};
};

struct OpticalFlowExecuteInfoNV {
  static constexpr StructureType structure_type = StructureType::E_OPTICAL_FLOW_EXECUTE_INFO_NV;

  using NativeType = VkOpticalFlowExecuteInfoNV;

  auto operator<=>(const OpticalFlowExecuteInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  OpticalFlowExecuteMask flags = {};
  uint32_t regionCount = {};
  Rect2D *pRegions = {};
};

struct PhysicalDeviceFaultFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_FAULT_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceFaultFeaturesEXT;

  auto operator<=>(const PhysicalDeviceFaultFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 deviceFault = {};
  VkBool32 deviceFaultVendorBinary = {};
};

struct DeviceFaultAddressInfoEXT {

  using NativeType = VkDeviceFaultAddressInfoEXT;

  auto operator<=>(const DeviceFaultAddressInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  DeviceFaultAddressType addressType = {};
  VkDeviceAddress reportedAddress = {};
  VkDeviceSize addressPrecision = {};
};

struct DeviceFaultVendorInfoEXT {

  using NativeType = VkDeviceFaultVendorInfoEXT;

  auto operator<=>(const DeviceFaultVendorInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  char description[VK_MAX_DESCRIPTION_SIZE] = {};
  uint64_t vendorFaultCode = {};
  uint64_t vendorFaultData = {};
};

struct DeviceFaultCountsEXT {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_FAULT_COUNTS_EXT;

  using NativeType = VkDeviceFaultCountsEXT;

  auto operator<=>(const DeviceFaultCountsEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t addressInfoCount = {};
  uint32_t vendorInfoCount = {};
  VkDeviceSize vendorBinarySize = {};
};

struct DeviceFaultInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_FAULT_INFO_EXT;

  using NativeType = VkDeviceFaultInfoEXT;

  auto operator<=>(const DeviceFaultInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  char description[VK_MAX_DESCRIPTION_SIZE] = {};
  DeviceFaultAddressInfoEXT *pAddressInfos = {};
  DeviceFaultVendorInfoEXT *pVendorInfos = {};
  void *pVendorBinaryData = {};
};

struct DeviceFaultVendorBinaryHeaderVersionOneEXT {

  using NativeType = VkDeviceFaultVendorBinaryHeaderVersionOneEXT;

  auto operator<=>(const DeviceFaultVendorBinaryHeaderVersionOneEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  uint32_t headerSize = {};
  DeviceFaultVendorBinaryHeaderVersion headerVersion = {};
  uint32_t vendorID = {};
  uint32_t deviceID = {};
  uint32_t driverVersion = {};
  uint8_t pipelineCacheUUID[VK_UUID_SIZE] = {};
  uint32_t applicationNameOffset = {};
  uint32_t applicationVersion = {};
  uint32_t engineNameOffset = {};
  uint32_t engineVersion = {};
  uint32_t apiVersion = {};
};

struct PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT;

  using NativeType = VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT;

  auto operator<=>(const PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 pipelineLibraryGroupHandles = {};
};

struct DepthBiasInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_DEPTH_BIAS_INFO_EXT;

  using NativeType = VkDepthBiasInfoEXT;

  auto operator<=>(const DepthBiasInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  float depthBiasConstantFactor = {};
  float depthBiasClamp = {};
  float depthBiasSlopeFactor = {};
};

struct DepthBiasRepresentationInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_DEPTH_BIAS_REPRESENTATION_INFO_EXT;

  using NativeType = VkDepthBiasRepresentationInfoEXT;

  auto operator<=>(const DepthBiasRepresentationInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DepthBiasRepresentation depthBiasRepresentation = {};
  VkBool32 depthBiasExact = {};
};

struct DecompressMemoryRegionNV {

  using NativeType = VkDecompressMemoryRegionNV;

  auto operator<=>(const DecompressMemoryRegionNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  VkDeviceAddress srcAddress = {};
  VkDeviceAddress dstAddress = {};
  VkDeviceSize compressedSize = {};
  VkDeviceSize decompressedSize = {};
  MemoryDecompressionMethodMask decompressionMethod = {};
};

struct PhysicalDeviceShaderCoreBuiltinsPropertiesARM {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_PROPERTIES_ARM;

  using NativeType = VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM;

  auto operator<=>(const PhysicalDeviceShaderCoreBuiltinsPropertiesARM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint64_t shaderCoreMask = {};
  uint32_t shaderCoreCount = {};
  uint32_t shaderWarpsPerCore = {};
};

struct PhysicalDeviceShaderCoreBuiltinsFeaturesARM {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM;

  using NativeType = VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM;

  auto operator<=>(const PhysicalDeviceShaderCoreBuiltinsFeaturesARM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderCoreBuiltins = {};
};

struct FrameBoundaryEXT {
  static constexpr StructureType structure_type = StructureType::E_FRAME_BOUNDARY_EXT;

  using NativeType = VkFrameBoundaryEXT;

  auto operator<=>(const FrameBoundaryEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  FrameBoundaryMask flags = {};
  uint64_t frameID = {};
  uint32_t imageCount = {};
  VkImage *pImages = {};
  uint32_t bufferCount = {};
  VkBuffer *pBuffers = {};
  uint64_t tagName = {};
  size_t tagSize = {};
  void *pTag = {};
};

struct PhysicalDeviceFrameBoundaryFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceFrameBoundaryFeaturesEXT;

  auto operator<=>(const PhysicalDeviceFrameBoundaryFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 frameBoundary = {};
};

struct PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT;

  auto operator<=>(const PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 dynamicRenderingUnusedAttachments = {};
};

struct SurfacePresentModeEXT {
  static constexpr StructureType structure_type = StructureType::E_SURFACE_PRESENT_MODE_EXT;

  using NativeType = VkSurfacePresentModeEXT;

  auto operator<=>(const SurfacePresentModeEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PresentMode presentMode = {};
};

struct SurfacePresentScalingCapabilitiesEXT {
  static constexpr StructureType structure_type = StructureType::E_SURFACE_PRESENT_SCALING_CAPABILITIES_EXT;

  using NativeType = VkSurfacePresentScalingCapabilitiesEXT;

  auto operator<=>(const SurfacePresentScalingCapabilitiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PresentScalingMask supportedPresentScaling = {};
  PresentGravityMask supportedPresentGravityX = {};
  PresentGravityMask supportedPresentGravityY = {};
  Extent2D minScaledImageExtent = {};
  Extent2D maxScaledImageExtent = {};
};

struct SurfacePresentModeCompatibilityEXT {
  static constexpr StructureType structure_type = StructureType::E_SURFACE_PRESENT_MODE_COMPATIBILITY_EXT;

  using NativeType = VkSurfacePresentModeCompatibilityEXT;

  auto operator<=>(const SurfacePresentModeCompatibilityEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t presentModeCount = {};
  PresentMode *pPresentModes = {};
};

struct PhysicalDeviceSwapchainMaintenance1FeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT;

  auto operator<=>(const PhysicalDeviceSwapchainMaintenance1FeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 swapchainMaintenance1 = {};
};

struct SwapchainPresentFenceInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_SWAPCHAIN_PRESENT_FENCE_INFO_EXT;

  using NativeType = VkSwapchainPresentFenceInfoEXT;

  auto operator<=>(const SwapchainPresentFenceInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t swapchainCount = {};
  VkFence *pFences = {};
};

struct SwapchainPresentModesCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT;

  using NativeType = VkSwapchainPresentModesCreateInfoEXT;

  auto operator<=>(const SwapchainPresentModesCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t presentModeCount = {};
  PresentMode *pPresentModes = {};
};

struct SwapchainPresentModeInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_SWAPCHAIN_PRESENT_MODE_INFO_EXT;

  using NativeType = VkSwapchainPresentModeInfoEXT;

  auto operator<=>(const SwapchainPresentModeInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t swapchainCount = {};
  PresentMode *pPresentModes = {};
};

struct SwapchainPresentScalingCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT;

  using NativeType = VkSwapchainPresentScalingCreateInfoEXT;

  auto operator<=>(const SwapchainPresentScalingCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PresentScalingMask scalingBehavior = {};
  PresentGravityMask presentGravityX = {};
  PresentGravityMask presentGravityY = {};
};

struct ReleaseSwapchainImagesInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_RELEASE_SWAPCHAIN_IMAGES_INFO_EXT;

  using NativeType = VkReleaseSwapchainImagesInfoEXT;

  auto operator<=>(const ReleaseSwapchainImagesInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkSwapchainKHR swapchain = {};
  uint32_t imageIndexCount = {};
  uint32_t *pImageIndices = {};
};

struct PhysicalDeviceDepthBiasControlFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceDepthBiasControlFeaturesEXT;

  auto operator<=>(const PhysicalDeviceDepthBiasControlFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 depthBiasControl = {};
  VkBool32 leastRepresentableValueForceUnormRepresentation = {};
  VkBool32 floatRepresentation = {};
  VkBool32 depthBiasExact = {};
};

struct PhysicalDeviceRayTracingInvocationReorderFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV;

  using NativeType = VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV;

  auto operator<=>(const PhysicalDeviceRayTracingInvocationReorderFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 rayTracingInvocationReorder = {};
};

struct PhysicalDeviceRayTracingInvocationReorderPropertiesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_NV;

  using NativeType = VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV;

  auto operator<=>(const PhysicalDeviceRayTracingInvocationReorderPropertiesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  RayTracingInvocationReorderMode rayTracingInvocationReorderReorderingHint = {};
};

struct PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV;

  using NativeType = VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV;

  auto operator<=>(const PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 extendedSparseAddressSpace = {};
};

struct PhysicalDeviceExtendedSparseAddressSpacePropertiesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_PROPERTIES_NV;

  using NativeType = VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV;

  auto operator<=>(const PhysicalDeviceExtendedSparseAddressSpacePropertiesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceSize extendedSparseAddressSpaceSize = {};
  ImageUsageMask extendedSparseImageUsageFlags = {};
  BufferUsageMask extendedSparseBufferUsageFlags = {};
};

struct DirectDriverLoadingInfoLUNARG {
  static constexpr StructureType structure_type = StructureType::E_DIRECT_DRIVER_LOADING_INFO_LUNARG;

  using NativeType = VkDirectDriverLoadingInfoLUNARG;

  auto operator<=>(const DirectDriverLoadingInfoLUNARG &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DirectDriverLoadingMask flags = {};
  PFN_vkGetInstanceProcAddrLUNARG pfnGetInstanceProcAddr = {};
};

struct DirectDriverLoadingListLUNARG {
  static constexpr StructureType structure_type = StructureType::E_DIRECT_DRIVER_LOADING_LIST_LUNARG;

  using NativeType = VkDirectDriverLoadingListLUNARG;

  auto operator<=>(const DirectDriverLoadingListLUNARG &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  DirectDriverLoadingMode mode = {};
  uint32_t driverCount = {};
  DirectDriverLoadingInfoLUNARG *pDrivers = {};
};

struct PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM;

  using NativeType = VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM;

  auto operator<=>(const PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 multiviewPerViewViewports = {};
};

struct PhysicalDeviceRayTracingPositionFetchFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR;

  auto operator<=>(const PhysicalDeviceRayTracingPositionFetchFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 rayTracingPositionFetch = {};
};

struct DeviceImageSubresourceInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_IMAGE_SUBRESOURCE_INFO_KHR;

  using NativeType = VkDeviceImageSubresourceInfoKHR;

  auto operator<=>(const DeviceImageSubresourceInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ImageCreateInfo *pCreateInfo = {};
  ImageSubresource2KHR *pSubresource = {};
};

struct PhysicalDeviceShaderCorePropertiesARM {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_ARM;

  using NativeType = VkPhysicalDeviceShaderCorePropertiesARM;

  auto operator<=>(const PhysicalDeviceShaderCorePropertiesARM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t pixelRate = {};
  uint32_t texelRate = {};
  uint32_t fmaRate = {};
};

struct PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM;

  using NativeType = VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM;

  auto operator<=>(const PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 multiviewPerViewRenderAreas = {};
};

struct MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM {
  static constexpr StructureType structure_type = StructureType::E_MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM;

  using NativeType = VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM;

  auto operator<=>(const MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t perViewRenderAreaCount = {};
  Rect2D *pPerViewRenderAreas = {};
};

struct QueryLowLatencySupportNV {
  static constexpr StructureType structure_type = StructureType::E_QUERY_LOW_LATENCY_SUPPORT_NV;

  using NativeType = VkQueryLowLatencySupportNV;

  auto operator<=>(const QueryLowLatencySupportNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  void *pQueriedLowLatencyData = {};
};

struct MemoryMapInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_MEMORY_MAP_INFO_KHR;

  using NativeType = VkMemoryMapInfoKHR;

  auto operator<=>(const MemoryMapInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  MemoryMapMask flags = {};
  VkDeviceMemory memory = {};
  VkDeviceSize offset = {};
  VkDeviceSize size = {};
};

struct MemoryUnmapInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_MEMORY_UNMAP_INFO_KHR;

  using NativeType = VkMemoryUnmapInfoKHR;

  auto operator<=>(const MemoryUnmapInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  MemoryUnmapMask flags = {};
  VkDeviceMemory memory = {};
};

struct PhysicalDeviceShaderObjectFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceShaderObjectFeaturesEXT;

  auto operator<=>(const PhysicalDeviceShaderObjectFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderObject = {};
};

struct PhysicalDeviceShaderObjectPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_OBJECT_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceShaderObjectPropertiesEXT;

  auto operator<=>(const PhysicalDeviceShaderObjectPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint8_t shaderBinaryUUID[VK_UUID_SIZE] = {};
  uint32_t shaderBinaryVersion = {};
};

struct ShaderCreateInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_SHADER_CREATE_INFO_EXT;

  using NativeType = VkShaderCreateInfoEXT;

  auto operator<=>(const ShaderCreateInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ShaderCreateMask flags = {};
  ShaderStageMaskBits stage = {};
  ShaderStageMask nextStage = {};
  ShaderCodeType codeType = {};
  size_t codeSize = {};
  void *pCode = {};
  char *pName = {};
  uint32_t setLayoutCount = {};
  VkDescriptorSetLayout *pSetLayouts = {};
  uint32_t pushConstantRangeCount = {};
  PushConstantRange *pPushConstantRanges = {};
  SpecializationInfo *pSpecializationInfo = {};
};

struct PhysicalDeviceShaderTileImageFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceShaderTileImageFeaturesEXT;

  auto operator<=>(const PhysicalDeviceShaderTileImageFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderTileImageColorReadAccess = {};
  VkBool32 shaderTileImageDepthReadAccess = {};
  VkBool32 shaderTileImageStencilReadAccess = {};
};

struct PhysicalDeviceShaderTileImagePropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceShaderTileImagePropertiesEXT;

  auto operator<=>(const PhysicalDeviceShaderTileImagePropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderTileImageCoherentReadAccelerated = {};
  VkBool32 shaderTileImageReadSampleFromPixelRateInvocation = {};
  VkBool32 shaderTileImageReadFromHelperInvocation = {};
};

struct PhysicalDeviceCooperativeMatrixFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceCooperativeMatrixFeaturesKHR;

  auto operator<=>(const PhysicalDeviceCooperativeMatrixFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 cooperativeMatrix = {};
  VkBool32 cooperativeMatrixRobustBufferAccess = {};
};

struct CooperativeMatrixPropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_COOPERATIVE_MATRIX_PROPERTIES_KHR;

  using NativeType = VkCooperativeMatrixPropertiesKHR;

  auto operator<=>(const CooperativeMatrixPropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t MSize = {};
  uint32_t NSize = {};
  uint32_t KSize = {};
  ComponentType AType = {};
  ComponentType BType = {};
  ComponentType CType = {};
  ComponentType ResultType = {};
  VkBool32 saturatingAccumulation = {};
  Scope scope = {};
};

struct PhysicalDeviceCooperativeMatrixPropertiesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_KHR;

  using NativeType = VkPhysicalDeviceCooperativeMatrixPropertiesKHR;

  auto operator<=>(const PhysicalDeviceCooperativeMatrixPropertiesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ShaderStageMask cooperativeMatrixSupportedStages = {};
};

struct BindMemoryStatusKHR {
  static constexpr StructureType structure_type = StructureType::E_BIND_MEMORY_STATUS_KHR;

  using NativeType = VkBindMemoryStatusKHR;

  auto operator<=>(const BindMemoryStatusKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  Result *pResult = {};
};

struct BindDescriptorSetsInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_BIND_DESCRIPTOR_SETS_INFO_KHR;

  using NativeType = VkBindDescriptorSetsInfoKHR;

  auto operator<=>(const BindDescriptorSetsInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ShaderStageMask stageFlags = {};
  VkPipelineLayout layout = {};
  uint32_t firstSet = {};
  uint32_t descriptorSetCount = {};
  VkDescriptorSet *pDescriptorSets = {};
  uint32_t dynamicOffsetCount = {};
  uint32_t *pDynamicOffsets = {};
};

struct PushConstantsInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_PUSH_CONSTANTS_INFO_KHR;

  using NativeType = VkPushConstantsInfoKHR;

  auto operator<=>(const PushConstantsInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkPipelineLayout layout = {};
  ShaderStageMask stageFlags = {};
  uint32_t offset = {};
  uint32_t size = {};
  void *pValues = {};
};

struct PushDescriptorSetInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_PUSH_DESCRIPTOR_SET_INFO_KHR;

  using NativeType = VkPushDescriptorSetInfoKHR;

  auto operator<=>(const PushDescriptorSetInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ShaderStageMask stageFlags = {};
  VkPipelineLayout layout = {};
  uint32_t set = {};
  uint32_t descriptorWriteCount = {};
  WriteDescriptorSet *pDescriptorWrites = {};
};

struct PushDescriptorSetWithTemplateInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_PUSH_DESCRIPTOR_SET_WITH_TEMPLATE_INFO_KHR;

  using NativeType = VkPushDescriptorSetWithTemplateInfoKHR;

  auto operator<=>(const PushDescriptorSetWithTemplateInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDescriptorUpdateTemplate descriptorUpdateTemplate = {};
  VkPipelineLayout layout = {};
  uint32_t set = {};
  void *pData = {};
};

struct SetDescriptorBufferOffsetsInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_SET_DESCRIPTOR_BUFFER_OFFSETS_INFO_EXT;

  using NativeType = VkSetDescriptorBufferOffsetsInfoEXT;

  auto operator<=>(const SetDescriptorBufferOffsetsInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ShaderStageMask stageFlags = {};
  VkPipelineLayout layout = {};
  uint32_t firstSet = {};
  uint32_t setCount = {};
  uint32_t *pBufferIndices = {};
  VkDeviceSize *pOffsets = {};
};

struct BindDescriptorBufferEmbeddedSamplersInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_BIND_DESCRIPTOR_BUFFER_EMBEDDED_SAMPLERS_INFO_EXT;

  using NativeType = VkBindDescriptorBufferEmbeddedSamplersInfoEXT;

  auto operator<=>(const BindDescriptorBufferEmbeddedSamplersInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  ShaderStageMask stageFlags = {};
  VkPipelineLayout layout = {};
  uint32_t set = {};
};

struct PhysicalDeviceCubicClampFeaturesQCOM {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM;

  using NativeType = VkPhysicalDeviceCubicClampFeaturesQCOM;

  auto operator<=>(const PhysicalDeviceCubicClampFeaturesQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 cubicRangeClamp = {};
};

struct PhysicalDeviceYcbcrDegammaFeaturesQCOM {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM;

  using NativeType = VkPhysicalDeviceYcbcrDegammaFeaturesQCOM;

  auto operator<=>(const PhysicalDeviceYcbcrDegammaFeaturesQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 ycbcrDegamma = {};
};

struct SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM {
  static constexpr StructureType structure_type = StructureType::E_SAMPLER_YCBCR_CONVERSION_YCBCR_DEGAMMA_CREATE_INFO_QCOM;

  using NativeType = VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM;

  auto operator<=>(const SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 enableYDegamma = {};
  VkBool32 enableCbCrDegamma = {};
};

struct PhysicalDeviceCubicWeightsFeaturesQCOM {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM;

  using NativeType = VkPhysicalDeviceCubicWeightsFeaturesQCOM;

  auto operator<=>(const PhysicalDeviceCubicWeightsFeaturesQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 selectableCubicWeights = {};
};

struct SamplerCubicWeightsCreateInfoQCOM {
  static constexpr StructureType structure_type = StructureType::E_SAMPLER_CUBIC_WEIGHTS_CREATE_INFO_QCOM;

  using NativeType = VkSamplerCubicWeightsCreateInfoQCOM;

  auto operator<=>(const SamplerCubicWeightsCreateInfoQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  CubicFilterWeights cubicWeights = {};
};

struct BlitImageCubicWeightsInfoQCOM {
  static constexpr StructureType structure_type = StructureType::E_BLIT_IMAGE_CUBIC_WEIGHTS_INFO_QCOM;

  using NativeType = VkBlitImageCubicWeightsInfoQCOM;

  auto operator<=>(const BlitImageCubicWeightsInfoQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  CubicFilterWeights cubicWeights = {};
};

struct PhysicalDeviceImageProcessing2FeaturesQCOM {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM;

  using NativeType = VkPhysicalDeviceImageProcessing2FeaturesQCOM;

  auto operator<=>(const PhysicalDeviceImageProcessing2FeaturesQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 textureBlockMatch2 = {};
};

struct PhysicalDeviceImageProcessing2PropertiesQCOM {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_PROPERTIES_QCOM;

  using NativeType = VkPhysicalDeviceImageProcessing2PropertiesQCOM;

  auto operator<=>(const PhysicalDeviceImageProcessing2PropertiesQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  Extent2D maxBlockMatchWindow = {};
};

struct SamplerBlockMatchWindowCreateInfoQCOM {
  static constexpr StructureType structure_type = StructureType::E_SAMPLER_BLOCK_MATCH_WINDOW_CREATE_INFO_QCOM;

  using NativeType = VkSamplerBlockMatchWindowCreateInfoQCOM;

  auto operator<=>(const SamplerBlockMatchWindowCreateInfoQCOM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  Extent2D windowExtent = {};
  BlockMatchWindowCompareMode windowCompareMode = {};
};

struct PhysicalDeviceDescriptorPoolOverallocationFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV;

  using NativeType = VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV;

  auto operator<=>(const PhysicalDeviceDescriptorPoolOverallocationFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 descriptorPoolOverallocation = {};
};

struct PhysicalDeviceLayeredDriverPropertiesMSFT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_LAYERED_DRIVER_PROPERTIES_MSFT;

  using NativeType = VkPhysicalDeviceLayeredDriverPropertiesMSFT;

  auto operator<=>(const PhysicalDeviceLayeredDriverPropertiesMSFT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  LayeredDriverUnderlyingApi underlyingAPI = {};
};

struct PhysicalDevicePerStageDescriptorSetFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV;

  using NativeType = VkPhysicalDevicePerStageDescriptorSetFeaturesNV;

  auto operator<=>(const PhysicalDevicePerStageDescriptorSetFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 perStageDescriptorSet = {};
  VkBool32 dynamicPipelineLayout = {};
};

struct LatencySleepModeInfoNV {
  static constexpr StructureType structure_type = StructureType::E_LATENCY_SLEEP_MODE_INFO_NV;

  using NativeType = VkLatencySleepModeInfoNV;

  auto operator<=>(const LatencySleepModeInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 lowLatencyMode = {};
  VkBool32 lowLatencyBoost = {};
  uint32_t minimumIntervalUs = {};
};

struct LatencySleepInfoNV {
  static constexpr StructureType structure_type = StructureType::E_LATENCY_SLEEP_INFO_NV;

  using NativeType = VkLatencySleepInfoNV;

  auto operator<=>(const LatencySleepInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkSemaphore signalSemaphore = {};
  uint64_t value = {};
};

struct SetLatencyMarkerInfoNV {
  static constexpr StructureType structure_type = StructureType::E_SET_LATENCY_MARKER_INFO_NV;

  using NativeType = VkSetLatencyMarkerInfoNV;

  auto operator<=>(const SetLatencyMarkerInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint64_t presentID = {};
  LatencyMarker marker = {};
};

struct LatencyTimingsFrameReportNV {
  static constexpr StructureType structure_type = StructureType::E_LATENCY_TIMINGS_FRAME_REPORT_NV;

  using NativeType = VkLatencyTimingsFrameReportNV;

  auto operator<=>(const LatencyTimingsFrameReportNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint64_t presentID = {};
  uint64_t inputSampleTimeUs = {};
  uint64_t simStartTimeUs = {};
  uint64_t simEndTimeUs = {};
  uint64_t renderSubmitStartTimeUs = {};
  uint64_t renderSubmitEndTimeUs = {};
  uint64_t presentStartTimeUs = {};
  uint64_t presentEndTimeUs = {};
  uint64_t driverStartTimeUs = {};
  uint64_t driverEndTimeUs = {};
  uint64_t osRenderQueueStartTimeUs = {};
  uint64_t osRenderQueueEndTimeUs = {};
  uint64_t gpuRenderStartTimeUs = {};
  uint64_t gpuRenderEndTimeUs = {};
};

struct GetLatencyMarkerInfoNV {
  static constexpr StructureType structure_type = StructureType::E_GET_LATENCY_MARKER_INFO_NV;

  using NativeType = VkGetLatencyMarkerInfoNV;

  auto operator<=>(const GetLatencyMarkerInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t timingCount = {};
  LatencyTimingsFrameReportNV *pTimings = {};
};

struct OutOfBandQueueTypeInfoNV {
  static constexpr StructureType structure_type = StructureType::E_OUT_OF_BAND_QUEUE_TYPE_INFO_NV;

  using NativeType = VkOutOfBandQueueTypeInfoNV;

  auto operator<=>(const OutOfBandQueueTypeInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  OutOfBandQueueType queueType = {};
};

struct LatencySubmissionPresentIdNV {
  static constexpr StructureType structure_type = StructureType::E_LATENCY_SUBMISSION_PRESENT_ID_NV;

  using NativeType = VkLatencySubmissionPresentIdNV;

  auto operator<=>(const LatencySubmissionPresentIdNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint64_t presentID = {};
};

struct SwapchainLatencyCreateInfoNV {
  static constexpr StructureType structure_type = StructureType::E_SWAPCHAIN_LATENCY_CREATE_INFO_NV;

  using NativeType = VkSwapchainLatencyCreateInfoNV;

  auto operator<=>(const SwapchainLatencyCreateInfoNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 latencyModeEnable = {};
};

struct LatencySurfaceCapabilitiesNV {
  static constexpr StructureType structure_type = StructureType::E_LATENCY_SURFACE_CAPABILITIES_NV;

  using NativeType = VkLatencySurfaceCapabilitiesNV;

  auto operator<=>(const LatencySurfaceCapabilitiesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t presentModeCount = {};
  PresentMode *pPresentModes = {};
};

struct PhysicalDeviceCudaKernelLaunchFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_FEATURES_NV;

  using NativeType = VkPhysicalDeviceCudaKernelLaunchFeaturesNV;

  auto operator<=>(const PhysicalDeviceCudaKernelLaunchFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 cudaKernelLaunchFeatures = {};
};

struct PhysicalDeviceCudaKernelLaunchPropertiesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_PROPERTIES_NV;

  using NativeType = VkPhysicalDeviceCudaKernelLaunchPropertiesNV;

  auto operator<=>(const PhysicalDeviceCudaKernelLaunchPropertiesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t computeCapabilityMinor = {};
  uint32_t computeCapabilityMajor = {};
};

struct DeviceQueueShaderCoreControlCreateInfoARM {
  static constexpr StructureType structure_type = StructureType::E_DEVICE_QUEUE_SHADER_CORE_CONTROL_CREATE_INFO_ARM;

  using NativeType = VkDeviceQueueShaderCoreControlCreateInfoARM;

  auto operator<=>(const DeviceQueueShaderCoreControlCreateInfoARM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t shaderCoreCount = {};
};

struct PhysicalDeviceSchedulingControlsFeaturesARM {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM;

  using NativeType = VkPhysicalDeviceSchedulingControlsFeaturesARM;

  auto operator<=>(const PhysicalDeviceSchedulingControlsFeaturesARM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 schedulingControls = {};
};

struct PhysicalDeviceSchedulingControlsPropertiesARM {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_PROPERTIES_ARM;

  using NativeType = VkPhysicalDeviceSchedulingControlsPropertiesARM;

  auto operator<=>(const PhysicalDeviceSchedulingControlsPropertiesARM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  PhysicalDeviceSchedulingControlsMask schedulingControlsFlags = {};
};

struct PhysicalDeviceRelaxedLineRasterizationFeaturesIMG {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG;

  using NativeType = VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG;

  auto operator<=>(const PhysicalDeviceRelaxedLineRasterizationFeaturesIMG &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 relaxedLineRasterization = {};
};

struct PhysicalDeviceRenderPassStripedFeaturesARM {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM;

  using NativeType = VkPhysicalDeviceRenderPassStripedFeaturesARM;

  auto operator<=>(const PhysicalDeviceRenderPassStripedFeaturesARM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 renderPassStriped = {};
};

struct PhysicalDeviceRenderPassStripedPropertiesARM {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_PROPERTIES_ARM;

  using NativeType = VkPhysicalDeviceRenderPassStripedPropertiesARM;

  auto operator<=>(const PhysicalDeviceRenderPassStripedPropertiesARM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  Extent2D renderPassStripeGranularity = {};
  uint32_t maxRenderPassStripes = {};
};

struct RenderPassStripeInfoARM {
  static constexpr StructureType structure_type = StructureType::E_RENDER_PASS_STRIPE_INFO_ARM;

  using NativeType = VkRenderPassStripeInfoARM;

  auto operator<=>(const RenderPassStripeInfoARM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  Rect2D stripeArea = {};
};

struct RenderPassStripeBeginInfoARM {
  static constexpr StructureType structure_type = StructureType::E_RENDER_PASS_STRIPE_BEGIN_INFO_ARM;

  using NativeType = VkRenderPassStripeBeginInfoARM;

  auto operator<=>(const RenderPassStripeBeginInfoARM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t stripeInfoCount = {};
  RenderPassStripeInfoARM *pStripeInfos = {};
};

struct RenderPassStripeSubmitInfoARM {
  static constexpr StructureType structure_type = StructureType::E_RENDER_PASS_STRIPE_SUBMIT_INFO_ARM;

  using NativeType = VkRenderPassStripeSubmitInfoARM;

  auto operator<=>(const RenderPassStripeSubmitInfoARM &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t stripeSemaphoreInfoCount = {};
  SemaphoreSubmitInfo *pStripeSemaphoreInfos = {};
};

struct PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR;

  auto operator<=>(const PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderMaximalReconvergence = {};
};

struct PhysicalDeviceShaderSubgroupRotateFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR;

  auto operator<=>(const PhysicalDeviceShaderSubgroupRotateFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderSubgroupRotate = {};
  VkBool32 shaderSubgroupRotateClustered = {};
};

struct PhysicalDeviceShaderExpectAssumeFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceShaderExpectAssumeFeaturesKHR;

  auto operator<=>(const PhysicalDeviceShaderExpectAssumeFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderExpectAssume = {};
};

struct PhysicalDeviceShaderFloatControls2FeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceShaderFloatControls2FeaturesKHR;

  auto operator<=>(const PhysicalDeviceShaderFloatControls2FeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderFloatControls2 = {};
};

struct PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR;

  auto operator<=>(const PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 dynamicRenderingLocalRead = {};
};

struct RenderingAttachmentLocationInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_RENDERING_ATTACHMENT_LOCATION_INFO_KHR;

  using NativeType = VkRenderingAttachmentLocationInfoKHR;

  auto operator<=>(const RenderingAttachmentLocationInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t colorAttachmentCount = {};
  uint32_t *pColorAttachmentLocations = {};
};

struct RenderingInputAttachmentIndexInfoKHR {
  static constexpr StructureType structure_type = StructureType::E_RENDERING_INPUT_ATTACHMENT_INDEX_INFO_KHR;

  using NativeType = VkRenderingInputAttachmentIndexInfoKHR;

  auto operator<=>(const RenderingInputAttachmentIndexInfoKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t colorAttachmentCount = {};
  uint32_t *pColorAttachmentInputIndices = {};
  uint32_t *pDepthInputAttachmentIndex = {};
  uint32_t *pStencilInputAttachmentIndex = {};
};

struct PhysicalDeviceShaderQuadControlFeaturesKHR {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR;

  using NativeType = VkPhysicalDeviceShaderQuadControlFeaturesKHR;

  auto operator<=>(const PhysicalDeviceShaderQuadControlFeaturesKHR &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderQuadControl = {};
};

struct PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV;

  using NativeType = VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV;

  auto operator<=>(const PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderFloat16VectorAtomics = {};
};

struct PhysicalDeviceMapMemoryPlacedFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceMapMemoryPlacedFeaturesEXT;

  auto operator<=>(const PhysicalDeviceMapMemoryPlacedFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 memoryMapPlaced = {};
  VkBool32 memoryMapRangePlaced = {};
  VkBool32 memoryUnmapReserve = {};
};

struct PhysicalDeviceMapMemoryPlacedPropertiesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_PROPERTIES_EXT;

  using NativeType = VkPhysicalDeviceMapMemoryPlacedPropertiesEXT;

  auto operator<=>(const PhysicalDeviceMapMemoryPlacedPropertiesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkDeviceSize minPlacedMemoryMapAlignment = {};
};

struct MemoryMapPlacedInfoEXT {
  static constexpr StructureType structure_type = StructureType::E_MEMORY_MAP_PLACED_INFO_EXT;

  using NativeType = VkMemoryMapPlacedInfoEXT;

  auto operator<=>(const MemoryMapPlacedInfoEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  void *pPlacedAddress = {};
};

struct PhysicalDeviceRawAccessChainsFeaturesNV {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV;

  using NativeType = VkPhysicalDeviceRawAccessChainsFeaturesNV;

  auto operator<=>(const PhysicalDeviceRawAccessChainsFeaturesNV &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderRawAccessChains = {};
};

struct PhysicalDeviceImageAlignmentControlFeaturesMESA {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_FEATURES_MESA;

  using NativeType = VkPhysicalDeviceImageAlignmentControlFeaturesMESA;

  auto operator<=>(const PhysicalDeviceImageAlignmentControlFeaturesMESA &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 imageAlignmentControl = {};
};

struct PhysicalDeviceImageAlignmentControlPropertiesMESA {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_PROPERTIES_MESA;

  using NativeType = VkPhysicalDeviceImageAlignmentControlPropertiesMESA;

  auto operator<=>(const PhysicalDeviceImageAlignmentControlPropertiesMESA &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t supportedImageAlignmentMask = {};
};

struct ImageAlignmentControlCreateInfoMESA {
  static constexpr StructureType structure_type = StructureType::E_IMAGE_ALIGNMENT_CONTROL_CREATE_INFO_MESA;

  using NativeType = VkImageAlignmentControlCreateInfoMESA;

  auto operator<=>(const ImageAlignmentControlCreateInfoMESA &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  uint32_t maximumRequestedAlignment = {};
};

struct PhysicalDeviceShaderReplicatedCompositesFeaturesEXT {
  static constexpr StructureType structure_type = StructureType::E_PHYSICAL_DEVICE_SHADER_REPLICATED_COMPOSITES_FEATURES_EXT;

  using NativeType = VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT;

  auto operator<=>(const PhysicalDeviceShaderReplicatedCompositesFeaturesEXT &other) const = default;

  operator const NativeType &() const noexcept;
  operator NativeType &() noexcept;
  operator const NativeType *() const noexcept;
  operator NativeType *() noexcept;

  StructureType sType = structure_type;
  void *pNext = {};
  VkBool32 shaderReplicatedComposites = {};
};

} // end namespace Wolf

#endif // WOLF_STRUCTURES_H
