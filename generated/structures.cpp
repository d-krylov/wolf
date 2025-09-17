
// included
#include "structures.h"

namespace Wolf {

// content

BaseOutStructure::operator const VkBaseOutStructure &() const noexcept {
  return *reinterpret_cast<const VkBaseOutStructure *>(this);
}

BaseOutStructure::operator VkBaseOutStructure &() noexcept {
  return *reinterpret_cast<VkBaseOutStructure *>(this);
}

BaseOutStructure::operator const VkBaseOutStructure *() const noexcept {
  return reinterpret_cast<const VkBaseOutStructure *>(this);
}

BaseOutStructure::operator VkBaseOutStructure *() noexcept {
  return reinterpret_cast<VkBaseOutStructure *>(this);
}

BaseInStructure::operator const VkBaseInStructure &() const noexcept {
  return *reinterpret_cast<const VkBaseInStructure *>(this);
}

BaseInStructure::operator VkBaseInStructure &() noexcept {
  return *reinterpret_cast<VkBaseInStructure *>(this);
}

BaseInStructure::operator const VkBaseInStructure *() const noexcept {
  return reinterpret_cast<const VkBaseInStructure *>(this);
}

BaseInStructure::operator VkBaseInStructure *() noexcept {
  return reinterpret_cast<VkBaseInStructure *>(this);
}

Offset2D::operator const VkOffset2D &() const noexcept {
  return *reinterpret_cast<const VkOffset2D *>(this);
}

Offset2D::operator VkOffset2D &() noexcept {
  return *reinterpret_cast<VkOffset2D *>(this);
}

Offset2D::operator const VkOffset2D *() const noexcept {
  return reinterpret_cast<const VkOffset2D *>(this);
}

Offset2D::operator VkOffset2D *() noexcept {
  return reinterpret_cast<VkOffset2D *>(this);
}

Offset3D::operator const VkOffset3D &() const noexcept {
  return *reinterpret_cast<const VkOffset3D *>(this);
}

Offset3D::operator VkOffset3D &() noexcept {
  return *reinterpret_cast<VkOffset3D *>(this);
}

Offset3D::operator const VkOffset3D *() const noexcept {
  return reinterpret_cast<const VkOffset3D *>(this);
}

Offset3D::operator VkOffset3D *() noexcept {
  return reinterpret_cast<VkOffset3D *>(this);
}

Extent2D::operator const VkExtent2D &() const noexcept {
  return *reinterpret_cast<const VkExtent2D *>(this);
}

Extent2D::operator VkExtent2D &() noexcept {
  return *reinterpret_cast<VkExtent2D *>(this);
}

Extent2D::operator const VkExtent2D *() const noexcept {
  return reinterpret_cast<const VkExtent2D *>(this);
}

Extent2D::operator VkExtent2D *() noexcept {
  return reinterpret_cast<VkExtent2D *>(this);
}

Extent3D::operator const VkExtent3D &() const noexcept {
  return *reinterpret_cast<const VkExtent3D *>(this);
}

Extent3D::operator VkExtent3D &() noexcept {
  return *reinterpret_cast<VkExtent3D *>(this);
}

Extent3D::operator const VkExtent3D *() const noexcept {
  return reinterpret_cast<const VkExtent3D *>(this);
}

Extent3D::operator VkExtent3D *() noexcept {
  return reinterpret_cast<VkExtent3D *>(this);
}

Viewport::operator const VkViewport &() const noexcept {
  return *reinterpret_cast<const VkViewport *>(this);
}

Viewport::operator VkViewport &() noexcept {
  return *reinterpret_cast<VkViewport *>(this);
}

Viewport::operator const VkViewport *() const noexcept {
  return reinterpret_cast<const VkViewport *>(this);
}

Viewport::operator VkViewport *() noexcept {
  return reinterpret_cast<VkViewport *>(this);
}

Rect2D::operator const VkRect2D &() const noexcept {
  return *reinterpret_cast<const VkRect2D *>(this);
}

Rect2D::operator VkRect2D &() noexcept {
  return *reinterpret_cast<VkRect2D *>(this);
}

Rect2D::operator const VkRect2D *() const noexcept {
  return reinterpret_cast<const VkRect2D *>(this);
}

Rect2D::operator VkRect2D *() noexcept {
  return reinterpret_cast<VkRect2D *>(this);
}

ClearRect::operator const VkClearRect &() const noexcept {
  return *reinterpret_cast<const VkClearRect *>(this);
}

ClearRect::operator VkClearRect &() noexcept {
  return *reinterpret_cast<VkClearRect *>(this);
}

ClearRect::operator const VkClearRect *() const noexcept {
  return reinterpret_cast<const VkClearRect *>(this);
}

ClearRect::operator VkClearRect *() noexcept {
  return reinterpret_cast<VkClearRect *>(this);
}

ComponentMapping::operator const VkComponentMapping &() const noexcept {
  return *reinterpret_cast<const VkComponentMapping *>(this);
}

ComponentMapping::operator VkComponentMapping &() noexcept {
  return *reinterpret_cast<VkComponentMapping *>(this);
}

ComponentMapping::operator const VkComponentMapping *() const noexcept {
  return reinterpret_cast<const VkComponentMapping *>(this);
}

ComponentMapping::operator VkComponentMapping *() noexcept {
  return reinterpret_cast<VkComponentMapping *>(this);
}

PhysicalDeviceLimits::operator const VkPhysicalDeviceLimits &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceLimits *>(this);
}

PhysicalDeviceLimits::operator VkPhysicalDeviceLimits &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceLimits *>(this);
}

PhysicalDeviceLimits::operator const VkPhysicalDeviceLimits *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceLimits *>(this);
}

PhysicalDeviceLimits::operator VkPhysicalDeviceLimits *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceLimits *>(this);
}

PhysicalDeviceSparseProperties::operator const VkPhysicalDeviceSparseProperties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceSparseProperties *>(this);
}

PhysicalDeviceSparseProperties::operator VkPhysicalDeviceSparseProperties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceSparseProperties *>(this);
}

PhysicalDeviceSparseProperties::operator const VkPhysicalDeviceSparseProperties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceSparseProperties *>(this);
}

PhysicalDeviceSparseProperties::operator VkPhysicalDeviceSparseProperties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceSparseProperties *>(this);
}

PhysicalDeviceProperties::operator const VkPhysicalDeviceProperties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceProperties *>(this);
}

PhysicalDeviceProperties::operator VkPhysicalDeviceProperties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceProperties *>(this);
}

PhysicalDeviceProperties::operator const VkPhysicalDeviceProperties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceProperties *>(this);
}

PhysicalDeviceProperties::operator VkPhysicalDeviceProperties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceProperties *>(this);
}

ExtensionProperties::operator const VkExtensionProperties &() const noexcept {
  return *reinterpret_cast<const VkExtensionProperties *>(this);
}

ExtensionProperties::operator VkExtensionProperties &() noexcept {
  return *reinterpret_cast<VkExtensionProperties *>(this);
}

ExtensionProperties::operator const VkExtensionProperties *() const noexcept {
  return reinterpret_cast<const VkExtensionProperties *>(this);
}

ExtensionProperties::operator VkExtensionProperties *() noexcept {
  return reinterpret_cast<VkExtensionProperties *>(this);
}

LayerProperties::operator const VkLayerProperties &() const noexcept {
  return *reinterpret_cast<const VkLayerProperties *>(this);
}

LayerProperties::operator VkLayerProperties &() noexcept {
  return *reinterpret_cast<VkLayerProperties *>(this);
}

LayerProperties::operator const VkLayerProperties *() const noexcept {
  return reinterpret_cast<const VkLayerProperties *>(this);
}

LayerProperties::operator VkLayerProperties *() noexcept {
  return reinterpret_cast<VkLayerProperties *>(this);
}

ApplicationInfo::operator const VkApplicationInfo &() const noexcept {
  return *reinterpret_cast<const VkApplicationInfo *>(this);
}

ApplicationInfo::operator VkApplicationInfo &() noexcept {
  return *reinterpret_cast<VkApplicationInfo *>(this);
}

ApplicationInfo::operator const VkApplicationInfo *() const noexcept {
  return reinterpret_cast<const VkApplicationInfo *>(this);
}

ApplicationInfo::operator VkApplicationInfo *() noexcept {
  return reinterpret_cast<VkApplicationInfo *>(this);
}

AllocationCallbacks::operator const VkAllocationCallbacks &() const noexcept {
  return *reinterpret_cast<const VkAllocationCallbacks *>(this);
}

AllocationCallbacks::operator VkAllocationCallbacks &() noexcept {
  return *reinterpret_cast<VkAllocationCallbacks *>(this);
}

AllocationCallbacks::operator const VkAllocationCallbacks *() const noexcept {
  return reinterpret_cast<const VkAllocationCallbacks *>(this);
}

AllocationCallbacks::operator VkAllocationCallbacks *() noexcept {
  return reinterpret_cast<VkAllocationCallbacks *>(this);
}

DeviceQueueCreateInfo::operator const VkDeviceQueueCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkDeviceQueueCreateInfo *>(this);
}

DeviceQueueCreateInfo::operator VkDeviceQueueCreateInfo &() noexcept {
  return *reinterpret_cast<VkDeviceQueueCreateInfo *>(this);
}

DeviceQueueCreateInfo::operator const VkDeviceQueueCreateInfo *() const noexcept {
  return reinterpret_cast<const VkDeviceQueueCreateInfo *>(this);
}

DeviceQueueCreateInfo::operator VkDeviceQueueCreateInfo *() noexcept {
  return reinterpret_cast<VkDeviceQueueCreateInfo *>(this);
}

PhysicalDeviceFeatures::operator const VkPhysicalDeviceFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceFeatures *>(this);
}

PhysicalDeviceFeatures::operator VkPhysicalDeviceFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceFeatures *>(this);
}

PhysicalDeviceFeatures::operator const VkPhysicalDeviceFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceFeatures *>(this);
}

PhysicalDeviceFeatures::operator VkPhysicalDeviceFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceFeatures *>(this);
}

DeviceCreateInfo::operator const VkDeviceCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkDeviceCreateInfo *>(this);
}

DeviceCreateInfo::operator VkDeviceCreateInfo &() noexcept {
  return *reinterpret_cast<VkDeviceCreateInfo *>(this);
}

DeviceCreateInfo::operator const VkDeviceCreateInfo *() const noexcept {
  return reinterpret_cast<const VkDeviceCreateInfo *>(this);
}

DeviceCreateInfo::operator VkDeviceCreateInfo *() noexcept {
  return reinterpret_cast<VkDeviceCreateInfo *>(this);
}

InstanceCreateInfo::operator const VkInstanceCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkInstanceCreateInfo *>(this);
}

InstanceCreateInfo::operator VkInstanceCreateInfo &() noexcept {
  return *reinterpret_cast<VkInstanceCreateInfo *>(this);
}

InstanceCreateInfo::operator const VkInstanceCreateInfo *() const noexcept {
  return reinterpret_cast<const VkInstanceCreateInfo *>(this);
}

InstanceCreateInfo::operator VkInstanceCreateInfo *() noexcept {
  return reinterpret_cast<VkInstanceCreateInfo *>(this);
}

QueueFamilyProperties::operator const VkQueueFamilyProperties &() const noexcept {
  return *reinterpret_cast<const VkQueueFamilyProperties *>(this);
}

QueueFamilyProperties::operator VkQueueFamilyProperties &() noexcept {
  return *reinterpret_cast<VkQueueFamilyProperties *>(this);
}

QueueFamilyProperties::operator const VkQueueFamilyProperties *() const noexcept {
  return reinterpret_cast<const VkQueueFamilyProperties *>(this);
}

QueueFamilyProperties::operator VkQueueFamilyProperties *() noexcept {
  return reinterpret_cast<VkQueueFamilyProperties *>(this);
}

MemoryType::operator const VkMemoryType &() const noexcept {
  return *reinterpret_cast<const VkMemoryType *>(this);
}

MemoryType::operator VkMemoryType &() noexcept {
  return *reinterpret_cast<VkMemoryType *>(this);
}

MemoryType::operator const VkMemoryType *() const noexcept {
  return reinterpret_cast<const VkMemoryType *>(this);
}

MemoryType::operator VkMemoryType *() noexcept {
  return reinterpret_cast<VkMemoryType *>(this);
}

MemoryHeap::operator const VkMemoryHeap &() const noexcept {
  return *reinterpret_cast<const VkMemoryHeap *>(this);
}

MemoryHeap::operator VkMemoryHeap &() noexcept {
  return *reinterpret_cast<VkMemoryHeap *>(this);
}

MemoryHeap::operator const VkMemoryHeap *() const noexcept {
  return reinterpret_cast<const VkMemoryHeap *>(this);
}

MemoryHeap::operator VkMemoryHeap *() noexcept {
  return reinterpret_cast<VkMemoryHeap *>(this);
}

PhysicalDeviceMemoryProperties::operator const VkPhysicalDeviceMemoryProperties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMemoryProperties *>(this);
}

PhysicalDeviceMemoryProperties::operator VkPhysicalDeviceMemoryProperties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMemoryProperties *>(this);
}

PhysicalDeviceMemoryProperties::operator const VkPhysicalDeviceMemoryProperties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMemoryProperties *>(this);
}

PhysicalDeviceMemoryProperties::operator VkPhysicalDeviceMemoryProperties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMemoryProperties *>(this);
}

MemoryAllocateInfo::operator const VkMemoryAllocateInfo &() const noexcept {
  return *reinterpret_cast<const VkMemoryAllocateInfo *>(this);
}

MemoryAllocateInfo::operator VkMemoryAllocateInfo &() noexcept {
  return *reinterpret_cast<VkMemoryAllocateInfo *>(this);
}

MemoryAllocateInfo::operator const VkMemoryAllocateInfo *() const noexcept {
  return reinterpret_cast<const VkMemoryAllocateInfo *>(this);
}

MemoryAllocateInfo::operator VkMemoryAllocateInfo *() noexcept {
  return reinterpret_cast<VkMemoryAllocateInfo *>(this);
}

MemoryRequirements::operator const VkMemoryRequirements &() const noexcept {
  return *reinterpret_cast<const VkMemoryRequirements *>(this);
}

MemoryRequirements::operator VkMemoryRequirements &() noexcept {
  return *reinterpret_cast<VkMemoryRequirements *>(this);
}

MemoryRequirements::operator const VkMemoryRequirements *() const noexcept {
  return reinterpret_cast<const VkMemoryRequirements *>(this);
}

MemoryRequirements::operator VkMemoryRequirements *() noexcept {
  return reinterpret_cast<VkMemoryRequirements *>(this);
}

SparseImageFormatProperties::operator const VkSparseImageFormatProperties &() const noexcept {
  return *reinterpret_cast<const VkSparseImageFormatProperties *>(this);
}

SparseImageFormatProperties::operator VkSparseImageFormatProperties &() noexcept {
  return *reinterpret_cast<VkSparseImageFormatProperties *>(this);
}

SparseImageFormatProperties::operator const VkSparseImageFormatProperties *() const noexcept {
  return reinterpret_cast<const VkSparseImageFormatProperties *>(this);
}

SparseImageFormatProperties::operator VkSparseImageFormatProperties *() noexcept {
  return reinterpret_cast<VkSparseImageFormatProperties *>(this);
}

SparseImageMemoryRequirements::operator const VkSparseImageMemoryRequirements &() const noexcept {
  return *reinterpret_cast<const VkSparseImageMemoryRequirements *>(this);
}

SparseImageMemoryRequirements::operator VkSparseImageMemoryRequirements &() noexcept {
  return *reinterpret_cast<VkSparseImageMemoryRequirements *>(this);
}

SparseImageMemoryRequirements::operator const VkSparseImageMemoryRequirements *() const noexcept {
  return reinterpret_cast<const VkSparseImageMemoryRequirements *>(this);
}

SparseImageMemoryRequirements::operator VkSparseImageMemoryRequirements *() noexcept {
  return reinterpret_cast<VkSparseImageMemoryRequirements *>(this);
}

MappedMemoryRange::operator const VkMappedMemoryRange &() const noexcept {
  return *reinterpret_cast<const VkMappedMemoryRange *>(this);
}

MappedMemoryRange::operator VkMappedMemoryRange &() noexcept {
  return *reinterpret_cast<VkMappedMemoryRange *>(this);
}

MappedMemoryRange::operator const VkMappedMemoryRange *() const noexcept {
  return reinterpret_cast<const VkMappedMemoryRange *>(this);
}

MappedMemoryRange::operator VkMappedMemoryRange *() noexcept {
  return reinterpret_cast<VkMappedMemoryRange *>(this);
}

FormatProperties::operator const VkFormatProperties &() const noexcept {
  return *reinterpret_cast<const VkFormatProperties *>(this);
}

FormatProperties::operator VkFormatProperties &() noexcept {
  return *reinterpret_cast<VkFormatProperties *>(this);
}

FormatProperties::operator const VkFormatProperties *() const noexcept {
  return reinterpret_cast<const VkFormatProperties *>(this);
}

FormatProperties::operator VkFormatProperties *() noexcept {
  return reinterpret_cast<VkFormatProperties *>(this);
}

ImageFormatProperties::operator const VkImageFormatProperties &() const noexcept {
  return *reinterpret_cast<const VkImageFormatProperties *>(this);
}

ImageFormatProperties::operator VkImageFormatProperties &() noexcept {
  return *reinterpret_cast<VkImageFormatProperties *>(this);
}

ImageFormatProperties::operator const VkImageFormatProperties *() const noexcept {
  return reinterpret_cast<const VkImageFormatProperties *>(this);
}

ImageFormatProperties::operator VkImageFormatProperties *() noexcept {
  return reinterpret_cast<VkImageFormatProperties *>(this);
}

DescriptorBufferInfo::operator const VkDescriptorBufferInfo &() const noexcept {
  return *reinterpret_cast<const VkDescriptorBufferInfo *>(this);
}

DescriptorBufferInfo::operator VkDescriptorBufferInfo &() noexcept {
  return *reinterpret_cast<VkDescriptorBufferInfo *>(this);
}

DescriptorBufferInfo::operator const VkDescriptorBufferInfo *() const noexcept {
  return reinterpret_cast<const VkDescriptorBufferInfo *>(this);
}

DescriptorBufferInfo::operator VkDescriptorBufferInfo *() noexcept {
  return reinterpret_cast<VkDescriptorBufferInfo *>(this);
}

DescriptorImageInfo::operator const VkDescriptorImageInfo &() const noexcept {
  return *reinterpret_cast<const VkDescriptorImageInfo *>(this);
}

DescriptorImageInfo::operator VkDescriptorImageInfo &() noexcept {
  return *reinterpret_cast<VkDescriptorImageInfo *>(this);
}

DescriptorImageInfo::operator const VkDescriptorImageInfo *() const noexcept {
  return reinterpret_cast<const VkDescriptorImageInfo *>(this);
}

DescriptorImageInfo::operator VkDescriptorImageInfo *() noexcept {
  return reinterpret_cast<VkDescriptorImageInfo *>(this);
}

WriteDescriptorSet::operator const VkWriteDescriptorSet &() const noexcept {
  return *reinterpret_cast<const VkWriteDescriptorSet *>(this);
}

WriteDescriptorSet::operator VkWriteDescriptorSet &() noexcept {
  return *reinterpret_cast<VkWriteDescriptorSet *>(this);
}

WriteDescriptorSet::operator const VkWriteDescriptorSet *() const noexcept {
  return reinterpret_cast<const VkWriteDescriptorSet *>(this);
}

WriteDescriptorSet::operator VkWriteDescriptorSet *() noexcept {
  return reinterpret_cast<VkWriteDescriptorSet *>(this);
}

CopyDescriptorSet::operator const VkCopyDescriptorSet &() const noexcept {
  return *reinterpret_cast<const VkCopyDescriptorSet *>(this);
}

CopyDescriptorSet::operator VkCopyDescriptorSet &() noexcept {
  return *reinterpret_cast<VkCopyDescriptorSet *>(this);
}

CopyDescriptorSet::operator const VkCopyDescriptorSet *() const noexcept {
  return reinterpret_cast<const VkCopyDescriptorSet *>(this);
}

CopyDescriptorSet::operator VkCopyDescriptorSet *() noexcept {
  return reinterpret_cast<VkCopyDescriptorSet *>(this);
}

BufferUsageFlags2CreateInfoKHR::operator const VkBufferUsageFlags2CreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkBufferUsageFlags2CreateInfoKHR *>(this);
}

BufferUsageFlags2CreateInfoKHR::operator VkBufferUsageFlags2CreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkBufferUsageFlags2CreateInfoKHR *>(this);
}

BufferUsageFlags2CreateInfoKHR::operator const VkBufferUsageFlags2CreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkBufferUsageFlags2CreateInfoKHR *>(this);
}

BufferUsageFlags2CreateInfoKHR::operator VkBufferUsageFlags2CreateInfoKHR *() noexcept {
  return reinterpret_cast<VkBufferUsageFlags2CreateInfoKHR *>(this);
}

BufferCreateInfo::operator const VkBufferCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkBufferCreateInfo *>(this);
}

BufferCreateInfo::operator VkBufferCreateInfo &() noexcept {
  return *reinterpret_cast<VkBufferCreateInfo *>(this);
}

BufferCreateInfo::operator const VkBufferCreateInfo *() const noexcept {
  return reinterpret_cast<const VkBufferCreateInfo *>(this);
}

BufferCreateInfo::operator VkBufferCreateInfo *() noexcept {
  return reinterpret_cast<VkBufferCreateInfo *>(this);
}

BufferViewCreateInfo::operator const VkBufferViewCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkBufferViewCreateInfo *>(this);
}

BufferViewCreateInfo::operator VkBufferViewCreateInfo &() noexcept {
  return *reinterpret_cast<VkBufferViewCreateInfo *>(this);
}

BufferViewCreateInfo::operator const VkBufferViewCreateInfo *() const noexcept {
  return reinterpret_cast<const VkBufferViewCreateInfo *>(this);
}

BufferViewCreateInfo::operator VkBufferViewCreateInfo *() noexcept {
  return reinterpret_cast<VkBufferViewCreateInfo *>(this);
}

ImageSubresource::operator const VkImageSubresource &() const noexcept {
  return *reinterpret_cast<const VkImageSubresource *>(this);
}

ImageSubresource::operator VkImageSubresource &() noexcept {
  return *reinterpret_cast<VkImageSubresource *>(this);
}

ImageSubresource::operator const VkImageSubresource *() const noexcept {
  return reinterpret_cast<const VkImageSubresource *>(this);
}

ImageSubresource::operator VkImageSubresource *() noexcept {
  return reinterpret_cast<VkImageSubresource *>(this);
}

ImageSubresourceLayers::operator const VkImageSubresourceLayers &() const noexcept {
  return *reinterpret_cast<const VkImageSubresourceLayers *>(this);
}

ImageSubresourceLayers::operator VkImageSubresourceLayers &() noexcept {
  return *reinterpret_cast<VkImageSubresourceLayers *>(this);
}

ImageSubresourceLayers::operator const VkImageSubresourceLayers *() const noexcept {
  return reinterpret_cast<const VkImageSubresourceLayers *>(this);
}

ImageSubresourceLayers::operator VkImageSubresourceLayers *() noexcept {
  return reinterpret_cast<VkImageSubresourceLayers *>(this);
}

ImageSubresourceRange::operator const VkImageSubresourceRange &() const noexcept {
  return *reinterpret_cast<const VkImageSubresourceRange *>(this);
}

ImageSubresourceRange::operator VkImageSubresourceRange &() noexcept {
  return *reinterpret_cast<VkImageSubresourceRange *>(this);
}

ImageSubresourceRange::operator const VkImageSubresourceRange *() const noexcept {
  return reinterpret_cast<const VkImageSubresourceRange *>(this);
}

ImageSubresourceRange::operator VkImageSubresourceRange *() noexcept {
  return reinterpret_cast<VkImageSubresourceRange *>(this);
}

MemoryBarrier::operator const VkMemoryBarrier &() const noexcept {
  return *reinterpret_cast<const VkMemoryBarrier *>(this);
}

MemoryBarrier::operator VkMemoryBarrier &() noexcept {
  return *reinterpret_cast<VkMemoryBarrier *>(this);
}

MemoryBarrier::operator const VkMemoryBarrier *() const noexcept {
  return reinterpret_cast<const VkMemoryBarrier *>(this);
}

MemoryBarrier::operator VkMemoryBarrier *() noexcept {
  return reinterpret_cast<VkMemoryBarrier *>(this);
}

BufferMemoryBarrier::operator const VkBufferMemoryBarrier &() const noexcept {
  return *reinterpret_cast<const VkBufferMemoryBarrier *>(this);
}

BufferMemoryBarrier::operator VkBufferMemoryBarrier &() noexcept {
  return *reinterpret_cast<VkBufferMemoryBarrier *>(this);
}

BufferMemoryBarrier::operator const VkBufferMemoryBarrier *() const noexcept {
  return reinterpret_cast<const VkBufferMemoryBarrier *>(this);
}

BufferMemoryBarrier::operator VkBufferMemoryBarrier *() noexcept {
  return reinterpret_cast<VkBufferMemoryBarrier *>(this);
}

ImageMemoryBarrier::operator const VkImageMemoryBarrier &() const noexcept {
  return *reinterpret_cast<const VkImageMemoryBarrier *>(this);
}

ImageMemoryBarrier::operator VkImageMemoryBarrier &() noexcept {
  return *reinterpret_cast<VkImageMemoryBarrier *>(this);
}

ImageMemoryBarrier::operator const VkImageMemoryBarrier *() const noexcept {
  return reinterpret_cast<const VkImageMemoryBarrier *>(this);
}

ImageMemoryBarrier::operator VkImageMemoryBarrier *() noexcept {
  return reinterpret_cast<VkImageMemoryBarrier *>(this);
}

ImageCreateInfo::operator const VkImageCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkImageCreateInfo *>(this);
}

ImageCreateInfo::operator VkImageCreateInfo &() noexcept {
  return *reinterpret_cast<VkImageCreateInfo *>(this);
}

ImageCreateInfo::operator const VkImageCreateInfo *() const noexcept {
  return reinterpret_cast<const VkImageCreateInfo *>(this);
}

ImageCreateInfo::operator VkImageCreateInfo *() noexcept {
  return reinterpret_cast<VkImageCreateInfo *>(this);
}

SubresourceLayout::operator const VkSubresourceLayout &() const noexcept {
  return *reinterpret_cast<const VkSubresourceLayout *>(this);
}

SubresourceLayout::operator VkSubresourceLayout &() noexcept {
  return *reinterpret_cast<VkSubresourceLayout *>(this);
}

SubresourceLayout::operator const VkSubresourceLayout *() const noexcept {
  return reinterpret_cast<const VkSubresourceLayout *>(this);
}

SubresourceLayout::operator VkSubresourceLayout *() noexcept {
  return reinterpret_cast<VkSubresourceLayout *>(this);
}

ImageViewCreateInfo::operator const VkImageViewCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkImageViewCreateInfo *>(this);
}

ImageViewCreateInfo::operator VkImageViewCreateInfo &() noexcept {
  return *reinterpret_cast<VkImageViewCreateInfo *>(this);
}

ImageViewCreateInfo::operator const VkImageViewCreateInfo *() const noexcept {
  return reinterpret_cast<const VkImageViewCreateInfo *>(this);
}

ImageViewCreateInfo::operator VkImageViewCreateInfo *() noexcept {
  return reinterpret_cast<VkImageViewCreateInfo *>(this);
}

BufferCopy::operator const VkBufferCopy &() const noexcept {
  return *reinterpret_cast<const VkBufferCopy *>(this);
}

BufferCopy::operator VkBufferCopy &() noexcept {
  return *reinterpret_cast<VkBufferCopy *>(this);
}

BufferCopy::operator const VkBufferCopy *() const noexcept {
  return reinterpret_cast<const VkBufferCopy *>(this);
}

BufferCopy::operator VkBufferCopy *() noexcept {
  return reinterpret_cast<VkBufferCopy *>(this);
}

SparseMemoryBind::operator const VkSparseMemoryBind &() const noexcept {
  return *reinterpret_cast<const VkSparseMemoryBind *>(this);
}

SparseMemoryBind::operator VkSparseMemoryBind &() noexcept {
  return *reinterpret_cast<VkSparseMemoryBind *>(this);
}

SparseMemoryBind::operator const VkSparseMemoryBind *() const noexcept {
  return reinterpret_cast<const VkSparseMemoryBind *>(this);
}

SparseMemoryBind::operator VkSparseMemoryBind *() noexcept {
  return reinterpret_cast<VkSparseMemoryBind *>(this);
}

SparseImageMemoryBind::operator const VkSparseImageMemoryBind &() const noexcept {
  return *reinterpret_cast<const VkSparseImageMemoryBind *>(this);
}

SparseImageMemoryBind::operator VkSparseImageMemoryBind &() noexcept {
  return *reinterpret_cast<VkSparseImageMemoryBind *>(this);
}

SparseImageMemoryBind::operator const VkSparseImageMemoryBind *() const noexcept {
  return reinterpret_cast<const VkSparseImageMemoryBind *>(this);
}

SparseImageMemoryBind::operator VkSparseImageMemoryBind *() noexcept {
  return reinterpret_cast<VkSparseImageMemoryBind *>(this);
}

SparseBufferMemoryBindInfo::operator const VkSparseBufferMemoryBindInfo &() const noexcept {
  return *reinterpret_cast<const VkSparseBufferMemoryBindInfo *>(this);
}

SparseBufferMemoryBindInfo::operator VkSparseBufferMemoryBindInfo &() noexcept {
  return *reinterpret_cast<VkSparseBufferMemoryBindInfo *>(this);
}

SparseBufferMemoryBindInfo::operator const VkSparseBufferMemoryBindInfo *() const noexcept {
  return reinterpret_cast<const VkSparseBufferMemoryBindInfo *>(this);
}

SparseBufferMemoryBindInfo::operator VkSparseBufferMemoryBindInfo *() noexcept {
  return reinterpret_cast<VkSparseBufferMemoryBindInfo *>(this);
}

SparseImageOpaqueMemoryBindInfo::operator const VkSparseImageOpaqueMemoryBindInfo &() const noexcept {
  return *reinterpret_cast<const VkSparseImageOpaqueMemoryBindInfo *>(this);
}

SparseImageOpaqueMemoryBindInfo::operator VkSparseImageOpaqueMemoryBindInfo &() noexcept {
  return *reinterpret_cast<VkSparseImageOpaqueMemoryBindInfo *>(this);
}

SparseImageOpaqueMemoryBindInfo::operator const VkSparseImageOpaqueMemoryBindInfo *() const noexcept {
  return reinterpret_cast<const VkSparseImageOpaqueMemoryBindInfo *>(this);
}

SparseImageOpaqueMemoryBindInfo::operator VkSparseImageOpaqueMemoryBindInfo *() noexcept {
  return reinterpret_cast<VkSparseImageOpaqueMemoryBindInfo *>(this);
}

SparseImageMemoryBindInfo::operator const VkSparseImageMemoryBindInfo &() const noexcept {
  return *reinterpret_cast<const VkSparseImageMemoryBindInfo *>(this);
}

SparseImageMemoryBindInfo::operator VkSparseImageMemoryBindInfo &() noexcept {
  return *reinterpret_cast<VkSparseImageMemoryBindInfo *>(this);
}

SparseImageMemoryBindInfo::operator const VkSparseImageMemoryBindInfo *() const noexcept {
  return reinterpret_cast<const VkSparseImageMemoryBindInfo *>(this);
}

SparseImageMemoryBindInfo::operator VkSparseImageMemoryBindInfo *() noexcept {
  return reinterpret_cast<VkSparseImageMemoryBindInfo *>(this);
}

BindSparseInfo::operator const VkBindSparseInfo &() const noexcept {
  return *reinterpret_cast<const VkBindSparseInfo *>(this);
}

BindSparseInfo::operator VkBindSparseInfo &() noexcept {
  return *reinterpret_cast<VkBindSparseInfo *>(this);
}

BindSparseInfo::operator const VkBindSparseInfo *() const noexcept {
  return reinterpret_cast<const VkBindSparseInfo *>(this);
}

BindSparseInfo::operator VkBindSparseInfo *() noexcept {
  return reinterpret_cast<VkBindSparseInfo *>(this);
}

ImageCopy::operator const VkImageCopy &() const noexcept {
  return *reinterpret_cast<const VkImageCopy *>(this);
}

ImageCopy::operator VkImageCopy &() noexcept {
  return *reinterpret_cast<VkImageCopy *>(this);
}

ImageCopy::operator const VkImageCopy *() const noexcept {
  return reinterpret_cast<const VkImageCopy *>(this);
}

ImageCopy::operator VkImageCopy *() noexcept {
  return reinterpret_cast<VkImageCopy *>(this);
}

ImageBlit::operator const VkImageBlit &() const noexcept {
  return *reinterpret_cast<const VkImageBlit *>(this);
}

ImageBlit::operator VkImageBlit &() noexcept {
  return *reinterpret_cast<VkImageBlit *>(this);
}

ImageBlit::operator const VkImageBlit *() const noexcept {
  return reinterpret_cast<const VkImageBlit *>(this);
}

ImageBlit::operator VkImageBlit *() noexcept {
  return reinterpret_cast<VkImageBlit *>(this);
}

BufferImageCopy::operator const VkBufferImageCopy &() const noexcept {
  return *reinterpret_cast<const VkBufferImageCopy *>(this);
}

BufferImageCopy::operator VkBufferImageCopy &() noexcept {
  return *reinterpret_cast<VkBufferImageCopy *>(this);
}

BufferImageCopy::operator const VkBufferImageCopy *() const noexcept {
  return reinterpret_cast<const VkBufferImageCopy *>(this);
}

BufferImageCopy::operator VkBufferImageCopy *() noexcept {
  return reinterpret_cast<VkBufferImageCopy *>(this);
}

CopyMemoryIndirectCommandNV::operator const VkCopyMemoryIndirectCommandNV &() const noexcept {
  return *reinterpret_cast<const VkCopyMemoryIndirectCommandNV *>(this);
}

CopyMemoryIndirectCommandNV::operator VkCopyMemoryIndirectCommandNV &() noexcept {
  return *reinterpret_cast<VkCopyMemoryIndirectCommandNV *>(this);
}

CopyMemoryIndirectCommandNV::operator const VkCopyMemoryIndirectCommandNV *() const noexcept {
  return reinterpret_cast<const VkCopyMemoryIndirectCommandNV *>(this);
}

CopyMemoryIndirectCommandNV::operator VkCopyMemoryIndirectCommandNV *() noexcept {
  return reinterpret_cast<VkCopyMemoryIndirectCommandNV *>(this);
}

CopyMemoryToImageIndirectCommandNV::operator const VkCopyMemoryToImageIndirectCommandNV &() const noexcept {
  return *reinterpret_cast<const VkCopyMemoryToImageIndirectCommandNV *>(this);
}

CopyMemoryToImageIndirectCommandNV::operator VkCopyMemoryToImageIndirectCommandNV &() noexcept {
  return *reinterpret_cast<VkCopyMemoryToImageIndirectCommandNV *>(this);
}

CopyMemoryToImageIndirectCommandNV::operator const VkCopyMemoryToImageIndirectCommandNV *() const noexcept {
  return reinterpret_cast<const VkCopyMemoryToImageIndirectCommandNV *>(this);
}

CopyMemoryToImageIndirectCommandNV::operator VkCopyMemoryToImageIndirectCommandNV *() noexcept {
  return reinterpret_cast<VkCopyMemoryToImageIndirectCommandNV *>(this);
}

ImageResolve::operator const VkImageResolve &() const noexcept {
  return *reinterpret_cast<const VkImageResolve *>(this);
}

ImageResolve::operator VkImageResolve &() noexcept {
  return *reinterpret_cast<VkImageResolve *>(this);
}

ImageResolve::operator const VkImageResolve *() const noexcept {
  return reinterpret_cast<const VkImageResolve *>(this);
}

ImageResolve::operator VkImageResolve *() noexcept {
  return reinterpret_cast<VkImageResolve *>(this);
}

ShaderModuleCreateInfo::operator const VkShaderModuleCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkShaderModuleCreateInfo *>(this);
}

ShaderModuleCreateInfo::operator VkShaderModuleCreateInfo &() noexcept {
  return *reinterpret_cast<VkShaderModuleCreateInfo *>(this);
}

ShaderModuleCreateInfo::operator const VkShaderModuleCreateInfo *() const noexcept {
  return reinterpret_cast<const VkShaderModuleCreateInfo *>(this);
}

ShaderModuleCreateInfo::operator VkShaderModuleCreateInfo *() noexcept {
  return reinterpret_cast<VkShaderModuleCreateInfo *>(this);
}

DescriptorSetLayoutBinding::operator const VkDescriptorSetLayoutBinding &() const noexcept {
  return *reinterpret_cast<const VkDescriptorSetLayoutBinding *>(this);
}

DescriptorSetLayoutBinding::operator VkDescriptorSetLayoutBinding &() noexcept {
  return *reinterpret_cast<VkDescriptorSetLayoutBinding *>(this);
}

DescriptorSetLayoutBinding::operator const VkDescriptorSetLayoutBinding *() const noexcept {
  return reinterpret_cast<const VkDescriptorSetLayoutBinding *>(this);
}

DescriptorSetLayoutBinding::operator VkDescriptorSetLayoutBinding *() noexcept {
  return reinterpret_cast<VkDescriptorSetLayoutBinding *>(this);
}

DescriptorSetLayoutCreateInfo::operator const VkDescriptorSetLayoutCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkDescriptorSetLayoutCreateInfo *>(this);
}

DescriptorSetLayoutCreateInfo::operator VkDescriptorSetLayoutCreateInfo &() noexcept {
  return *reinterpret_cast<VkDescriptorSetLayoutCreateInfo *>(this);
}

DescriptorSetLayoutCreateInfo::operator const VkDescriptorSetLayoutCreateInfo *() const noexcept {
  return reinterpret_cast<const VkDescriptorSetLayoutCreateInfo *>(this);
}

DescriptorSetLayoutCreateInfo::operator VkDescriptorSetLayoutCreateInfo *() noexcept {
  return reinterpret_cast<VkDescriptorSetLayoutCreateInfo *>(this);
}

DescriptorPoolSize::operator const VkDescriptorPoolSize &() const noexcept {
  return *reinterpret_cast<const VkDescriptorPoolSize *>(this);
}

DescriptorPoolSize::operator VkDescriptorPoolSize &() noexcept {
  return *reinterpret_cast<VkDescriptorPoolSize *>(this);
}

DescriptorPoolSize::operator const VkDescriptorPoolSize *() const noexcept {
  return reinterpret_cast<const VkDescriptorPoolSize *>(this);
}

DescriptorPoolSize::operator VkDescriptorPoolSize *() noexcept {
  return reinterpret_cast<VkDescriptorPoolSize *>(this);
}

DescriptorPoolCreateInfo::operator const VkDescriptorPoolCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkDescriptorPoolCreateInfo *>(this);
}

DescriptorPoolCreateInfo::operator VkDescriptorPoolCreateInfo &() noexcept {
  return *reinterpret_cast<VkDescriptorPoolCreateInfo *>(this);
}

DescriptorPoolCreateInfo::operator const VkDescriptorPoolCreateInfo *() const noexcept {
  return reinterpret_cast<const VkDescriptorPoolCreateInfo *>(this);
}

DescriptorPoolCreateInfo::operator VkDescriptorPoolCreateInfo *() noexcept {
  return reinterpret_cast<VkDescriptorPoolCreateInfo *>(this);
}

DescriptorSetAllocateInfo::operator const VkDescriptorSetAllocateInfo &() const noexcept {
  return *reinterpret_cast<const VkDescriptorSetAllocateInfo *>(this);
}

DescriptorSetAllocateInfo::operator VkDescriptorSetAllocateInfo &() noexcept {
  return *reinterpret_cast<VkDescriptorSetAllocateInfo *>(this);
}

DescriptorSetAllocateInfo::operator const VkDescriptorSetAllocateInfo *() const noexcept {
  return reinterpret_cast<const VkDescriptorSetAllocateInfo *>(this);
}

DescriptorSetAllocateInfo::operator VkDescriptorSetAllocateInfo *() noexcept {
  return reinterpret_cast<VkDescriptorSetAllocateInfo *>(this);
}

SpecializationMapEntry::operator const VkSpecializationMapEntry &() const noexcept {
  return *reinterpret_cast<const VkSpecializationMapEntry *>(this);
}

SpecializationMapEntry::operator VkSpecializationMapEntry &() noexcept {
  return *reinterpret_cast<VkSpecializationMapEntry *>(this);
}

SpecializationMapEntry::operator const VkSpecializationMapEntry *() const noexcept {
  return reinterpret_cast<const VkSpecializationMapEntry *>(this);
}

SpecializationMapEntry::operator VkSpecializationMapEntry *() noexcept {
  return reinterpret_cast<VkSpecializationMapEntry *>(this);
}

SpecializationInfo::operator const VkSpecializationInfo &() const noexcept {
  return *reinterpret_cast<const VkSpecializationInfo *>(this);
}

SpecializationInfo::operator VkSpecializationInfo &() noexcept {
  return *reinterpret_cast<VkSpecializationInfo *>(this);
}

SpecializationInfo::operator const VkSpecializationInfo *() const noexcept {
  return reinterpret_cast<const VkSpecializationInfo *>(this);
}

SpecializationInfo::operator VkSpecializationInfo *() noexcept {
  return reinterpret_cast<VkSpecializationInfo *>(this);
}

PipelineShaderStageCreateInfo::operator const VkPipelineShaderStageCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkPipelineShaderStageCreateInfo *>(this);
}

PipelineShaderStageCreateInfo::operator VkPipelineShaderStageCreateInfo &() noexcept {
  return *reinterpret_cast<VkPipelineShaderStageCreateInfo *>(this);
}

PipelineShaderStageCreateInfo::operator const VkPipelineShaderStageCreateInfo *() const noexcept {
  return reinterpret_cast<const VkPipelineShaderStageCreateInfo *>(this);
}

PipelineShaderStageCreateInfo::operator VkPipelineShaderStageCreateInfo *() noexcept {
  return reinterpret_cast<VkPipelineShaderStageCreateInfo *>(this);
}

ComputePipelineCreateInfo::operator const VkComputePipelineCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkComputePipelineCreateInfo *>(this);
}

ComputePipelineCreateInfo::operator VkComputePipelineCreateInfo &() noexcept {
  return *reinterpret_cast<VkComputePipelineCreateInfo *>(this);
}

ComputePipelineCreateInfo::operator const VkComputePipelineCreateInfo *() const noexcept {
  return reinterpret_cast<const VkComputePipelineCreateInfo *>(this);
}

ComputePipelineCreateInfo::operator VkComputePipelineCreateInfo *() noexcept {
  return reinterpret_cast<VkComputePipelineCreateInfo *>(this);
}

ComputePipelineIndirectBufferInfoNV::operator const VkComputePipelineIndirectBufferInfoNV &() const noexcept {
  return *reinterpret_cast<const VkComputePipelineIndirectBufferInfoNV *>(this);
}

ComputePipelineIndirectBufferInfoNV::operator VkComputePipelineIndirectBufferInfoNV &() noexcept {
  return *reinterpret_cast<VkComputePipelineIndirectBufferInfoNV *>(this);
}

ComputePipelineIndirectBufferInfoNV::operator const VkComputePipelineIndirectBufferInfoNV *() const noexcept {
  return reinterpret_cast<const VkComputePipelineIndirectBufferInfoNV *>(this);
}

ComputePipelineIndirectBufferInfoNV::operator VkComputePipelineIndirectBufferInfoNV *() noexcept {
  return reinterpret_cast<VkComputePipelineIndirectBufferInfoNV *>(this);
}

PipelineCreateFlags2CreateInfoKHR::operator const VkPipelineCreateFlags2CreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkPipelineCreateFlags2CreateInfoKHR *>(this);
}

PipelineCreateFlags2CreateInfoKHR::operator VkPipelineCreateFlags2CreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkPipelineCreateFlags2CreateInfoKHR *>(this);
}

PipelineCreateFlags2CreateInfoKHR::operator const VkPipelineCreateFlags2CreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkPipelineCreateFlags2CreateInfoKHR *>(this);
}

PipelineCreateFlags2CreateInfoKHR::operator VkPipelineCreateFlags2CreateInfoKHR *() noexcept {
  return reinterpret_cast<VkPipelineCreateFlags2CreateInfoKHR *>(this);
}

VertexInputBindingDescription::operator const VkVertexInputBindingDescription &() const noexcept {
  return *reinterpret_cast<const VkVertexInputBindingDescription *>(this);
}

VertexInputBindingDescription::operator VkVertexInputBindingDescription &() noexcept {
  return *reinterpret_cast<VkVertexInputBindingDescription *>(this);
}

VertexInputBindingDescription::operator const VkVertexInputBindingDescription *() const noexcept {
  return reinterpret_cast<const VkVertexInputBindingDescription *>(this);
}

VertexInputBindingDescription::operator VkVertexInputBindingDescription *() noexcept {
  return reinterpret_cast<VkVertexInputBindingDescription *>(this);
}

VertexInputAttributeDescription::operator const VkVertexInputAttributeDescription &() const noexcept {
  return *reinterpret_cast<const VkVertexInputAttributeDescription *>(this);
}

VertexInputAttributeDescription::operator VkVertexInputAttributeDescription &() noexcept {
  return *reinterpret_cast<VkVertexInputAttributeDescription *>(this);
}

VertexInputAttributeDescription::operator const VkVertexInputAttributeDescription *() const noexcept {
  return reinterpret_cast<const VkVertexInputAttributeDescription *>(this);
}

VertexInputAttributeDescription::operator VkVertexInputAttributeDescription *() noexcept {
  return reinterpret_cast<VkVertexInputAttributeDescription *>(this);
}

PipelineVertexInputStateCreateInfo::operator const VkPipelineVertexInputStateCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkPipelineVertexInputStateCreateInfo *>(this);
}

PipelineVertexInputStateCreateInfo::operator VkPipelineVertexInputStateCreateInfo &() noexcept {
  return *reinterpret_cast<VkPipelineVertexInputStateCreateInfo *>(this);
}

PipelineVertexInputStateCreateInfo::operator const VkPipelineVertexInputStateCreateInfo *() const noexcept {
  return reinterpret_cast<const VkPipelineVertexInputStateCreateInfo *>(this);
}

PipelineVertexInputStateCreateInfo::operator VkPipelineVertexInputStateCreateInfo *() noexcept {
  return reinterpret_cast<VkPipelineVertexInputStateCreateInfo *>(this);
}

PipelineInputAssemblyStateCreateInfo::operator const VkPipelineInputAssemblyStateCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkPipelineInputAssemblyStateCreateInfo *>(this);
}

PipelineInputAssemblyStateCreateInfo::operator VkPipelineInputAssemblyStateCreateInfo &() noexcept {
  return *reinterpret_cast<VkPipelineInputAssemblyStateCreateInfo *>(this);
}

PipelineInputAssemblyStateCreateInfo::operator const VkPipelineInputAssemblyStateCreateInfo *() const noexcept {
  return reinterpret_cast<const VkPipelineInputAssemblyStateCreateInfo *>(this);
}

PipelineInputAssemblyStateCreateInfo::operator VkPipelineInputAssemblyStateCreateInfo *() noexcept {
  return reinterpret_cast<VkPipelineInputAssemblyStateCreateInfo *>(this);
}

PipelineTessellationStateCreateInfo::operator const VkPipelineTessellationStateCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkPipelineTessellationStateCreateInfo *>(this);
}

PipelineTessellationStateCreateInfo::operator VkPipelineTessellationStateCreateInfo &() noexcept {
  return *reinterpret_cast<VkPipelineTessellationStateCreateInfo *>(this);
}

PipelineTessellationStateCreateInfo::operator const VkPipelineTessellationStateCreateInfo *() const noexcept {
  return reinterpret_cast<const VkPipelineTessellationStateCreateInfo *>(this);
}

PipelineTessellationStateCreateInfo::operator VkPipelineTessellationStateCreateInfo *() noexcept {
  return reinterpret_cast<VkPipelineTessellationStateCreateInfo *>(this);
}

PipelineViewportStateCreateInfo::operator const VkPipelineViewportStateCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkPipelineViewportStateCreateInfo *>(this);
}

PipelineViewportStateCreateInfo::operator VkPipelineViewportStateCreateInfo &() noexcept {
  return *reinterpret_cast<VkPipelineViewportStateCreateInfo *>(this);
}

PipelineViewportStateCreateInfo::operator const VkPipelineViewportStateCreateInfo *() const noexcept {
  return reinterpret_cast<const VkPipelineViewportStateCreateInfo *>(this);
}

PipelineViewportStateCreateInfo::operator VkPipelineViewportStateCreateInfo *() noexcept {
  return reinterpret_cast<VkPipelineViewportStateCreateInfo *>(this);
}

PipelineRasterizationStateCreateInfo::operator const VkPipelineRasterizationStateCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkPipelineRasterizationStateCreateInfo *>(this);
}

PipelineRasterizationStateCreateInfo::operator VkPipelineRasterizationStateCreateInfo &() noexcept {
  return *reinterpret_cast<VkPipelineRasterizationStateCreateInfo *>(this);
}

PipelineRasterizationStateCreateInfo::operator const VkPipelineRasterizationStateCreateInfo *() const noexcept {
  return reinterpret_cast<const VkPipelineRasterizationStateCreateInfo *>(this);
}

PipelineRasterizationStateCreateInfo::operator VkPipelineRasterizationStateCreateInfo *() noexcept {
  return reinterpret_cast<VkPipelineRasterizationStateCreateInfo *>(this);
}

PipelineMultisampleStateCreateInfo::operator const VkPipelineMultisampleStateCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkPipelineMultisampleStateCreateInfo *>(this);
}

PipelineMultisampleStateCreateInfo::operator VkPipelineMultisampleStateCreateInfo &() noexcept {
  return *reinterpret_cast<VkPipelineMultisampleStateCreateInfo *>(this);
}

PipelineMultisampleStateCreateInfo::operator const VkPipelineMultisampleStateCreateInfo *() const noexcept {
  return reinterpret_cast<const VkPipelineMultisampleStateCreateInfo *>(this);
}

PipelineMultisampleStateCreateInfo::operator VkPipelineMultisampleStateCreateInfo *() noexcept {
  return reinterpret_cast<VkPipelineMultisampleStateCreateInfo *>(this);
}

PipelineColorBlendAttachmentState::operator const VkPipelineColorBlendAttachmentState &() const noexcept {
  return *reinterpret_cast<const VkPipelineColorBlendAttachmentState *>(this);
}

PipelineColorBlendAttachmentState::operator VkPipelineColorBlendAttachmentState &() noexcept {
  return *reinterpret_cast<VkPipelineColorBlendAttachmentState *>(this);
}

PipelineColorBlendAttachmentState::operator const VkPipelineColorBlendAttachmentState *() const noexcept {
  return reinterpret_cast<const VkPipelineColorBlendAttachmentState *>(this);
}

PipelineColorBlendAttachmentState::operator VkPipelineColorBlendAttachmentState *() noexcept {
  return reinterpret_cast<VkPipelineColorBlendAttachmentState *>(this);
}

PipelineColorBlendStateCreateInfo::operator const VkPipelineColorBlendStateCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkPipelineColorBlendStateCreateInfo *>(this);
}

PipelineColorBlendStateCreateInfo::operator VkPipelineColorBlendStateCreateInfo &() noexcept {
  return *reinterpret_cast<VkPipelineColorBlendStateCreateInfo *>(this);
}

PipelineColorBlendStateCreateInfo::operator const VkPipelineColorBlendStateCreateInfo *() const noexcept {
  return reinterpret_cast<const VkPipelineColorBlendStateCreateInfo *>(this);
}

PipelineColorBlendStateCreateInfo::operator VkPipelineColorBlendStateCreateInfo *() noexcept {
  return reinterpret_cast<VkPipelineColorBlendStateCreateInfo *>(this);
}

PipelineDynamicStateCreateInfo::operator const VkPipelineDynamicStateCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkPipelineDynamicStateCreateInfo *>(this);
}

PipelineDynamicStateCreateInfo::operator VkPipelineDynamicStateCreateInfo &() noexcept {
  return *reinterpret_cast<VkPipelineDynamicStateCreateInfo *>(this);
}

PipelineDynamicStateCreateInfo::operator const VkPipelineDynamicStateCreateInfo *() const noexcept {
  return reinterpret_cast<const VkPipelineDynamicStateCreateInfo *>(this);
}

PipelineDynamicStateCreateInfo::operator VkPipelineDynamicStateCreateInfo *() noexcept {
  return reinterpret_cast<VkPipelineDynamicStateCreateInfo *>(this);
}

StencilOpState::operator const VkStencilOpState &() const noexcept {
  return *reinterpret_cast<const VkStencilOpState *>(this);
}

StencilOpState::operator VkStencilOpState &() noexcept {
  return *reinterpret_cast<VkStencilOpState *>(this);
}

StencilOpState::operator const VkStencilOpState *() const noexcept {
  return reinterpret_cast<const VkStencilOpState *>(this);
}

StencilOpState::operator VkStencilOpState *() noexcept {
  return reinterpret_cast<VkStencilOpState *>(this);
}

PipelineDepthStencilStateCreateInfo::operator const VkPipelineDepthStencilStateCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkPipelineDepthStencilStateCreateInfo *>(this);
}

PipelineDepthStencilStateCreateInfo::operator VkPipelineDepthStencilStateCreateInfo &() noexcept {
  return *reinterpret_cast<VkPipelineDepthStencilStateCreateInfo *>(this);
}

PipelineDepthStencilStateCreateInfo::operator const VkPipelineDepthStencilStateCreateInfo *() const noexcept {
  return reinterpret_cast<const VkPipelineDepthStencilStateCreateInfo *>(this);
}

PipelineDepthStencilStateCreateInfo::operator VkPipelineDepthStencilStateCreateInfo *() noexcept {
  return reinterpret_cast<VkPipelineDepthStencilStateCreateInfo *>(this);
}

GraphicsPipelineCreateInfo::operator const VkGraphicsPipelineCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkGraphicsPipelineCreateInfo *>(this);
}

GraphicsPipelineCreateInfo::operator VkGraphicsPipelineCreateInfo &() noexcept {
  return *reinterpret_cast<VkGraphicsPipelineCreateInfo *>(this);
}

GraphicsPipelineCreateInfo::operator const VkGraphicsPipelineCreateInfo *() const noexcept {
  return reinterpret_cast<const VkGraphicsPipelineCreateInfo *>(this);
}

GraphicsPipelineCreateInfo::operator VkGraphicsPipelineCreateInfo *() noexcept {
  return reinterpret_cast<VkGraphicsPipelineCreateInfo *>(this);
}

PipelineCacheCreateInfo::operator const VkPipelineCacheCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkPipelineCacheCreateInfo *>(this);
}

PipelineCacheCreateInfo::operator VkPipelineCacheCreateInfo &() noexcept {
  return *reinterpret_cast<VkPipelineCacheCreateInfo *>(this);
}

PipelineCacheCreateInfo::operator const VkPipelineCacheCreateInfo *() const noexcept {
  return reinterpret_cast<const VkPipelineCacheCreateInfo *>(this);
}

PipelineCacheCreateInfo::operator VkPipelineCacheCreateInfo *() noexcept {
  return reinterpret_cast<VkPipelineCacheCreateInfo *>(this);
}

PipelineCacheHeaderVersionOne::operator const VkPipelineCacheHeaderVersionOne &() const noexcept {
  return *reinterpret_cast<const VkPipelineCacheHeaderVersionOne *>(this);
}

PipelineCacheHeaderVersionOne::operator VkPipelineCacheHeaderVersionOne &() noexcept {
  return *reinterpret_cast<VkPipelineCacheHeaderVersionOne *>(this);
}

PipelineCacheHeaderVersionOne::operator const VkPipelineCacheHeaderVersionOne *() const noexcept {
  return reinterpret_cast<const VkPipelineCacheHeaderVersionOne *>(this);
}

PipelineCacheHeaderVersionOne::operator VkPipelineCacheHeaderVersionOne *() noexcept {
  return reinterpret_cast<VkPipelineCacheHeaderVersionOne *>(this);
}

PushConstantRange::operator const VkPushConstantRange &() const noexcept {
  return *reinterpret_cast<const VkPushConstantRange *>(this);
}

PushConstantRange::operator VkPushConstantRange &() noexcept {
  return *reinterpret_cast<VkPushConstantRange *>(this);
}

PushConstantRange::operator const VkPushConstantRange *() const noexcept {
  return reinterpret_cast<const VkPushConstantRange *>(this);
}

PushConstantRange::operator VkPushConstantRange *() noexcept {
  return reinterpret_cast<VkPushConstantRange *>(this);
}

PipelineLayoutCreateInfo::operator const VkPipelineLayoutCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkPipelineLayoutCreateInfo *>(this);
}

PipelineLayoutCreateInfo::operator VkPipelineLayoutCreateInfo &() noexcept {
  return *reinterpret_cast<VkPipelineLayoutCreateInfo *>(this);
}

PipelineLayoutCreateInfo::operator const VkPipelineLayoutCreateInfo *() const noexcept {
  return reinterpret_cast<const VkPipelineLayoutCreateInfo *>(this);
}

PipelineLayoutCreateInfo::operator VkPipelineLayoutCreateInfo *() noexcept {
  return reinterpret_cast<VkPipelineLayoutCreateInfo *>(this);
}

SamplerCreateInfo::operator const VkSamplerCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkSamplerCreateInfo *>(this);
}

SamplerCreateInfo::operator VkSamplerCreateInfo &() noexcept {
  return *reinterpret_cast<VkSamplerCreateInfo *>(this);
}

SamplerCreateInfo::operator const VkSamplerCreateInfo *() const noexcept {
  return reinterpret_cast<const VkSamplerCreateInfo *>(this);
}

SamplerCreateInfo::operator VkSamplerCreateInfo *() noexcept {
  return reinterpret_cast<VkSamplerCreateInfo *>(this);
}

CommandPoolCreateInfo::operator const VkCommandPoolCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkCommandPoolCreateInfo *>(this);
}

CommandPoolCreateInfo::operator VkCommandPoolCreateInfo &() noexcept {
  return *reinterpret_cast<VkCommandPoolCreateInfo *>(this);
}

CommandPoolCreateInfo::operator const VkCommandPoolCreateInfo *() const noexcept {
  return reinterpret_cast<const VkCommandPoolCreateInfo *>(this);
}

CommandPoolCreateInfo::operator VkCommandPoolCreateInfo *() noexcept {
  return reinterpret_cast<VkCommandPoolCreateInfo *>(this);
}

CommandBufferAllocateInfo::operator const VkCommandBufferAllocateInfo &() const noexcept {
  return *reinterpret_cast<const VkCommandBufferAllocateInfo *>(this);
}

CommandBufferAllocateInfo::operator VkCommandBufferAllocateInfo &() noexcept {
  return *reinterpret_cast<VkCommandBufferAllocateInfo *>(this);
}

CommandBufferAllocateInfo::operator const VkCommandBufferAllocateInfo *() const noexcept {
  return reinterpret_cast<const VkCommandBufferAllocateInfo *>(this);
}

CommandBufferAllocateInfo::operator VkCommandBufferAllocateInfo *() noexcept {
  return reinterpret_cast<VkCommandBufferAllocateInfo *>(this);
}

CommandBufferInheritanceInfo::operator const VkCommandBufferInheritanceInfo &() const noexcept {
  return *reinterpret_cast<const VkCommandBufferInheritanceInfo *>(this);
}

CommandBufferInheritanceInfo::operator VkCommandBufferInheritanceInfo &() noexcept {
  return *reinterpret_cast<VkCommandBufferInheritanceInfo *>(this);
}

CommandBufferInheritanceInfo::operator const VkCommandBufferInheritanceInfo *() const noexcept {
  return reinterpret_cast<const VkCommandBufferInheritanceInfo *>(this);
}

CommandBufferInheritanceInfo::operator VkCommandBufferInheritanceInfo *() noexcept {
  return reinterpret_cast<VkCommandBufferInheritanceInfo *>(this);
}

CommandBufferBeginInfo::operator const VkCommandBufferBeginInfo &() const noexcept {
  return *reinterpret_cast<const VkCommandBufferBeginInfo *>(this);
}

CommandBufferBeginInfo::operator VkCommandBufferBeginInfo &() noexcept {
  return *reinterpret_cast<VkCommandBufferBeginInfo *>(this);
}

CommandBufferBeginInfo::operator const VkCommandBufferBeginInfo *() const noexcept {
  return reinterpret_cast<const VkCommandBufferBeginInfo *>(this);
}

CommandBufferBeginInfo::operator VkCommandBufferBeginInfo *() noexcept {
  return reinterpret_cast<VkCommandBufferBeginInfo *>(this);
}

RenderPassBeginInfo::operator const VkRenderPassBeginInfo &() const noexcept {
  return *reinterpret_cast<const VkRenderPassBeginInfo *>(this);
}

RenderPassBeginInfo::operator VkRenderPassBeginInfo &() noexcept {
  return *reinterpret_cast<VkRenderPassBeginInfo *>(this);
}

RenderPassBeginInfo::operator const VkRenderPassBeginInfo *() const noexcept {
  return reinterpret_cast<const VkRenderPassBeginInfo *>(this);
}

RenderPassBeginInfo::operator VkRenderPassBeginInfo *() noexcept {
  return reinterpret_cast<VkRenderPassBeginInfo *>(this);
}

ClearDepthStencilValue::operator const VkClearDepthStencilValue &() const noexcept {
  return *reinterpret_cast<const VkClearDepthStencilValue *>(this);
}

ClearDepthStencilValue::operator VkClearDepthStencilValue &() noexcept {
  return *reinterpret_cast<VkClearDepthStencilValue *>(this);
}

ClearDepthStencilValue::operator const VkClearDepthStencilValue *() const noexcept {
  return reinterpret_cast<const VkClearDepthStencilValue *>(this);
}

ClearDepthStencilValue::operator VkClearDepthStencilValue *() noexcept {
  return reinterpret_cast<VkClearDepthStencilValue *>(this);
}

ClearAttachment::operator const VkClearAttachment &() const noexcept {
  return *reinterpret_cast<const VkClearAttachment *>(this);
}

ClearAttachment::operator VkClearAttachment &() noexcept {
  return *reinterpret_cast<VkClearAttachment *>(this);
}

ClearAttachment::operator const VkClearAttachment *() const noexcept {
  return reinterpret_cast<const VkClearAttachment *>(this);
}

ClearAttachment::operator VkClearAttachment *() noexcept {
  return reinterpret_cast<VkClearAttachment *>(this);
}

AttachmentDescription::operator const VkAttachmentDescription &() const noexcept {
  return *reinterpret_cast<const VkAttachmentDescription *>(this);
}

AttachmentDescription::operator VkAttachmentDescription &() noexcept {
  return *reinterpret_cast<VkAttachmentDescription *>(this);
}

AttachmentDescription::operator const VkAttachmentDescription *() const noexcept {
  return reinterpret_cast<const VkAttachmentDescription *>(this);
}

AttachmentDescription::operator VkAttachmentDescription *() noexcept {
  return reinterpret_cast<VkAttachmentDescription *>(this);
}

AttachmentReference::operator const VkAttachmentReference &() const noexcept {
  return *reinterpret_cast<const VkAttachmentReference *>(this);
}

AttachmentReference::operator VkAttachmentReference &() noexcept {
  return *reinterpret_cast<VkAttachmentReference *>(this);
}

AttachmentReference::operator const VkAttachmentReference *() const noexcept {
  return reinterpret_cast<const VkAttachmentReference *>(this);
}

AttachmentReference::operator VkAttachmentReference *() noexcept {
  return reinterpret_cast<VkAttachmentReference *>(this);
}

SubpassDescription::operator const VkSubpassDescription &() const noexcept {
  return *reinterpret_cast<const VkSubpassDescription *>(this);
}

SubpassDescription::operator VkSubpassDescription &() noexcept {
  return *reinterpret_cast<VkSubpassDescription *>(this);
}

SubpassDescription::operator const VkSubpassDescription *() const noexcept {
  return reinterpret_cast<const VkSubpassDescription *>(this);
}

SubpassDescription::operator VkSubpassDescription *() noexcept {
  return reinterpret_cast<VkSubpassDescription *>(this);
}

SubpassDependency::operator const VkSubpassDependency &() const noexcept {
  return *reinterpret_cast<const VkSubpassDependency *>(this);
}

SubpassDependency::operator VkSubpassDependency &() noexcept {
  return *reinterpret_cast<VkSubpassDependency *>(this);
}

SubpassDependency::operator const VkSubpassDependency *() const noexcept {
  return reinterpret_cast<const VkSubpassDependency *>(this);
}

SubpassDependency::operator VkSubpassDependency *() noexcept {
  return reinterpret_cast<VkSubpassDependency *>(this);
}

RenderPassCreateInfo::operator const VkRenderPassCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkRenderPassCreateInfo *>(this);
}

RenderPassCreateInfo::operator VkRenderPassCreateInfo &() noexcept {
  return *reinterpret_cast<VkRenderPassCreateInfo *>(this);
}

RenderPassCreateInfo::operator const VkRenderPassCreateInfo *() const noexcept {
  return reinterpret_cast<const VkRenderPassCreateInfo *>(this);
}

RenderPassCreateInfo::operator VkRenderPassCreateInfo *() noexcept {
  return reinterpret_cast<VkRenderPassCreateInfo *>(this);
}

EventCreateInfo::operator const VkEventCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkEventCreateInfo *>(this);
}

EventCreateInfo::operator VkEventCreateInfo &() noexcept {
  return *reinterpret_cast<VkEventCreateInfo *>(this);
}

EventCreateInfo::operator const VkEventCreateInfo *() const noexcept {
  return reinterpret_cast<const VkEventCreateInfo *>(this);
}

EventCreateInfo::operator VkEventCreateInfo *() noexcept {
  return reinterpret_cast<VkEventCreateInfo *>(this);
}

FenceCreateInfo::operator const VkFenceCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkFenceCreateInfo *>(this);
}

FenceCreateInfo::operator VkFenceCreateInfo &() noexcept {
  return *reinterpret_cast<VkFenceCreateInfo *>(this);
}

FenceCreateInfo::operator const VkFenceCreateInfo *() const noexcept {
  return reinterpret_cast<const VkFenceCreateInfo *>(this);
}

FenceCreateInfo::operator VkFenceCreateInfo *() noexcept {
  return reinterpret_cast<VkFenceCreateInfo *>(this);
}

SemaphoreCreateInfo::operator const VkSemaphoreCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkSemaphoreCreateInfo *>(this);
}

SemaphoreCreateInfo::operator VkSemaphoreCreateInfo &() noexcept {
  return *reinterpret_cast<VkSemaphoreCreateInfo *>(this);
}

SemaphoreCreateInfo::operator const VkSemaphoreCreateInfo *() const noexcept {
  return reinterpret_cast<const VkSemaphoreCreateInfo *>(this);
}

SemaphoreCreateInfo::operator VkSemaphoreCreateInfo *() noexcept {
  return reinterpret_cast<VkSemaphoreCreateInfo *>(this);
}

QueryPoolCreateInfo::operator const VkQueryPoolCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkQueryPoolCreateInfo *>(this);
}

QueryPoolCreateInfo::operator VkQueryPoolCreateInfo &() noexcept {
  return *reinterpret_cast<VkQueryPoolCreateInfo *>(this);
}

QueryPoolCreateInfo::operator const VkQueryPoolCreateInfo *() const noexcept {
  return reinterpret_cast<const VkQueryPoolCreateInfo *>(this);
}

QueryPoolCreateInfo::operator VkQueryPoolCreateInfo *() noexcept {
  return reinterpret_cast<VkQueryPoolCreateInfo *>(this);
}

FramebufferCreateInfo::operator const VkFramebufferCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkFramebufferCreateInfo *>(this);
}

FramebufferCreateInfo::operator VkFramebufferCreateInfo &() noexcept {
  return *reinterpret_cast<VkFramebufferCreateInfo *>(this);
}

FramebufferCreateInfo::operator const VkFramebufferCreateInfo *() const noexcept {
  return reinterpret_cast<const VkFramebufferCreateInfo *>(this);
}

FramebufferCreateInfo::operator VkFramebufferCreateInfo *() noexcept {
  return reinterpret_cast<VkFramebufferCreateInfo *>(this);
}

DrawIndirectCommand::operator const VkDrawIndirectCommand &() const noexcept {
  return *reinterpret_cast<const VkDrawIndirectCommand *>(this);
}

DrawIndirectCommand::operator VkDrawIndirectCommand &() noexcept {
  return *reinterpret_cast<VkDrawIndirectCommand *>(this);
}

DrawIndirectCommand::operator const VkDrawIndirectCommand *() const noexcept {
  return reinterpret_cast<const VkDrawIndirectCommand *>(this);
}

DrawIndirectCommand::operator VkDrawIndirectCommand *() noexcept {
  return reinterpret_cast<VkDrawIndirectCommand *>(this);
}

DrawIndexedIndirectCommand::operator const VkDrawIndexedIndirectCommand &() const noexcept {
  return *reinterpret_cast<const VkDrawIndexedIndirectCommand *>(this);
}

DrawIndexedIndirectCommand::operator VkDrawIndexedIndirectCommand &() noexcept {
  return *reinterpret_cast<VkDrawIndexedIndirectCommand *>(this);
}

DrawIndexedIndirectCommand::operator const VkDrawIndexedIndirectCommand *() const noexcept {
  return reinterpret_cast<const VkDrawIndexedIndirectCommand *>(this);
}

DrawIndexedIndirectCommand::operator VkDrawIndexedIndirectCommand *() noexcept {
  return reinterpret_cast<VkDrawIndexedIndirectCommand *>(this);
}

DispatchIndirectCommand::operator const VkDispatchIndirectCommand &() const noexcept {
  return *reinterpret_cast<const VkDispatchIndirectCommand *>(this);
}

DispatchIndirectCommand::operator VkDispatchIndirectCommand &() noexcept {
  return *reinterpret_cast<VkDispatchIndirectCommand *>(this);
}

DispatchIndirectCommand::operator const VkDispatchIndirectCommand *() const noexcept {
  return reinterpret_cast<const VkDispatchIndirectCommand *>(this);
}

DispatchIndirectCommand::operator VkDispatchIndirectCommand *() noexcept {
  return reinterpret_cast<VkDispatchIndirectCommand *>(this);
}

MultiDrawInfoEXT::operator const VkMultiDrawInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkMultiDrawInfoEXT *>(this);
}

MultiDrawInfoEXT::operator VkMultiDrawInfoEXT &() noexcept {
  return *reinterpret_cast<VkMultiDrawInfoEXT *>(this);
}

MultiDrawInfoEXT::operator const VkMultiDrawInfoEXT *() const noexcept {
  return reinterpret_cast<const VkMultiDrawInfoEXT *>(this);
}

MultiDrawInfoEXT::operator VkMultiDrawInfoEXT *() noexcept {
  return reinterpret_cast<VkMultiDrawInfoEXT *>(this);
}

MultiDrawIndexedInfoEXT::operator const VkMultiDrawIndexedInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkMultiDrawIndexedInfoEXT *>(this);
}

MultiDrawIndexedInfoEXT::operator VkMultiDrawIndexedInfoEXT &() noexcept {
  return *reinterpret_cast<VkMultiDrawIndexedInfoEXT *>(this);
}

MultiDrawIndexedInfoEXT::operator const VkMultiDrawIndexedInfoEXT *() const noexcept {
  return reinterpret_cast<const VkMultiDrawIndexedInfoEXT *>(this);
}

MultiDrawIndexedInfoEXT::operator VkMultiDrawIndexedInfoEXT *() noexcept {
  return reinterpret_cast<VkMultiDrawIndexedInfoEXT *>(this);
}

SubmitInfo::operator const VkSubmitInfo &() const noexcept {
  return *reinterpret_cast<const VkSubmitInfo *>(this);
}

SubmitInfo::operator VkSubmitInfo &() noexcept {
  return *reinterpret_cast<VkSubmitInfo *>(this);
}

SubmitInfo::operator const VkSubmitInfo *() const noexcept {
  return reinterpret_cast<const VkSubmitInfo *>(this);
}

SubmitInfo::operator VkSubmitInfo *() noexcept {
  return reinterpret_cast<VkSubmitInfo *>(this);
}

DisplayPropertiesKHR::operator const VkDisplayPropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkDisplayPropertiesKHR *>(this);
}

DisplayPropertiesKHR::operator VkDisplayPropertiesKHR &() noexcept {
  return *reinterpret_cast<VkDisplayPropertiesKHR *>(this);
}

DisplayPropertiesKHR::operator const VkDisplayPropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkDisplayPropertiesKHR *>(this);
}

DisplayPropertiesKHR::operator VkDisplayPropertiesKHR *() noexcept {
  return reinterpret_cast<VkDisplayPropertiesKHR *>(this);
}

DisplayPlanePropertiesKHR::operator const VkDisplayPlanePropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkDisplayPlanePropertiesKHR *>(this);
}

DisplayPlanePropertiesKHR::operator VkDisplayPlanePropertiesKHR &() noexcept {
  return *reinterpret_cast<VkDisplayPlanePropertiesKHR *>(this);
}

DisplayPlanePropertiesKHR::operator const VkDisplayPlanePropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkDisplayPlanePropertiesKHR *>(this);
}

DisplayPlanePropertiesKHR::operator VkDisplayPlanePropertiesKHR *() noexcept {
  return reinterpret_cast<VkDisplayPlanePropertiesKHR *>(this);
}

DisplayModeParametersKHR::operator const VkDisplayModeParametersKHR &() const noexcept {
  return *reinterpret_cast<const VkDisplayModeParametersKHR *>(this);
}

DisplayModeParametersKHR::operator VkDisplayModeParametersKHR &() noexcept {
  return *reinterpret_cast<VkDisplayModeParametersKHR *>(this);
}

DisplayModeParametersKHR::operator const VkDisplayModeParametersKHR *() const noexcept {
  return reinterpret_cast<const VkDisplayModeParametersKHR *>(this);
}

DisplayModeParametersKHR::operator VkDisplayModeParametersKHR *() noexcept {
  return reinterpret_cast<VkDisplayModeParametersKHR *>(this);
}

DisplayModePropertiesKHR::operator const VkDisplayModePropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkDisplayModePropertiesKHR *>(this);
}

DisplayModePropertiesKHR::operator VkDisplayModePropertiesKHR &() noexcept {
  return *reinterpret_cast<VkDisplayModePropertiesKHR *>(this);
}

DisplayModePropertiesKHR::operator const VkDisplayModePropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkDisplayModePropertiesKHR *>(this);
}

DisplayModePropertiesKHR::operator VkDisplayModePropertiesKHR *() noexcept {
  return reinterpret_cast<VkDisplayModePropertiesKHR *>(this);
}

DisplayModeCreateInfoKHR::operator const VkDisplayModeCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkDisplayModeCreateInfoKHR *>(this);
}

DisplayModeCreateInfoKHR::operator VkDisplayModeCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkDisplayModeCreateInfoKHR *>(this);
}

DisplayModeCreateInfoKHR::operator const VkDisplayModeCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkDisplayModeCreateInfoKHR *>(this);
}

DisplayModeCreateInfoKHR::operator VkDisplayModeCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkDisplayModeCreateInfoKHR *>(this);
}

DisplayPlaneCapabilitiesKHR::operator const VkDisplayPlaneCapabilitiesKHR &() const noexcept {
  return *reinterpret_cast<const VkDisplayPlaneCapabilitiesKHR *>(this);
}

DisplayPlaneCapabilitiesKHR::operator VkDisplayPlaneCapabilitiesKHR &() noexcept {
  return *reinterpret_cast<VkDisplayPlaneCapabilitiesKHR *>(this);
}

DisplayPlaneCapabilitiesKHR::operator const VkDisplayPlaneCapabilitiesKHR *() const noexcept {
  return reinterpret_cast<const VkDisplayPlaneCapabilitiesKHR *>(this);
}

DisplayPlaneCapabilitiesKHR::operator VkDisplayPlaneCapabilitiesKHR *() noexcept {
  return reinterpret_cast<VkDisplayPlaneCapabilitiesKHR *>(this);
}

DisplaySurfaceCreateInfoKHR::operator const VkDisplaySurfaceCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkDisplaySurfaceCreateInfoKHR *>(this);
}

DisplaySurfaceCreateInfoKHR::operator VkDisplaySurfaceCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkDisplaySurfaceCreateInfoKHR *>(this);
}

DisplaySurfaceCreateInfoKHR::operator const VkDisplaySurfaceCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkDisplaySurfaceCreateInfoKHR *>(this);
}

DisplaySurfaceCreateInfoKHR::operator VkDisplaySurfaceCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkDisplaySurfaceCreateInfoKHR *>(this);
}

DisplayPresentInfoKHR::operator const VkDisplayPresentInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkDisplayPresentInfoKHR *>(this);
}

DisplayPresentInfoKHR::operator VkDisplayPresentInfoKHR &() noexcept {
  return *reinterpret_cast<VkDisplayPresentInfoKHR *>(this);
}

DisplayPresentInfoKHR::operator const VkDisplayPresentInfoKHR *() const noexcept {
  return reinterpret_cast<const VkDisplayPresentInfoKHR *>(this);
}

DisplayPresentInfoKHR::operator VkDisplayPresentInfoKHR *() noexcept {
  return reinterpret_cast<VkDisplayPresentInfoKHR *>(this);
}

SurfaceCapabilitiesKHR::operator const VkSurfaceCapabilitiesKHR &() const noexcept {
  return *reinterpret_cast<const VkSurfaceCapabilitiesKHR *>(this);
}

SurfaceCapabilitiesKHR::operator VkSurfaceCapabilitiesKHR &() noexcept {
  return *reinterpret_cast<VkSurfaceCapabilitiesKHR *>(this);
}

SurfaceCapabilitiesKHR::operator const VkSurfaceCapabilitiesKHR *() const noexcept {
  return reinterpret_cast<const VkSurfaceCapabilitiesKHR *>(this);
}

SurfaceCapabilitiesKHR::operator VkSurfaceCapabilitiesKHR *() noexcept {
  return reinterpret_cast<VkSurfaceCapabilitiesKHR *>(this);
}

SurfaceFormatKHR::operator const VkSurfaceFormatKHR &() const noexcept {
  return *reinterpret_cast<const VkSurfaceFormatKHR *>(this);
}

SurfaceFormatKHR::operator VkSurfaceFormatKHR &() noexcept {
  return *reinterpret_cast<VkSurfaceFormatKHR *>(this);
}

SurfaceFormatKHR::operator const VkSurfaceFormatKHR *() const noexcept {
  return reinterpret_cast<const VkSurfaceFormatKHR *>(this);
}

SurfaceFormatKHR::operator VkSurfaceFormatKHR *() noexcept {
  return reinterpret_cast<VkSurfaceFormatKHR *>(this);
}

SwapchainCreateInfoKHR::operator const VkSwapchainCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkSwapchainCreateInfoKHR *>(this);
}

SwapchainCreateInfoKHR::operator VkSwapchainCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkSwapchainCreateInfoKHR *>(this);
}

SwapchainCreateInfoKHR::operator const VkSwapchainCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkSwapchainCreateInfoKHR *>(this);
}

SwapchainCreateInfoKHR::operator VkSwapchainCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkSwapchainCreateInfoKHR *>(this);
}

PresentInfoKHR::operator const VkPresentInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkPresentInfoKHR *>(this);
}

PresentInfoKHR::operator VkPresentInfoKHR &() noexcept {
  return *reinterpret_cast<VkPresentInfoKHR *>(this);
}

PresentInfoKHR::operator const VkPresentInfoKHR *() const noexcept {
  return reinterpret_cast<const VkPresentInfoKHR *>(this);
}

PresentInfoKHR::operator VkPresentInfoKHR *() noexcept {
  return reinterpret_cast<VkPresentInfoKHR *>(this);
}

DebugReportCallbackCreateInfoEXT::operator const VkDebugReportCallbackCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkDebugReportCallbackCreateInfoEXT *>(this);
}

DebugReportCallbackCreateInfoEXT::operator VkDebugReportCallbackCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkDebugReportCallbackCreateInfoEXT *>(this);
}

DebugReportCallbackCreateInfoEXT::operator const VkDebugReportCallbackCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkDebugReportCallbackCreateInfoEXT *>(this);
}

DebugReportCallbackCreateInfoEXT::operator VkDebugReportCallbackCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkDebugReportCallbackCreateInfoEXT *>(this);
}

ValidationFlagsEXT::operator const VkValidationFlagsEXT &() const noexcept {
  return *reinterpret_cast<const VkValidationFlagsEXT *>(this);
}

ValidationFlagsEXT::operator VkValidationFlagsEXT &() noexcept {
  return *reinterpret_cast<VkValidationFlagsEXT *>(this);
}

ValidationFlagsEXT::operator const VkValidationFlagsEXT *() const noexcept {
  return reinterpret_cast<const VkValidationFlagsEXT *>(this);
}

ValidationFlagsEXT::operator VkValidationFlagsEXT *() noexcept {
  return reinterpret_cast<VkValidationFlagsEXT *>(this);
}

ValidationFeaturesEXT::operator const VkValidationFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkValidationFeaturesEXT *>(this);
}

ValidationFeaturesEXT::operator VkValidationFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkValidationFeaturesEXT *>(this);
}

ValidationFeaturesEXT::operator const VkValidationFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkValidationFeaturesEXT *>(this);
}

ValidationFeaturesEXT::operator VkValidationFeaturesEXT *() noexcept {
  return reinterpret_cast<VkValidationFeaturesEXT *>(this);
}

LayerSettingEXT::operator const VkLayerSettingEXT &() const noexcept {
  return *reinterpret_cast<const VkLayerSettingEXT *>(this);
}

LayerSettingEXT::operator VkLayerSettingEXT &() noexcept {
  return *reinterpret_cast<VkLayerSettingEXT *>(this);
}

LayerSettingEXT::operator const VkLayerSettingEXT *() const noexcept {
  return reinterpret_cast<const VkLayerSettingEXT *>(this);
}

LayerSettingEXT::operator VkLayerSettingEXT *() noexcept {
  return reinterpret_cast<VkLayerSettingEXT *>(this);
}

LayerSettingsCreateInfoEXT::operator const VkLayerSettingsCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkLayerSettingsCreateInfoEXT *>(this);
}

LayerSettingsCreateInfoEXT::operator VkLayerSettingsCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkLayerSettingsCreateInfoEXT *>(this);
}

LayerSettingsCreateInfoEXT::operator const VkLayerSettingsCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkLayerSettingsCreateInfoEXT *>(this);
}

LayerSettingsCreateInfoEXT::operator VkLayerSettingsCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkLayerSettingsCreateInfoEXT *>(this);
}

PipelineRasterizationStateRasterizationOrderAMD::operator const VkPipelineRasterizationStateRasterizationOrderAMD &() const noexcept {
  return *reinterpret_cast<const VkPipelineRasterizationStateRasterizationOrderAMD *>(this);
}

PipelineRasterizationStateRasterizationOrderAMD::operator VkPipelineRasterizationStateRasterizationOrderAMD &() noexcept {
  return *reinterpret_cast<VkPipelineRasterizationStateRasterizationOrderAMD *>(this);
}

PipelineRasterizationStateRasterizationOrderAMD::operator const VkPipelineRasterizationStateRasterizationOrderAMD *() const noexcept {
  return reinterpret_cast<const VkPipelineRasterizationStateRasterizationOrderAMD *>(this);
}

PipelineRasterizationStateRasterizationOrderAMD::operator VkPipelineRasterizationStateRasterizationOrderAMD *() noexcept {
  return reinterpret_cast<VkPipelineRasterizationStateRasterizationOrderAMD *>(this);
}

DebugMarkerObjectNameInfoEXT::operator const VkDebugMarkerObjectNameInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkDebugMarkerObjectNameInfoEXT *>(this);
}

DebugMarkerObjectNameInfoEXT::operator VkDebugMarkerObjectNameInfoEXT &() noexcept {
  return *reinterpret_cast<VkDebugMarkerObjectNameInfoEXT *>(this);
}

DebugMarkerObjectNameInfoEXT::operator const VkDebugMarkerObjectNameInfoEXT *() const noexcept {
  return reinterpret_cast<const VkDebugMarkerObjectNameInfoEXT *>(this);
}

DebugMarkerObjectNameInfoEXT::operator VkDebugMarkerObjectNameInfoEXT *() noexcept {
  return reinterpret_cast<VkDebugMarkerObjectNameInfoEXT *>(this);
}

DebugMarkerObjectTagInfoEXT::operator const VkDebugMarkerObjectTagInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkDebugMarkerObjectTagInfoEXT *>(this);
}

DebugMarkerObjectTagInfoEXT::operator VkDebugMarkerObjectTagInfoEXT &() noexcept {
  return *reinterpret_cast<VkDebugMarkerObjectTagInfoEXT *>(this);
}

DebugMarkerObjectTagInfoEXT::operator const VkDebugMarkerObjectTagInfoEXT *() const noexcept {
  return reinterpret_cast<const VkDebugMarkerObjectTagInfoEXT *>(this);
}

DebugMarkerObjectTagInfoEXT::operator VkDebugMarkerObjectTagInfoEXT *() noexcept {
  return reinterpret_cast<VkDebugMarkerObjectTagInfoEXT *>(this);
}

DebugMarkerMarkerInfoEXT::operator const VkDebugMarkerMarkerInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkDebugMarkerMarkerInfoEXT *>(this);
}

DebugMarkerMarkerInfoEXT::operator VkDebugMarkerMarkerInfoEXT &() noexcept {
  return *reinterpret_cast<VkDebugMarkerMarkerInfoEXT *>(this);
}

DebugMarkerMarkerInfoEXT::operator const VkDebugMarkerMarkerInfoEXT *() const noexcept {
  return reinterpret_cast<const VkDebugMarkerMarkerInfoEXT *>(this);
}

DebugMarkerMarkerInfoEXT::operator VkDebugMarkerMarkerInfoEXT *() noexcept {
  return reinterpret_cast<VkDebugMarkerMarkerInfoEXT *>(this);
}

DedicatedAllocationImageCreateInfoNV::operator const VkDedicatedAllocationImageCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkDedicatedAllocationImageCreateInfoNV *>(this);
}

DedicatedAllocationImageCreateInfoNV::operator VkDedicatedAllocationImageCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkDedicatedAllocationImageCreateInfoNV *>(this);
}

DedicatedAllocationImageCreateInfoNV::operator const VkDedicatedAllocationImageCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkDedicatedAllocationImageCreateInfoNV *>(this);
}

DedicatedAllocationImageCreateInfoNV::operator VkDedicatedAllocationImageCreateInfoNV *() noexcept {
  return reinterpret_cast<VkDedicatedAllocationImageCreateInfoNV *>(this);
}

DedicatedAllocationBufferCreateInfoNV::operator const VkDedicatedAllocationBufferCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkDedicatedAllocationBufferCreateInfoNV *>(this);
}

DedicatedAllocationBufferCreateInfoNV::operator VkDedicatedAllocationBufferCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkDedicatedAllocationBufferCreateInfoNV *>(this);
}

DedicatedAllocationBufferCreateInfoNV::operator const VkDedicatedAllocationBufferCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkDedicatedAllocationBufferCreateInfoNV *>(this);
}

DedicatedAllocationBufferCreateInfoNV::operator VkDedicatedAllocationBufferCreateInfoNV *() noexcept {
  return reinterpret_cast<VkDedicatedAllocationBufferCreateInfoNV *>(this);
}

DedicatedAllocationMemoryAllocateInfoNV::operator const VkDedicatedAllocationMemoryAllocateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkDedicatedAllocationMemoryAllocateInfoNV *>(this);
}

DedicatedAllocationMemoryAllocateInfoNV::operator VkDedicatedAllocationMemoryAllocateInfoNV &() noexcept {
  return *reinterpret_cast<VkDedicatedAllocationMemoryAllocateInfoNV *>(this);
}

DedicatedAllocationMemoryAllocateInfoNV::operator const VkDedicatedAllocationMemoryAllocateInfoNV *() const noexcept {
  return reinterpret_cast<const VkDedicatedAllocationMemoryAllocateInfoNV *>(this);
}

DedicatedAllocationMemoryAllocateInfoNV::operator VkDedicatedAllocationMemoryAllocateInfoNV *() noexcept {
  return reinterpret_cast<VkDedicatedAllocationMemoryAllocateInfoNV *>(this);
}

ExternalImageFormatPropertiesNV::operator const VkExternalImageFormatPropertiesNV &() const noexcept {
  return *reinterpret_cast<const VkExternalImageFormatPropertiesNV *>(this);
}

ExternalImageFormatPropertiesNV::operator VkExternalImageFormatPropertiesNV &() noexcept {
  return *reinterpret_cast<VkExternalImageFormatPropertiesNV *>(this);
}

ExternalImageFormatPropertiesNV::operator const VkExternalImageFormatPropertiesNV *() const noexcept {
  return reinterpret_cast<const VkExternalImageFormatPropertiesNV *>(this);
}

ExternalImageFormatPropertiesNV::operator VkExternalImageFormatPropertiesNV *() noexcept {
  return reinterpret_cast<VkExternalImageFormatPropertiesNV *>(this);
}

ExternalMemoryImageCreateInfoNV::operator const VkExternalMemoryImageCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkExternalMemoryImageCreateInfoNV *>(this);
}

ExternalMemoryImageCreateInfoNV::operator VkExternalMemoryImageCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkExternalMemoryImageCreateInfoNV *>(this);
}

ExternalMemoryImageCreateInfoNV::operator const VkExternalMemoryImageCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkExternalMemoryImageCreateInfoNV *>(this);
}

ExternalMemoryImageCreateInfoNV::operator VkExternalMemoryImageCreateInfoNV *() noexcept {
  return reinterpret_cast<VkExternalMemoryImageCreateInfoNV *>(this);
}

ExportMemoryAllocateInfoNV::operator const VkExportMemoryAllocateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkExportMemoryAllocateInfoNV *>(this);
}

ExportMemoryAllocateInfoNV::operator VkExportMemoryAllocateInfoNV &() noexcept {
  return *reinterpret_cast<VkExportMemoryAllocateInfoNV *>(this);
}

ExportMemoryAllocateInfoNV::operator const VkExportMemoryAllocateInfoNV *() const noexcept {
  return reinterpret_cast<const VkExportMemoryAllocateInfoNV *>(this);
}

ExportMemoryAllocateInfoNV::operator VkExportMemoryAllocateInfoNV *() noexcept {
  return reinterpret_cast<VkExportMemoryAllocateInfoNV *>(this);
}

PhysicalDeviceDeviceGeneratedCommandsFeaturesNV::operator const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *>(this);
}

PhysicalDeviceDeviceGeneratedCommandsFeaturesNV::operator VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *>(this);
}

PhysicalDeviceDeviceGeneratedCommandsFeaturesNV::operator const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *>(this);
}

PhysicalDeviceDeviceGeneratedCommandsFeaturesNV::operator VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *>(this);
}

PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV::operator const VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV *>(this);
}

PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV::operator VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV *>(this);
}

PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV::operator const VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV *>(this);
}

PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV::operator VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV *>(this);
}

DevicePrivateDataCreateInfo::operator const VkDevicePrivateDataCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkDevicePrivateDataCreateInfo *>(this);
}

DevicePrivateDataCreateInfo::operator VkDevicePrivateDataCreateInfo &() noexcept {
  return *reinterpret_cast<VkDevicePrivateDataCreateInfo *>(this);
}

DevicePrivateDataCreateInfo::operator const VkDevicePrivateDataCreateInfo *() const noexcept {
  return reinterpret_cast<const VkDevicePrivateDataCreateInfo *>(this);
}

DevicePrivateDataCreateInfo::operator VkDevicePrivateDataCreateInfo *() noexcept {
  return reinterpret_cast<VkDevicePrivateDataCreateInfo *>(this);
}

PrivateDataSlotCreateInfo::operator const VkPrivateDataSlotCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkPrivateDataSlotCreateInfo *>(this);
}

PrivateDataSlotCreateInfo::operator VkPrivateDataSlotCreateInfo &() noexcept {
  return *reinterpret_cast<VkPrivateDataSlotCreateInfo *>(this);
}

PrivateDataSlotCreateInfo::operator const VkPrivateDataSlotCreateInfo *() const noexcept {
  return reinterpret_cast<const VkPrivateDataSlotCreateInfo *>(this);
}

PrivateDataSlotCreateInfo::operator VkPrivateDataSlotCreateInfo *() noexcept {
  return reinterpret_cast<VkPrivateDataSlotCreateInfo *>(this);
}

PhysicalDevicePrivateDataFeatures::operator const VkPhysicalDevicePrivateDataFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDevicePrivateDataFeatures *>(this);
}

PhysicalDevicePrivateDataFeatures::operator VkPhysicalDevicePrivateDataFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDevicePrivateDataFeatures *>(this);
}

PhysicalDevicePrivateDataFeatures::operator const VkPhysicalDevicePrivateDataFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDevicePrivateDataFeatures *>(this);
}

PhysicalDevicePrivateDataFeatures::operator VkPhysicalDevicePrivateDataFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDevicePrivateDataFeatures *>(this);
}

PhysicalDeviceDeviceGeneratedCommandsPropertiesNV::operator const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV *>(this);
}

PhysicalDeviceDeviceGeneratedCommandsPropertiesNV::operator VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV *>(this);
}

PhysicalDeviceDeviceGeneratedCommandsPropertiesNV::operator const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV *>(this);
}

PhysicalDeviceDeviceGeneratedCommandsPropertiesNV::operator VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV *>(this);
}

PhysicalDeviceMultiDrawPropertiesEXT::operator const VkPhysicalDeviceMultiDrawPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMultiDrawPropertiesEXT *>(this);
}

PhysicalDeviceMultiDrawPropertiesEXT::operator VkPhysicalDeviceMultiDrawPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMultiDrawPropertiesEXT *>(this);
}

PhysicalDeviceMultiDrawPropertiesEXT::operator const VkPhysicalDeviceMultiDrawPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMultiDrawPropertiesEXT *>(this);
}

PhysicalDeviceMultiDrawPropertiesEXT::operator VkPhysicalDeviceMultiDrawPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMultiDrawPropertiesEXT *>(this);
}

GraphicsShaderGroupCreateInfoNV::operator const VkGraphicsShaderGroupCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkGraphicsShaderGroupCreateInfoNV *>(this);
}

GraphicsShaderGroupCreateInfoNV::operator VkGraphicsShaderGroupCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkGraphicsShaderGroupCreateInfoNV *>(this);
}

GraphicsShaderGroupCreateInfoNV::operator const VkGraphicsShaderGroupCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkGraphicsShaderGroupCreateInfoNV *>(this);
}

GraphicsShaderGroupCreateInfoNV::operator VkGraphicsShaderGroupCreateInfoNV *() noexcept {
  return reinterpret_cast<VkGraphicsShaderGroupCreateInfoNV *>(this);
}

GraphicsPipelineShaderGroupsCreateInfoNV::operator const VkGraphicsPipelineShaderGroupsCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkGraphicsPipelineShaderGroupsCreateInfoNV *>(this);
}

GraphicsPipelineShaderGroupsCreateInfoNV::operator VkGraphicsPipelineShaderGroupsCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkGraphicsPipelineShaderGroupsCreateInfoNV *>(this);
}

GraphicsPipelineShaderGroupsCreateInfoNV::operator const VkGraphicsPipelineShaderGroupsCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkGraphicsPipelineShaderGroupsCreateInfoNV *>(this);
}

GraphicsPipelineShaderGroupsCreateInfoNV::operator VkGraphicsPipelineShaderGroupsCreateInfoNV *() noexcept {
  return reinterpret_cast<VkGraphicsPipelineShaderGroupsCreateInfoNV *>(this);
}

BindShaderGroupIndirectCommandNV::operator const VkBindShaderGroupIndirectCommandNV &() const noexcept {
  return *reinterpret_cast<const VkBindShaderGroupIndirectCommandNV *>(this);
}

BindShaderGroupIndirectCommandNV::operator VkBindShaderGroupIndirectCommandNV &() noexcept {
  return *reinterpret_cast<VkBindShaderGroupIndirectCommandNV *>(this);
}

BindShaderGroupIndirectCommandNV::operator const VkBindShaderGroupIndirectCommandNV *() const noexcept {
  return reinterpret_cast<const VkBindShaderGroupIndirectCommandNV *>(this);
}

BindShaderGroupIndirectCommandNV::operator VkBindShaderGroupIndirectCommandNV *() noexcept {
  return reinterpret_cast<VkBindShaderGroupIndirectCommandNV *>(this);
}

BindIndexBufferIndirectCommandNV::operator const VkBindIndexBufferIndirectCommandNV &() const noexcept {
  return *reinterpret_cast<const VkBindIndexBufferIndirectCommandNV *>(this);
}

BindIndexBufferIndirectCommandNV::operator VkBindIndexBufferIndirectCommandNV &() noexcept {
  return *reinterpret_cast<VkBindIndexBufferIndirectCommandNV *>(this);
}

BindIndexBufferIndirectCommandNV::operator const VkBindIndexBufferIndirectCommandNV *() const noexcept {
  return reinterpret_cast<const VkBindIndexBufferIndirectCommandNV *>(this);
}

BindIndexBufferIndirectCommandNV::operator VkBindIndexBufferIndirectCommandNV *() noexcept {
  return reinterpret_cast<VkBindIndexBufferIndirectCommandNV *>(this);
}

BindVertexBufferIndirectCommandNV::operator const VkBindVertexBufferIndirectCommandNV &() const noexcept {
  return *reinterpret_cast<const VkBindVertexBufferIndirectCommandNV *>(this);
}

BindVertexBufferIndirectCommandNV::operator VkBindVertexBufferIndirectCommandNV &() noexcept {
  return *reinterpret_cast<VkBindVertexBufferIndirectCommandNV *>(this);
}

BindVertexBufferIndirectCommandNV::operator const VkBindVertexBufferIndirectCommandNV *() const noexcept {
  return reinterpret_cast<const VkBindVertexBufferIndirectCommandNV *>(this);
}

BindVertexBufferIndirectCommandNV::operator VkBindVertexBufferIndirectCommandNV *() noexcept {
  return reinterpret_cast<VkBindVertexBufferIndirectCommandNV *>(this);
}

SetStateFlagsIndirectCommandNV::operator const VkSetStateFlagsIndirectCommandNV &() const noexcept {
  return *reinterpret_cast<const VkSetStateFlagsIndirectCommandNV *>(this);
}

SetStateFlagsIndirectCommandNV::operator VkSetStateFlagsIndirectCommandNV &() noexcept {
  return *reinterpret_cast<VkSetStateFlagsIndirectCommandNV *>(this);
}

SetStateFlagsIndirectCommandNV::operator const VkSetStateFlagsIndirectCommandNV *() const noexcept {
  return reinterpret_cast<const VkSetStateFlagsIndirectCommandNV *>(this);
}

SetStateFlagsIndirectCommandNV::operator VkSetStateFlagsIndirectCommandNV *() noexcept {
  return reinterpret_cast<VkSetStateFlagsIndirectCommandNV *>(this);
}

IndirectCommandsStreamNV::operator const VkIndirectCommandsStreamNV &() const noexcept {
  return *reinterpret_cast<const VkIndirectCommandsStreamNV *>(this);
}

IndirectCommandsStreamNV::operator VkIndirectCommandsStreamNV &() noexcept {
  return *reinterpret_cast<VkIndirectCommandsStreamNV *>(this);
}

IndirectCommandsStreamNV::operator const VkIndirectCommandsStreamNV *() const noexcept {
  return reinterpret_cast<const VkIndirectCommandsStreamNV *>(this);
}

IndirectCommandsStreamNV::operator VkIndirectCommandsStreamNV *() noexcept {
  return reinterpret_cast<VkIndirectCommandsStreamNV *>(this);
}

IndirectCommandsLayoutTokenNV::operator const VkIndirectCommandsLayoutTokenNV &() const noexcept {
  return *reinterpret_cast<const VkIndirectCommandsLayoutTokenNV *>(this);
}

IndirectCommandsLayoutTokenNV::operator VkIndirectCommandsLayoutTokenNV &() noexcept {
  return *reinterpret_cast<VkIndirectCommandsLayoutTokenNV *>(this);
}

IndirectCommandsLayoutTokenNV::operator const VkIndirectCommandsLayoutTokenNV *() const noexcept {
  return reinterpret_cast<const VkIndirectCommandsLayoutTokenNV *>(this);
}

IndirectCommandsLayoutTokenNV::operator VkIndirectCommandsLayoutTokenNV *() noexcept {
  return reinterpret_cast<VkIndirectCommandsLayoutTokenNV *>(this);
}

IndirectCommandsLayoutCreateInfoNV::operator const VkIndirectCommandsLayoutCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkIndirectCommandsLayoutCreateInfoNV *>(this);
}

IndirectCommandsLayoutCreateInfoNV::operator VkIndirectCommandsLayoutCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkIndirectCommandsLayoutCreateInfoNV *>(this);
}

IndirectCommandsLayoutCreateInfoNV::operator const VkIndirectCommandsLayoutCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkIndirectCommandsLayoutCreateInfoNV *>(this);
}

IndirectCommandsLayoutCreateInfoNV::operator VkIndirectCommandsLayoutCreateInfoNV *() noexcept {
  return reinterpret_cast<VkIndirectCommandsLayoutCreateInfoNV *>(this);
}

GeneratedCommandsInfoNV::operator const VkGeneratedCommandsInfoNV &() const noexcept {
  return *reinterpret_cast<const VkGeneratedCommandsInfoNV *>(this);
}

GeneratedCommandsInfoNV::operator VkGeneratedCommandsInfoNV &() noexcept {
  return *reinterpret_cast<VkGeneratedCommandsInfoNV *>(this);
}

GeneratedCommandsInfoNV::operator const VkGeneratedCommandsInfoNV *() const noexcept {
  return reinterpret_cast<const VkGeneratedCommandsInfoNV *>(this);
}

GeneratedCommandsInfoNV::operator VkGeneratedCommandsInfoNV *() noexcept {
  return reinterpret_cast<VkGeneratedCommandsInfoNV *>(this);
}

GeneratedCommandsMemoryRequirementsInfoNV::operator const VkGeneratedCommandsMemoryRequirementsInfoNV &() const noexcept {
  return *reinterpret_cast<const VkGeneratedCommandsMemoryRequirementsInfoNV *>(this);
}

GeneratedCommandsMemoryRequirementsInfoNV::operator VkGeneratedCommandsMemoryRequirementsInfoNV &() noexcept {
  return *reinterpret_cast<VkGeneratedCommandsMemoryRequirementsInfoNV *>(this);
}

GeneratedCommandsMemoryRequirementsInfoNV::operator const VkGeneratedCommandsMemoryRequirementsInfoNV *() const noexcept {
  return reinterpret_cast<const VkGeneratedCommandsMemoryRequirementsInfoNV *>(this);
}

GeneratedCommandsMemoryRequirementsInfoNV::operator VkGeneratedCommandsMemoryRequirementsInfoNV *() noexcept {
  return reinterpret_cast<VkGeneratedCommandsMemoryRequirementsInfoNV *>(this);
}

PipelineIndirectDeviceAddressInfoNV::operator const VkPipelineIndirectDeviceAddressInfoNV &() const noexcept {
  return *reinterpret_cast<const VkPipelineIndirectDeviceAddressInfoNV *>(this);
}

PipelineIndirectDeviceAddressInfoNV::operator VkPipelineIndirectDeviceAddressInfoNV &() noexcept {
  return *reinterpret_cast<VkPipelineIndirectDeviceAddressInfoNV *>(this);
}

PipelineIndirectDeviceAddressInfoNV::operator const VkPipelineIndirectDeviceAddressInfoNV *() const noexcept {
  return reinterpret_cast<const VkPipelineIndirectDeviceAddressInfoNV *>(this);
}

PipelineIndirectDeviceAddressInfoNV::operator VkPipelineIndirectDeviceAddressInfoNV *() noexcept {
  return reinterpret_cast<VkPipelineIndirectDeviceAddressInfoNV *>(this);
}

BindPipelineIndirectCommandNV::operator const VkBindPipelineIndirectCommandNV &() const noexcept {
  return *reinterpret_cast<const VkBindPipelineIndirectCommandNV *>(this);
}

BindPipelineIndirectCommandNV::operator VkBindPipelineIndirectCommandNV &() noexcept {
  return *reinterpret_cast<VkBindPipelineIndirectCommandNV *>(this);
}

BindPipelineIndirectCommandNV::operator const VkBindPipelineIndirectCommandNV *() const noexcept {
  return reinterpret_cast<const VkBindPipelineIndirectCommandNV *>(this);
}

BindPipelineIndirectCommandNV::operator VkBindPipelineIndirectCommandNV *() noexcept {
  return reinterpret_cast<VkBindPipelineIndirectCommandNV *>(this);
}

PhysicalDeviceFeatures2::operator const VkPhysicalDeviceFeatures2 &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceFeatures2 *>(this);
}

PhysicalDeviceFeatures2::operator VkPhysicalDeviceFeatures2 &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceFeatures2 *>(this);
}

PhysicalDeviceFeatures2::operator const VkPhysicalDeviceFeatures2 *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceFeatures2 *>(this);
}

PhysicalDeviceFeatures2::operator VkPhysicalDeviceFeatures2 *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceFeatures2 *>(this);
}

PhysicalDeviceProperties2::operator const VkPhysicalDeviceProperties2 &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceProperties2 *>(this);
}

PhysicalDeviceProperties2::operator VkPhysicalDeviceProperties2 &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceProperties2 *>(this);
}

PhysicalDeviceProperties2::operator const VkPhysicalDeviceProperties2 *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceProperties2 *>(this);
}

PhysicalDeviceProperties2::operator VkPhysicalDeviceProperties2 *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceProperties2 *>(this);
}

FormatProperties2::operator const VkFormatProperties2 &() const noexcept {
  return *reinterpret_cast<const VkFormatProperties2 *>(this);
}

FormatProperties2::operator VkFormatProperties2 &() noexcept {
  return *reinterpret_cast<VkFormatProperties2 *>(this);
}

FormatProperties2::operator const VkFormatProperties2 *() const noexcept {
  return reinterpret_cast<const VkFormatProperties2 *>(this);
}

FormatProperties2::operator VkFormatProperties2 *() noexcept {
  return reinterpret_cast<VkFormatProperties2 *>(this);
}

ImageFormatProperties2::operator const VkImageFormatProperties2 &() const noexcept {
  return *reinterpret_cast<const VkImageFormatProperties2 *>(this);
}

ImageFormatProperties2::operator VkImageFormatProperties2 &() noexcept {
  return *reinterpret_cast<VkImageFormatProperties2 *>(this);
}

ImageFormatProperties2::operator const VkImageFormatProperties2 *() const noexcept {
  return reinterpret_cast<const VkImageFormatProperties2 *>(this);
}

ImageFormatProperties2::operator VkImageFormatProperties2 *() noexcept {
  return reinterpret_cast<VkImageFormatProperties2 *>(this);
}

PhysicalDeviceImageFormatInfo2::operator const VkPhysicalDeviceImageFormatInfo2 &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceImageFormatInfo2 *>(this);
}

PhysicalDeviceImageFormatInfo2::operator VkPhysicalDeviceImageFormatInfo2 &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceImageFormatInfo2 *>(this);
}

PhysicalDeviceImageFormatInfo2::operator const VkPhysicalDeviceImageFormatInfo2 *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceImageFormatInfo2 *>(this);
}

PhysicalDeviceImageFormatInfo2::operator VkPhysicalDeviceImageFormatInfo2 *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceImageFormatInfo2 *>(this);
}

QueueFamilyProperties2::operator const VkQueueFamilyProperties2 &() const noexcept {
  return *reinterpret_cast<const VkQueueFamilyProperties2 *>(this);
}

QueueFamilyProperties2::operator VkQueueFamilyProperties2 &() noexcept {
  return *reinterpret_cast<VkQueueFamilyProperties2 *>(this);
}

QueueFamilyProperties2::operator const VkQueueFamilyProperties2 *() const noexcept {
  return reinterpret_cast<const VkQueueFamilyProperties2 *>(this);
}

QueueFamilyProperties2::operator VkQueueFamilyProperties2 *() noexcept {
  return reinterpret_cast<VkQueueFamilyProperties2 *>(this);
}

PhysicalDeviceMemoryProperties2::operator const VkPhysicalDeviceMemoryProperties2 &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMemoryProperties2 *>(this);
}

PhysicalDeviceMemoryProperties2::operator VkPhysicalDeviceMemoryProperties2 &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMemoryProperties2 *>(this);
}

PhysicalDeviceMemoryProperties2::operator const VkPhysicalDeviceMemoryProperties2 *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMemoryProperties2 *>(this);
}

PhysicalDeviceMemoryProperties2::operator VkPhysicalDeviceMemoryProperties2 *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMemoryProperties2 *>(this);
}

SparseImageFormatProperties2::operator const VkSparseImageFormatProperties2 &() const noexcept {
  return *reinterpret_cast<const VkSparseImageFormatProperties2 *>(this);
}

SparseImageFormatProperties2::operator VkSparseImageFormatProperties2 &() noexcept {
  return *reinterpret_cast<VkSparseImageFormatProperties2 *>(this);
}

SparseImageFormatProperties2::operator const VkSparseImageFormatProperties2 *() const noexcept {
  return reinterpret_cast<const VkSparseImageFormatProperties2 *>(this);
}

SparseImageFormatProperties2::operator VkSparseImageFormatProperties2 *() noexcept {
  return reinterpret_cast<VkSparseImageFormatProperties2 *>(this);
}

PhysicalDeviceSparseImageFormatInfo2::operator const VkPhysicalDeviceSparseImageFormatInfo2 &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceSparseImageFormatInfo2 *>(this);
}

PhysicalDeviceSparseImageFormatInfo2::operator VkPhysicalDeviceSparseImageFormatInfo2 &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceSparseImageFormatInfo2 *>(this);
}

PhysicalDeviceSparseImageFormatInfo2::operator const VkPhysicalDeviceSparseImageFormatInfo2 *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceSparseImageFormatInfo2 *>(this);
}

PhysicalDeviceSparseImageFormatInfo2::operator VkPhysicalDeviceSparseImageFormatInfo2 *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceSparseImageFormatInfo2 *>(this);
}

PhysicalDevicePushDescriptorPropertiesKHR::operator const VkPhysicalDevicePushDescriptorPropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDevicePushDescriptorPropertiesKHR *>(this);
}

PhysicalDevicePushDescriptorPropertiesKHR::operator VkPhysicalDevicePushDescriptorPropertiesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDevicePushDescriptorPropertiesKHR *>(this);
}

PhysicalDevicePushDescriptorPropertiesKHR::operator const VkPhysicalDevicePushDescriptorPropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDevicePushDescriptorPropertiesKHR *>(this);
}

PhysicalDevicePushDescriptorPropertiesKHR::operator VkPhysicalDevicePushDescriptorPropertiesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDevicePushDescriptorPropertiesKHR *>(this);
}

ConformanceVersion::operator const VkConformanceVersion &() const noexcept {
  return *reinterpret_cast<const VkConformanceVersion *>(this);
}

ConformanceVersion::operator VkConformanceVersion &() noexcept {
  return *reinterpret_cast<VkConformanceVersion *>(this);
}

ConformanceVersion::operator const VkConformanceVersion *() const noexcept {
  return reinterpret_cast<const VkConformanceVersion *>(this);
}

ConformanceVersion::operator VkConformanceVersion *() noexcept {
  return reinterpret_cast<VkConformanceVersion *>(this);
}

PhysicalDeviceDriverProperties::operator const VkPhysicalDeviceDriverProperties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDriverProperties *>(this);
}

PhysicalDeviceDriverProperties::operator VkPhysicalDeviceDriverProperties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDriverProperties *>(this);
}

PhysicalDeviceDriverProperties::operator const VkPhysicalDeviceDriverProperties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDriverProperties *>(this);
}

PhysicalDeviceDriverProperties::operator VkPhysicalDeviceDriverProperties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDriverProperties *>(this);
}

RectLayerKHR::operator const VkRectLayerKHR &() const noexcept {
  return *reinterpret_cast<const VkRectLayerKHR *>(this);
}

RectLayerKHR::operator VkRectLayerKHR &() noexcept {
  return *reinterpret_cast<VkRectLayerKHR *>(this);
}

RectLayerKHR::operator const VkRectLayerKHR *() const noexcept {
  return reinterpret_cast<const VkRectLayerKHR *>(this);
}

RectLayerKHR::operator VkRectLayerKHR *() noexcept {
  return reinterpret_cast<VkRectLayerKHR *>(this);
}

PresentRegionKHR::operator const VkPresentRegionKHR &() const noexcept {
  return *reinterpret_cast<const VkPresentRegionKHR *>(this);
}

PresentRegionKHR::operator VkPresentRegionKHR &() noexcept {
  return *reinterpret_cast<VkPresentRegionKHR *>(this);
}

PresentRegionKHR::operator const VkPresentRegionKHR *() const noexcept {
  return reinterpret_cast<const VkPresentRegionKHR *>(this);
}

PresentRegionKHR::operator VkPresentRegionKHR *() noexcept {
  return reinterpret_cast<VkPresentRegionKHR *>(this);
}

PresentRegionsKHR::operator const VkPresentRegionsKHR &() const noexcept {
  return *reinterpret_cast<const VkPresentRegionsKHR *>(this);
}

PresentRegionsKHR::operator VkPresentRegionsKHR &() noexcept {
  return *reinterpret_cast<VkPresentRegionsKHR *>(this);
}

PresentRegionsKHR::operator const VkPresentRegionsKHR *() const noexcept {
  return reinterpret_cast<const VkPresentRegionsKHR *>(this);
}

PresentRegionsKHR::operator VkPresentRegionsKHR *() noexcept {
  return reinterpret_cast<VkPresentRegionsKHR *>(this);
}

PhysicalDeviceVariablePointersFeatures::operator const VkPhysicalDeviceVariablePointersFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceVariablePointersFeatures *>(this);
}

PhysicalDeviceVariablePointersFeatures::operator VkPhysicalDeviceVariablePointersFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceVariablePointersFeatures *>(this);
}

PhysicalDeviceVariablePointersFeatures::operator const VkPhysicalDeviceVariablePointersFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceVariablePointersFeatures *>(this);
}

PhysicalDeviceVariablePointersFeatures::operator VkPhysicalDeviceVariablePointersFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceVariablePointersFeatures *>(this);
}

ExternalMemoryProperties::operator const VkExternalMemoryProperties &() const noexcept {
  return *reinterpret_cast<const VkExternalMemoryProperties *>(this);
}

ExternalMemoryProperties::operator VkExternalMemoryProperties &() noexcept {
  return *reinterpret_cast<VkExternalMemoryProperties *>(this);
}

ExternalMemoryProperties::operator const VkExternalMemoryProperties *() const noexcept {
  return reinterpret_cast<const VkExternalMemoryProperties *>(this);
}

ExternalMemoryProperties::operator VkExternalMemoryProperties *() noexcept {
  return reinterpret_cast<VkExternalMemoryProperties *>(this);
}

PhysicalDeviceExternalImageFormatInfo::operator const VkPhysicalDeviceExternalImageFormatInfo &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceExternalImageFormatInfo *>(this);
}

PhysicalDeviceExternalImageFormatInfo::operator VkPhysicalDeviceExternalImageFormatInfo &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceExternalImageFormatInfo *>(this);
}

PhysicalDeviceExternalImageFormatInfo::operator const VkPhysicalDeviceExternalImageFormatInfo *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceExternalImageFormatInfo *>(this);
}

PhysicalDeviceExternalImageFormatInfo::operator VkPhysicalDeviceExternalImageFormatInfo *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceExternalImageFormatInfo *>(this);
}

ExternalImageFormatProperties::operator const VkExternalImageFormatProperties &() const noexcept {
  return *reinterpret_cast<const VkExternalImageFormatProperties *>(this);
}

ExternalImageFormatProperties::operator VkExternalImageFormatProperties &() noexcept {
  return *reinterpret_cast<VkExternalImageFormatProperties *>(this);
}

ExternalImageFormatProperties::operator const VkExternalImageFormatProperties *() const noexcept {
  return reinterpret_cast<const VkExternalImageFormatProperties *>(this);
}

ExternalImageFormatProperties::operator VkExternalImageFormatProperties *() noexcept {
  return reinterpret_cast<VkExternalImageFormatProperties *>(this);
}

PhysicalDeviceExternalBufferInfo::operator const VkPhysicalDeviceExternalBufferInfo &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceExternalBufferInfo *>(this);
}

PhysicalDeviceExternalBufferInfo::operator VkPhysicalDeviceExternalBufferInfo &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceExternalBufferInfo *>(this);
}

PhysicalDeviceExternalBufferInfo::operator const VkPhysicalDeviceExternalBufferInfo *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceExternalBufferInfo *>(this);
}

PhysicalDeviceExternalBufferInfo::operator VkPhysicalDeviceExternalBufferInfo *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceExternalBufferInfo *>(this);
}

ExternalBufferProperties::operator const VkExternalBufferProperties &() const noexcept {
  return *reinterpret_cast<const VkExternalBufferProperties *>(this);
}

ExternalBufferProperties::operator VkExternalBufferProperties &() noexcept {
  return *reinterpret_cast<VkExternalBufferProperties *>(this);
}

ExternalBufferProperties::operator const VkExternalBufferProperties *() const noexcept {
  return reinterpret_cast<const VkExternalBufferProperties *>(this);
}

ExternalBufferProperties::operator VkExternalBufferProperties *() noexcept {
  return reinterpret_cast<VkExternalBufferProperties *>(this);
}

PhysicalDeviceIDProperties::operator const VkPhysicalDeviceIDProperties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceIDProperties *>(this);
}

PhysicalDeviceIDProperties::operator VkPhysicalDeviceIDProperties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceIDProperties *>(this);
}

PhysicalDeviceIDProperties::operator const VkPhysicalDeviceIDProperties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceIDProperties *>(this);
}

PhysicalDeviceIDProperties::operator VkPhysicalDeviceIDProperties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceIDProperties *>(this);
}

ExternalMemoryImageCreateInfo::operator const VkExternalMemoryImageCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkExternalMemoryImageCreateInfo *>(this);
}

ExternalMemoryImageCreateInfo::operator VkExternalMemoryImageCreateInfo &() noexcept {
  return *reinterpret_cast<VkExternalMemoryImageCreateInfo *>(this);
}

ExternalMemoryImageCreateInfo::operator const VkExternalMemoryImageCreateInfo *() const noexcept {
  return reinterpret_cast<const VkExternalMemoryImageCreateInfo *>(this);
}

ExternalMemoryImageCreateInfo::operator VkExternalMemoryImageCreateInfo *() noexcept {
  return reinterpret_cast<VkExternalMemoryImageCreateInfo *>(this);
}

ExternalMemoryBufferCreateInfo::operator const VkExternalMemoryBufferCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkExternalMemoryBufferCreateInfo *>(this);
}

ExternalMemoryBufferCreateInfo::operator VkExternalMemoryBufferCreateInfo &() noexcept {
  return *reinterpret_cast<VkExternalMemoryBufferCreateInfo *>(this);
}

ExternalMemoryBufferCreateInfo::operator const VkExternalMemoryBufferCreateInfo *() const noexcept {
  return reinterpret_cast<const VkExternalMemoryBufferCreateInfo *>(this);
}

ExternalMemoryBufferCreateInfo::operator VkExternalMemoryBufferCreateInfo *() noexcept {
  return reinterpret_cast<VkExternalMemoryBufferCreateInfo *>(this);
}

ExportMemoryAllocateInfo::operator const VkExportMemoryAllocateInfo &() const noexcept {
  return *reinterpret_cast<const VkExportMemoryAllocateInfo *>(this);
}

ExportMemoryAllocateInfo::operator VkExportMemoryAllocateInfo &() noexcept {
  return *reinterpret_cast<VkExportMemoryAllocateInfo *>(this);
}

ExportMemoryAllocateInfo::operator const VkExportMemoryAllocateInfo *() const noexcept {
  return reinterpret_cast<const VkExportMemoryAllocateInfo *>(this);
}

ExportMemoryAllocateInfo::operator VkExportMemoryAllocateInfo *() noexcept {
  return reinterpret_cast<VkExportMemoryAllocateInfo *>(this);
}

ImportMemoryFdInfoKHR::operator const VkImportMemoryFdInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkImportMemoryFdInfoKHR *>(this);
}

ImportMemoryFdInfoKHR::operator VkImportMemoryFdInfoKHR &() noexcept {
  return *reinterpret_cast<VkImportMemoryFdInfoKHR *>(this);
}

ImportMemoryFdInfoKHR::operator const VkImportMemoryFdInfoKHR *() const noexcept {
  return reinterpret_cast<const VkImportMemoryFdInfoKHR *>(this);
}

ImportMemoryFdInfoKHR::operator VkImportMemoryFdInfoKHR *() noexcept {
  return reinterpret_cast<VkImportMemoryFdInfoKHR *>(this);
}

MemoryFdPropertiesKHR::operator const VkMemoryFdPropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkMemoryFdPropertiesKHR *>(this);
}

MemoryFdPropertiesKHR::operator VkMemoryFdPropertiesKHR &() noexcept {
  return *reinterpret_cast<VkMemoryFdPropertiesKHR *>(this);
}

MemoryFdPropertiesKHR::operator const VkMemoryFdPropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkMemoryFdPropertiesKHR *>(this);
}

MemoryFdPropertiesKHR::operator VkMemoryFdPropertiesKHR *() noexcept {
  return reinterpret_cast<VkMemoryFdPropertiesKHR *>(this);
}

MemoryGetFdInfoKHR::operator const VkMemoryGetFdInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkMemoryGetFdInfoKHR *>(this);
}

MemoryGetFdInfoKHR::operator VkMemoryGetFdInfoKHR &() noexcept {
  return *reinterpret_cast<VkMemoryGetFdInfoKHR *>(this);
}

MemoryGetFdInfoKHR::operator const VkMemoryGetFdInfoKHR *() const noexcept {
  return reinterpret_cast<const VkMemoryGetFdInfoKHR *>(this);
}

MemoryGetFdInfoKHR::operator VkMemoryGetFdInfoKHR *() noexcept {
  return reinterpret_cast<VkMemoryGetFdInfoKHR *>(this);
}

PhysicalDeviceExternalSemaphoreInfo::operator const VkPhysicalDeviceExternalSemaphoreInfo &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceExternalSemaphoreInfo *>(this);
}

PhysicalDeviceExternalSemaphoreInfo::operator VkPhysicalDeviceExternalSemaphoreInfo &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceExternalSemaphoreInfo *>(this);
}

PhysicalDeviceExternalSemaphoreInfo::operator const VkPhysicalDeviceExternalSemaphoreInfo *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceExternalSemaphoreInfo *>(this);
}

PhysicalDeviceExternalSemaphoreInfo::operator VkPhysicalDeviceExternalSemaphoreInfo *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceExternalSemaphoreInfo *>(this);
}

ExternalSemaphoreProperties::operator const VkExternalSemaphoreProperties &() const noexcept {
  return *reinterpret_cast<const VkExternalSemaphoreProperties *>(this);
}

ExternalSemaphoreProperties::operator VkExternalSemaphoreProperties &() noexcept {
  return *reinterpret_cast<VkExternalSemaphoreProperties *>(this);
}

ExternalSemaphoreProperties::operator const VkExternalSemaphoreProperties *() const noexcept {
  return reinterpret_cast<const VkExternalSemaphoreProperties *>(this);
}

ExternalSemaphoreProperties::operator VkExternalSemaphoreProperties *() noexcept {
  return reinterpret_cast<VkExternalSemaphoreProperties *>(this);
}

ExportSemaphoreCreateInfo::operator const VkExportSemaphoreCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkExportSemaphoreCreateInfo *>(this);
}

ExportSemaphoreCreateInfo::operator VkExportSemaphoreCreateInfo &() noexcept {
  return *reinterpret_cast<VkExportSemaphoreCreateInfo *>(this);
}

ExportSemaphoreCreateInfo::operator const VkExportSemaphoreCreateInfo *() const noexcept {
  return reinterpret_cast<const VkExportSemaphoreCreateInfo *>(this);
}

ExportSemaphoreCreateInfo::operator VkExportSemaphoreCreateInfo *() noexcept {
  return reinterpret_cast<VkExportSemaphoreCreateInfo *>(this);
}

ImportSemaphoreFdInfoKHR::operator const VkImportSemaphoreFdInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkImportSemaphoreFdInfoKHR *>(this);
}

ImportSemaphoreFdInfoKHR::operator VkImportSemaphoreFdInfoKHR &() noexcept {
  return *reinterpret_cast<VkImportSemaphoreFdInfoKHR *>(this);
}

ImportSemaphoreFdInfoKHR::operator const VkImportSemaphoreFdInfoKHR *() const noexcept {
  return reinterpret_cast<const VkImportSemaphoreFdInfoKHR *>(this);
}

ImportSemaphoreFdInfoKHR::operator VkImportSemaphoreFdInfoKHR *() noexcept {
  return reinterpret_cast<VkImportSemaphoreFdInfoKHR *>(this);
}

SemaphoreGetFdInfoKHR::operator const VkSemaphoreGetFdInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkSemaphoreGetFdInfoKHR *>(this);
}

SemaphoreGetFdInfoKHR::operator VkSemaphoreGetFdInfoKHR &() noexcept {
  return *reinterpret_cast<VkSemaphoreGetFdInfoKHR *>(this);
}

SemaphoreGetFdInfoKHR::operator const VkSemaphoreGetFdInfoKHR *() const noexcept {
  return reinterpret_cast<const VkSemaphoreGetFdInfoKHR *>(this);
}

SemaphoreGetFdInfoKHR::operator VkSemaphoreGetFdInfoKHR *() noexcept {
  return reinterpret_cast<VkSemaphoreGetFdInfoKHR *>(this);
}

PhysicalDeviceExternalFenceInfo::operator const VkPhysicalDeviceExternalFenceInfo &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceExternalFenceInfo *>(this);
}

PhysicalDeviceExternalFenceInfo::operator VkPhysicalDeviceExternalFenceInfo &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceExternalFenceInfo *>(this);
}

PhysicalDeviceExternalFenceInfo::operator const VkPhysicalDeviceExternalFenceInfo *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceExternalFenceInfo *>(this);
}

PhysicalDeviceExternalFenceInfo::operator VkPhysicalDeviceExternalFenceInfo *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceExternalFenceInfo *>(this);
}

ExternalFenceProperties::operator const VkExternalFenceProperties &() const noexcept {
  return *reinterpret_cast<const VkExternalFenceProperties *>(this);
}

ExternalFenceProperties::operator VkExternalFenceProperties &() noexcept {
  return *reinterpret_cast<VkExternalFenceProperties *>(this);
}

ExternalFenceProperties::operator const VkExternalFenceProperties *() const noexcept {
  return reinterpret_cast<const VkExternalFenceProperties *>(this);
}

ExternalFenceProperties::operator VkExternalFenceProperties *() noexcept {
  return reinterpret_cast<VkExternalFenceProperties *>(this);
}

ExportFenceCreateInfo::operator const VkExportFenceCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkExportFenceCreateInfo *>(this);
}

ExportFenceCreateInfo::operator VkExportFenceCreateInfo &() noexcept {
  return *reinterpret_cast<VkExportFenceCreateInfo *>(this);
}

ExportFenceCreateInfo::operator const VkExportFenceCreateInfo *() const noexcept {
  return reinterpret_cast<const VkExportFenceCreateInfo *>(this);
}

ExportFenceCreateInfo::operator VkExportFenceCreateInfo *() noexcept {
  return reinterpret_cast<VkExportFenceCreateInfo *>(this);
}

ImportFenceFdInfoKHR::operator const VkImportFenceFdInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkImportFenceFdInfoKHR *>(this);
}

ImportFenceFdInfoKHR::operator VkImportFenceFdInfoKHR &() noexcept {
  return *reinterpret_cast<VkImportFenceFdInfoKHR *>(this);
}

ImportFenceFdInfoKHR::operator const VkImportFenceFdInfoKHR *() const noexcept {
  return reinterpret_cast<const VkImportFenceFdInfoKHR *>(this);
}

ImportFenceFdInfoKHR::operator VkImportFenceFdInfoKHR *() noexcept {
  return reinterpret_cast<VkImportFenceFdInfoKHR *>(this);
}

FenceGetFdInfoKHR::operator const VkFenceGetFdInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkFenceGetFdInfoKHR *>(this);
}

FenceGetFdInfoKHR::operator VkFenceGetFdInfoKHR &() noexcept {
  return *reinterpret_cast<VkFenceGetFdInfoKHR *>(this);
}

FenceGetFdInfoKHR::operator const VkFenceGetFdInfoKHR *() const noexcept {
  return reinterpret_cast<const VkFenceGetFdInfoKHR *>(this);
}

FenceGetFdInfoKHR::operator VkFenceGetFdInfoKHR *() noexcept {
  return reinterpret_cast<VkFenceGetFdInfoKHR *>(this);
}

PhysicalDeviceMultiviewFeatures::operator const VkPhysicalDeviceMultiviewFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMultiviewFeatures *>(this);
}

PhysicalDeviceMultiviewFeatures::operator VkPhysicalDeviceMultiviewFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMultiviewFeatures *>(this);
}

PhysicalDeviceMultiviewFeatures::operator const VkPhysicalDeviceMultiviewFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMultiviewFeatures *>(this);
}

PhysicalDeviceMultiviewFeatures::operator VkPhysicalDeviceMultiviewFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMultiviewFeatures *>(this);
}

PhysicalDeviceMultiviewProperties::operator const VkPhysicalDeviceMultiviewProperties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMultiviewProperties *>(this);
}

PhysicalDeviceMultiviewProperties::operator VkPhysicalDeviceMultiviewProperties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMultiviewProperties *>(this);
}

PhysicalDeviceMultiviewProperties::operator const VkPhysicalDeviceMultiviewProperties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMultiviewProperties *>(this);
}

PhysicalDeviceMultiviewProperties::operator VkPhysicalDeviceMultiviewProperties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMultiviewProperties *>(this);
}

RenderPassMultiviewCreateInfo::operator const VkRenderPassMultiviewCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkRenderPassMultiviewCreateInfo *>(this);
}

RenderPassMultiviewCreateInfo::operator VkRenderPassMultiviewCreateInfo &() noexcept {
  return *reinterpret_cast<VkRenderPassMultiviewCreateInfo *>(this);
}

RenderPassMultiviewCreateInfo::operator const VkRenderPassMultiviewCreateInfo *() const noexcept {
  return reinterpret_cast<const VkRenderPassMultiviewCreateInfo *>(this);
}

RenderPassMultiviewCreateInfo::operator VkRenderPassMultiviewCreateInfo *() noexcept {
  return reinterpret_cast<VkRenderPassMultiviewCreateInfo *>(this);
}

SurfaceCapabilities2EXT::operator const VkSurfaceCapabilities2EXT &() const noexcept {
  return *reinterpret_cast<const VkSurfaceCapabilities2EXT *>(this);
}

SurfaceCapabilities2EXT::operator VkSurfaceCapabilities2EXT &() noexcept {
  return *reinterpret_cast<VkSurfaceCapabilities2EXT *>(this);
}

SurfaceCapabilities2EXT::operator const VkSurfaceCapabilities2EXT *() const noexcept {
  return reinterpret_cast<const VkSurfaceCapabilities2EXT *>(this);
}

SurfaceCapabilities2EXT::operator VkSurfaceCapabilities2EXT *() noexcept {
  return reinterpret_cast<VkSurfaceCapabilities2EXT *>(this);
}

DisplayPowerInfoEXT::operator const VkDisplayPowerInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkDisplayPowerInfoEXT *>(this);
}

DisplayPowerInfoEXT::operator VkDisplayPowerInfoEXT &() noexcept {
  return *reinterpret_cast<VkDisplayPowerInfoEXT *>(this);
}

DisplayPowerInfoEXT::operator const VkDisplayPowerInfoEXT *() const noexcept {
  return reinterpret_cast<const VkDisplayPowerInfoEXT *>(this);
}

DisplayPowerInfoEXT::operator VkDisplayPowerInfoEXT *() noexcept {
  return reinterpret_cast<VkDisplayPowerInfoEXT *>(this);
}

DeviceEventInfoEXT::operator const VkDeviceEventInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkDeviceEventInfoEXT *>(this);
}

DeviceEventInfoEXT::operator VkDeviceEventInfoEXT &() noexcept {
  return *reinterpret_cast<VkDeviceEventInfoEXT *>(this);
}

DeviceEventInfoEXT::operator const VkDeviceEventInfoEXT *() const noexcept {
  return reinterpret_cast<const VkDeviceEventInfoEXT *>(this);
}

DeviceEventInfoEXT::operator VkDeviceEventInfoEXT *() noexcept {
  return reinterpret_cast<VkDeviceEventInfoEXT *>(this);
}

DisplayEventInfoEXT::operator const VkDisplayEventInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkDisplayEventInfoEXT *>(this);
}

DisplayEventInfoEXT::operator VkDisplayEventInfoEXT &() noexcept {
  return *reinterpret_cast<VkDisplayEventInfoEXT *>(this);
}

DisplayEventInfoEXT::operator const VkDisplayEventInfoEXT *() const noexcept {
  return reinterpret_cast<const VkDisplayEventInfoEXT *>(this);
}

DisplayEventInfoEXT::operator VkDisplayEventInfoEXT *() noexcept {
  return reinterpret_cast<VkDisplayEventInfoEXT *>(this);
}

SwapchainCounterCreateInfoEXT::operator const VkSwapchainCounterCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkSwapchainCounterCreateInfoEXT *>(this);
}

SwapchainCounterCreateInfoEXT::operator VkSwapchainCounterCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkSwapchainCounterCreateInfoEXT *>(this);
}

SwapchainCounterCreateInfoEXT::operator const VkSwapchainCounterCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkSwapchainCounterCreateInfoEXT *>(this);
}

SwapchainCounterCreateInfoEXT::operator VkSwapchainCounterCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkSwapchainCounterCreateInfoEXT *>(this);
}

PhysicalDeviceGroupProperties::operator const VkPhysicalDeviceGroupProperties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceGroupProperties *>(this);
}

PhysicalDeviceGroupProperties::operator VkPhysicalDeviceGroupProperties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceGroupProperties *>(this);
}

PhysicalDeviceGroupProperties::operator const VkPhysicalDeviceGroupProperties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceGroupProperties *>(this);
}

PhysicalDeviceGroupProperties::operator VkPhysicalDeviceGroupProperties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceGroupProperties *>(this);
}

MemoryAllocateFlagsInfo::operator const VkMemoryAllocateFlagsInfo &() const noexcept {
  return *reinterpret_cast<const VkMemoryAllocateFlagsInfo *>(this);
}

MemoryAllocateFlagsInfo::operator VkMemoryAllocateFlagsInfo &() noexcept {
  return *reinterpret_cast<VkMemoryAllocateFlagsInfo *>(this);
}

MemoryAllocateFlagsInfo::operator const VkMemoryAllocateFlagsInfo *() const noexcept {
  return reinterpret_cast<const VkMemoryAllocateFlagsInfo *>(this);
}

MemoryAllocateFlagsInfo::operator VkMemoryAllocateFlagsInfo *() noexcept {
  return reinterpret_cast<VkMemoryAllocateFlagsInfo *>(this);
}

BindBufferMemoryInfo::operator const VkBindBufferMemoryInfo &() const noexcept {
  return *reinterpret_cast<const VkBindBufferMemoryInfo *>(this);
}

BindBufferMemoryInfo::operator VkBindBufferMemoryInfo &() noexcept {
  return *reinterpret_cast<VkBindBufferMemoryInfo *>(this);
}

BindBufferMemoryInfo::operator const VkBindBufferMemoryInfo *() const noexcept {
  return reinterpret_cast<const VkBindBufferMemoryInfo *>(this);
}

BindBufferMemoryInfo::operator VkBindBufferMemoryInfo *() noexcept {
  return reinterpret_cast<VkBindBufferMemoryInfo *>(this);
}

BindBufferMemoryDeviceGroupInfo::operator const VkBindBufferMemoryDeviceGroupInfo &() const noexcept {
  return *reinterpret_cast<const VkBindBufferMemoryDeviceGroupInfo *>(this);
}

BindBufferMemoryDeviceGroupInfo::operator VkBindBufferMemoryDeviceGroupInfo &() noexcept {
  return *reinterpret_cast<VkBindBufferMemoryDeviceGroupInfo *>(this);
}

BindBufferMemoryDeviceGroupInfo::operator const VkBindBufferMemoryDeviceGroupInfo *() const noexcept {
  return reinterpret_cast<const VkBindBufferMemoryDeviceGroupInfo *>(this);
}

BindBufferMemoryDeviceGroupInfo::operator VkBindBufferMemoryDeviceGroupInfo *() noexcept {
  return reinterpret_cast<VkBindBufferMemoryDeviceGroupInfo *>(this);
}

BindImageMemoryInfo::operator const VkBindImageMemoryInfo &() const noexcept {
  return *reinterpret_cast<const VkBindImageMemoryInfo *>(this);
}

BindImageMemoryInfo::operator VkBindImageMemoryInfo &() noexcept {
  return *reinterpret_cast<VkBindImageMemoryInfo *>(this);
}

BindImageMemoryInfo::operator const VkBindImageMemoryInfo *() const noexcept {
  return reinterpret_cast<const VkBindImageMemoryInfo *>(this);
}

BindImageMemoryInfo::operator VkBindImageMemoryInfo *() noexcept {
  return reinterpret_cast<VkBindImageMemoryInfo *>(this);
}

BindImageMemoryDeviceGroupInfo::operator const VkBindImageMemoryDeviceGroupInfo &() const noexcept {
  return *reinterpret_cast<const VkBindImageMemoryDeviceGroupInfo *>(this);
}

BindImageMemoryDeviceGroupInfo::operator VkBindImageMemoryDeviceGroupInfo &() noexcept {
  return *reinterpret_cast<VkBindImageMemoryDeviceGroupInfo *>(this);
}

BindImageMemoryDeviceGroupInfo::operator const VkBindImageMemoryDeviceGroupInfo *() const noexcept {
  return reinterpret_cast<const VkBindImageMemoryDeviceGroupInfo *>(this);
}

BindImageMemoryDeviceGroupInfo::operator VkBindImageMemoryDeviceGroupInfo *() noexcept {
  return reinterpret_cast<VkBindImageMemoryDeviceGroupInfo *>(this);
}

DeviceGroupRenderPassBeginInfo::operator const VkDeviceGroupRenderPassBeginInfo &() const noexcept {
  return *reinterpret_cast<const VkDeviceGroupRenderPassBeginInfo *>(this);
}

DeviceGroupRenderPassBeginInfo::operator VkDeviceGroupRenderPassBeginInfo &() noexcept {
  return *reinterpret_cast<VkDeviceGroupRenderPassBeginInfo *>(this);
}

DeviceGroupRenderPassBeginInfo::operator const VkDeviceGroupRenderPassBeginInfo *() const noexcept {
  return reinterpret_cast<const VkDeviceGroupRenderPassBeginInfo *>(this);
}

DeviceGroupRenderPassBeginInfo::operator VkDeviceGroupRenderPassBeginInfo *() noexcept {
  return reinterpret_cast<VkDeviceGroupRenderPassBeginInfo *>(this);
}

DeviceGroupCommandBufferBeginInfo::operator const VkDeviceGroupCommandBufferBeginInfo &() const noexcept {
  return *reinterpret_cast<const VkDeviceGroupCommandBufferBeginInfo *>(this);
}

DeviceGroupCommandBufferBeginInfo::operator VkDeviceGroupCommandBufferBeginInfo &() noexcept {
  return *reinterpret_cast<VkDeviceGroupCommandBufferBeginInfo *>(this);
}

DeviceGroupCommandBufferBeginInfo::operator const VkDeviceGroupCommandBufferBeginInfo *() const noexcept {
  return reinterpret_cast<const VkDeviceGroupCommandBufferBeginInfo *>(this);
}

DeviceGroupCommandBufferBeginInfo::operator VkDeviceGroupCommandBufferBeginInfo *() noexcept {
  return reinterpret_cast<VkDeviceGroupCommandBufferBeginInfo *>(this);
}

DeviceGroupSubmitInfo::operator const VkDeviceGroupSubmitInfo &() const noexcept {
  return *reinterpret_cast<const VkDeviceGroupSubmitInfo *>(this);
}

DeviceGroupSubmitInfo::operator VkDeviceGroupSubmitInfo &() noexcept {
  return *reinterpret_cast<VkDeviceGroupSubmitInfo *>(this);
}

DeviceGroupSubmitInfo::operator const VkDeviceGroupSubmitInfo *() const noexcept {
  return reinterpret_cast<const VkDeviceGroupSubmitInfo *>(this);
}

DeviceGroupSubmitInfo::operator VkDeviceGroupSubmitInfo *() noexcept {
  return reinterpret_cast<VkDeviceGroupSubmitInfo *>(this);
}

DeviceGroupBindSparseInfo::operator const VkDeviceGroupBindSparseInfo &() const noexcept {
  return *reinterpret_cast<const VkDeviceGroupBindSparseInfo *>(this);
}

DeviceGroupBindSparseInfo::operator VkDeviceGroupBindSparseInfo &() noexcept {
  return *reinterpret_cast<VkDeviceGroupBindSparseInfo *>(this);
}

DeviceGroupBindSparseInfo::operator const VkDeviceGroupBindSparseInfo *() const noexcept {
  return reinterpret_cast<const VkDeviceGroupBindSparseInfo *>(this);
}

DeviceGroupBindSparseInfo::operator VkDeviceGroupBindSparseInfo *() noexcept {
  return reinterpret_cast<VkDeviceGroupBindSparseInfo *>(this);
}

DeviceGroupPresentCapabilitiesKHR::operator const VkDeviceGroupPresentCapabilitiesKHR &() const noexcept {
  return *reinterpret_cast<const VkDeviceGroupPresentCapabilitiesKHR *>(this);
}

DeviceGroupPresentCapabilitiesKHR::operator VkDeviceGroupPresentCapabilitiesKHR &() noexcept {
  return *reinterpret_cast<VkDeviceGroupPresentCapabilitiesKHR *>(this);
}

DeviceGroupPresentCapabilitiesKHR::operator const VkDeviceGroupPresentCapabilitiesKHR *() const noexcept {
  return reinterpret_cast<const VkDeviceGroupPresentCapabilitiesKHR *>(this);
}

DeviceGroupPresentCapabilitiesKHR::operator VkDeviceGroupPresentCapabilitiesKHR *() noexcept {
  return reinterpret_cast<VkDeviceGroupPresentCapabilitiesKHR *>(this);
}

ImageSwapchainCreateInfoKHR::operator const VkImageSwapchainCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkImageSwapchainCreateInfoKHR *>(this);
}

ImageSwapchainCreateInfoKHR::operator VkImageSwapchainCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkImageSwapchainCreateInfoKHR *>(this);
}

ImageSwapchainCreateInfoKHR::operator const VkImageSwapchainCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkImageSwapchainCreateInfoKHR *>(this);
}

ImageSwapchainCreateInfoKHR::operator VkImageSwapchainCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkImageSwapchainCreateInfoKHR *>(this);
}

BindImageMemorySwapchainInfoKHR::operator const VkBindImageMemorySwapchainInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkBindImageMemorySwapchainInfoKHR *>(this);
}

BindImageMemorySwapchainInfoKHR::operator VkBindImageMemorySwapchainInfoKHR &() noexcept {
  return *reinterpret_cast<VkBindImageMemorySwapchainInfoKHR *>(this);
}

BindImageMemorySwapchainInfoKHR::operator const VkBindImageMemorySwapchainInfoKHR *() const noexcept {
  return reinterpret_cast<const VkBindImageMemorySwapchainInfoKHR *>(this);
}

BindImageMemorySwapchainInfoKHR::operator VkBindImageMemorySwapchainInfoKHR *() noexcept {
  return reinterpret_cast<VkBindImageMemorySwapchainInfoKHR *>(this);
}

AcquireNextImageInfoKHR::operator const VkAcquireNextImageInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkAcquireNextImageInfoKHR *>(this);
}

AcquireNextImageInfoKHR::operator VkAcquireNextImageInfoKHR &() noexcept {
  return *reinterpret_cast<VkAcquireNextImageInfoKHR *>(this);
}

AcquireNextImageInfoKHR::operator const VkAcquireNextImageInfoKHR *() const noexcept {
  return reinterpret_cast<const VkAcquireNextImageInfoKHR *>(this);
}

AcquireNextImageInfoKHR::operator VkAcquireNextImageInfoKHR *() noexcept {
  return reinterpret_cast<VkAcquireNextImageInfoKHR *>(this);
}

DeviceGroupPresentInfoKHR::operator const VkDeviceGroupPresentInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkDeviceGroupPresentInfoKHR *>(this);
}

DeviceGroupPresentInfoKHR::operator VkDeviceGroupPresentInfoKHR &() noexcept {
  return *reinterpret_cast<VkDeviceGroupPresentInfoKHR *>(this);
}

DeviceGroupPresentInfoKHR::operator const VkDeviceGroupPresentInfoKHR *() const noexcept {
  return reinterpret_cast<const VkDeviceGroupPresentInfoKHR *>(this);
}

DeviceGroupPresentInfoKHR::operator VkDeviceGroupPresentInfoKHR *() noexcept {
  return reinterpret_cast<VkDeviceGroupPresentInfoKHR *>(this);
}

DeviceGroupDeviceCreateInfo::operator const VkDeviceGroupDeviceCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkDeviceGroupDeviceCreateInfo *>(this);
}

DeviceGroupDeviceCreateInfo::operator VkDeviceGroupDeviceCreateInfo &() noexcept {
  return *reinterpret_cast<VkDeviceGroupDeviceCreateInfo *>(this);
}

DeviceGroupDeviceCreateInfo::operator const VkDeviceGroupDeviceCreateInfo *() const noexcept {
  return reinterpret_cast<const VkDeviceGroupDeviceCreateInfo *>(this);
}

DeviceGroupDeviceCreateInfo::operator VkDeviceGroupDeviceCreateInfo *() noexcept {
  return reinterpret_cast<VkDeviceGroupDeviceCreateInfo *>(this);
}

DeviceGroupSwapchainCreateInfoKHR::operator const VkDeviceGroupSwapchainCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkDeviceGroupSwapchainCreateInfoKHR *>(this);
}

DeviceGroupSwapchainCreateInfoKHR::operator VkDeviceGroupSwapchainCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkDeviceGroupSwapchainCreateInfoKHR *>(this);
}

DeviceGroupSwapchainCreateInfoKHR::operator const VkDeviceGroupSwapchainCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkDeviceGroupSwapchainCreateInfoKHR *>(this);
}

DeviceGroupSwapchainCreateInfoKHR::operator VkDeviceGroupSwapchainCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkDeviceGroupSwapchainCreateInfoKHR *>(this);
}

DescriptorUpdateTemplateEntry::operator const VkDescriptorUpdateTemplateEntry &() const noexcept {
  return *reinterpret_cast<const VkDescriptorUpdateTemplateEntry *>(this);
}

DescriptorUpdateTemplateEntry::operator VkDescriptorUpdateTemplateEntry &() noexcept {
  return *reinterpret_cast<VkDescriptorUpdateTemplateEntry *>(this);
}

DescriptorUpdateTemplateEntry::operator const VkDescriptorUpdateTemplateEntry *() const noexcept {
  return reinterpret_cast<const VkDescriptorUpdateTemplateEntry *>(this);
}

DescriptorUpdateTemplateEntry::operator VkDescriptorUpdateTemplateEntry *() noexcept {
  return reinterpret_cast<VkDescriptorUpdateTemplateEntry *>(this);
}

DescriptorUpdateTemplateCreateInfo::operator const VkDescriptorUpdateTemplateCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkDescriptorUpdateTemplateCreateInfo *>(this);
}

DescriptorUpdateTemplateCreateInfo::operator VkDescriptorUpdateTemplateCreateInfo &() noexcept {
  return *reinterpret_cast<VkDescriptorUpdateTemplateCreateInfo *>(this);
}

DescriptorUpdateTemplateCreateInfo::operator const VkDescriptorUpdateTemplateCreateInfo *() const noexcept {
  return reinterpret_cast<const VkDescriptorUpdateTemplateCreateInfo *>(this);
}

DescriptorUpdateTemplateCreateInfo::operator VkDescriptorUpdateTemplateCreateInfo *() noexcept {
  return reinterpret_cast<VkDescriptorUpdateTemplateCreateInfo *>(this);
}

XYColorEXT::operator const VkXYColorEXT &() const noexcept {
  return *reinterpret_cast<const VkXYColorEXT *>(this);
}

XYColorEXT::operator VkXYColorEXT &() noexcept {
  return *reinterpret_cast<VkXYColorEXT *>(this);
}

XYColorEXT::operator const VkXYColorEXT *() const noexcept {
  return reinterpret_cast<const VkXYColorEXT *>(this);
}

XYColorEXT::operator VkXYColorEXT *() noexcept {
  return reinterpret_cast<VkXYColorEXT *>(this);
}

PhysicalDevicePresentIdFeaturesKHR::operator const VkPhysicalDevicePresentIdFeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDevicePresentIdFeaturesKHR *>(this);
}

PhysicalDevicePresentIdFeaturesKHR::operator VkPhysicalDevicePresentIdFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDevicePresentIdFeaturesKHR *>(this);
}

PhysicalDevicePresentIdFeaturesKHR::operator const VkPhysicalDevicePresentIdFeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDevicePresentIdFeaturesKHR *>(this);
}

PhysicalDevicePresentIdFeaturesKHR::operator VkPhysicalDevicePresentIdFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDevicePresentIdFeaturesKHR *>(this);
}

PresentIdKHR::operator const VkPresentIdKHR &() const noexcept {
  return *reinterpret_cast<const VkPresentIdKHR *>(this);
}

PresentIdKHR::operator VkPresentIdKHR &() noexcept {
  return *reinterpret_cast<VkPresentIdKHR *>(this);
}

PresentIdKHR::operator const VkPresentIdKHR *() const noexcept {
  return reinterpret_cast<const VkPresentIdKHR *>(this);
}

PresentIdKHR::operator VkPresentIdKHR *() noexcept {
  return reinterpret_cast<VkPresentIdKHR *>(this);
}

PhysicalDevicePresentWaitFeaturesKHR::operator const VkPhysicalDevicePresentWaitFeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDevicePresentWaitFeaturesKHR *>(this);
}

PhysicalDevicePresentWaitFeaturesKHR::operator VkPhysicalDevicePresentWaitFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDevicePresentWaitFeaturesKHR *>(this);
}

PhysicalDevicePresentWaitFeaturesKHR::operator const VkPhysicalDevicePresentWaitFeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDevicePresentWaitFeaturesKHR *>(this);
}

PhysicalDevicePresentWaitFeaturesKHR::operator VkPhysicalDevicePresentWaitFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDevicePresentWaitFeaturesKHR *>(this);
}

HdrMetadataEXT::operator const VkHdrMetadataEXT &() const noexcept {
  return *reinterpret_cast<const VkHdrMetadataEXT *>(this);
}

HdrMetadataEXT::operator VkHdrMetadataEXT &() noexcept {
  return *reinterpret_cast<VkHdrMetadataEXT *>(this);
}

HdrMetadataEXT::operator const VkHdrMetadataEXT *() const noexcept {
  return reinterpret_cast<const VkHdrMetadataEXT *>(this);
}

HdrMetadataEXT::operator VkHdrMetadataEXT *() noexcept {
  return reinterpret_cast<VkHdrMetadataEXT *>(this);
}

DisplayNativeHdrSurfaceCapabilitiesAMD::operator const VkDisplayNativeHdrSurfaceCapabilitiesAMD &() const noexcept {
  return *reinterpret_cast<const VkDisplayNativeHdrSurfaceCapabilitiesAMD *>(this);
}

DisplayNativeHdrSurfaceCapabilitiesAMD::operator VkDisplayNativeHdrSurfaceCapabilitiesAMD &() noexcept {
  return *reinterpret_cast<VkDisplayNativeHdrSurfaceCapabilitiesAMD *>(this);
}

DisplayNativeHdrSurfaceCapabilitiesAMD::operator const VkDisplayNativeHdrSurfaceCapabilitiesAMD *() const noexcept {
  return reinterpret_cast<const VkDisplayNativeHdrSurfaceCapabilitiesAMD *>(this);
}

DisplayNativeHdrSurfaceCapabilitiesAMD::operator VkDisplayNativeHdrSurfaceCapabilitiesAMD *() noexcept {
  return reinterpret_cast<VkDisplayNativeHdrSurfaceCapabilitiesAMD *>(this);
}

SwapchainDisplayNativeHdrCreateInfoAMD::operator const VkSwapchainDisplayNativeHdrCreateInfoAMD &() const noexcept {
  return *reinterpret_cast<const VkSwapchainDisplayNativeHdrCreateInfoAMD *>(this);
}

SwapchainDisplayNativeHdrCreateInfoAMD::operator VkSwapchainDisplayNativeHdrCreateInfoAMD &() noexcept {
  return *reinterpret_cast<VkSwapchainDisplayNativeHdrCreateInfoAMD *>(this);
}

SwapchainDisplayNativeHdrCreateInfoAMD::operator const VkSwapchainDisplayNativeHdrCreateInfoAMD *() const noexcept {
  return reinterpret_cast<const VkSwapchainDisplayNativeHdrCreateInfoAMD *>(this);
}

SwapchainDisplayNativeHdrCreateInfoAMD::operator VkSwapchainDisplayNativeHdrCreateInfoAMD *() noexcept {
  return reinterpret_cast<VkSwapchainDisplayNativeHdrCreateInfoAMD *>(this);
}

RefreshCycleDurationGOOGLE::operator const VkRefreshCycleDurationGOOGLE &() const noexcept {
  return *reinterpret_cast<const VkRefreshCycleDurationGOOGLE *>(this);
}

RefreshCycleDurationGOOGLE::operator VkRefreshCycleDurationGOOGLE &() noexcept {
  return *reinterpret_cast<VkRefreshCycleDurationGOOGLE *>(this);
}

RefreshCycleDurationGOOGLE::operator const VkRefreshCycleDurationGOOGLE *() const noexcept {
  return reinterpret_cast<const VkRefreshCycleDurationGOOGLE *>(this);
}

RefreshCycleDurationGOOGLE::operator VkRefreshCycleDurationGOOGLE *() noexcept {
  return reinterpret_cast<VkRefreshCycleDurationGOOGLE *>(this);
}

PastPresentationTimingGOOGLE::operator const VkPastPresentationTimingGOOGLE &() const noexcept {
  return *reinterpret_cast<const VkPastPresentationTimingGOOGLE *>(this);
}

PastPresentationTimingGOOGLE::operator VkPastPresentationTimingGOOGLE &() noexcept {
  return *reinterpret_cast<VkPastPresentationTimingGOOGLE *>(this);
}

PastPresentationTimingGOOGLE::operator const VkPastPresentationTimingGOOGLE *() const noexcept {
  return reinterpret_cast<const VkPastPresentationTimingGOOGLE *>(this);
}

PastPresentationTimingGOOGLE::operator VkPastPresentationTimingGOOGLE *() noexcept {
  return reinterpret_cast<VkPastPresentationTimingGOOGLE *>(this);
}

PresentTimeGOOGLE::operator const VkPresentTimeGOOGLE &() const noexcept {
  return *reinterpret_cast<const VkPresentTimeGOOGLE *>(this);
}

PresentTimeGOOGLE::operator VkPresentTimeGOOGLE &() noexcept {
  return *reinterpret_cast<VkPresentTimeGOOGLE *>(this);
}

PresentTimeGOOGLE::operator const VkPresentTimeGOOGLE *() const noexcept {
  return reinterpret_cast<const VkPresentTimeGOOGLE *>(this);
}

PresentTimeGOOGLE::operator VkPresentTimeGOOGLE *() noexcept {
  return reinterpret_cast<VkPresentTimeGOOGLE *>(this);
}

PresentTimesInfoGOOGLE::operator const VkPresentTimesInfoGOOGLE &() const noexcept {
  return *reinterpret_cast<const VkPresentTimesInfoGOOGLE *>(this);
}

PresentTimesInfoGOOGLE::operator VkPresentTimesInfoGOOGLE &() noexcept {
  return *reinterpret_cast<VkPresentTimesInfoGOOGLE *>(this);
}

PresentTimesInfoGOOGLE::operator const VkPresentTimesInfoGOOGLE *() const noexcept {
  return reinterpret_cast<const VkPresentTimesInfoGOOGLE *>(this);
}

PresentTimesInfoGOOGLE::operator VkPresentTimesInfoGOOGLE *() noexcept {
  return reinterpret_cast<VkPresentTimesInfoGOOGLE *>(this);
}

ViewportWScalingNV::operator const VkViewportWScalingNV &() const noexcept {
  return *reinterpret_cast<const VkViewportWScalingNV *>(this);
}

ViewportWScalingNV::operator VkViewportWScalingNV &() noexcept {
  return *reinterpret_cast<VkViewportWScalingNV *>(this);
}

ViewportWScalingNV::operator const VkViewportWScalingNV *() const noexcept {
  return reinterpret_cast<const VkViewportWScalingNV *>(this);
}

ViewportWScalingNV::operator VkViewportWScalingNV *() noexcept {
  return reinterpret_cast<VkViewportWScalingNV *>(this);
}

PipelineViewportWScalingStateCreateInfoNV::operator const VkPipelineViewportWScalingStateCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkPipelineViewportWScalingStateCreateInfoNV *>(this);
}

PipelineViewportWScalingStateCreateInfoNV::operator VkPipelineViewportWScalingStateCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkPipelineViewportWScalingStateCreateInfoNV *>(this);
}

PipelineViewportWScalingStateCreateInfoNV::operator const VkPipelineViewportWScalingStateCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkPipelineViewportWScalingStateCreateInfoNV *>(this);
}

PipelineViewportWScalingStateCreateInfoNV::operator VkPipelineViewportWScalingStateCreateInfoNV *() noexcept {
  return reinterpret_cast<VkPipelineViewportWScalingStateCreateInfoNV *>(this);
}

ViewportSwizzleNV::operator const VkViewportSwizzleNV &() const noexcept {
  return *reinterpret_cast<const VkViewportSwizzleNV *>(this);
}

ViewportSwizzleNV::operator VkViewportSwizzleNV &() noexcept {
  return *reinterpret_cast<VkViewportSwizzleNV *>(this);
}

ViewportSwizzleNV::operator const VkViewportSwizzleNV *() const noexcept {
  return reinterpret_cast<const VkViewportSwizzleNV *>(this);
}

ViewportSwizzleNV::operator VkViewportSwizzleNV *() noexcept {
  return reinterpret_cast<VkViewportSwizzleNV *>(this);
}

PipelineViewportSwizzleStateCreateInfoNV::operator const VkPipelineViewportSwizzleStateCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkPipelineViewportSwizzleStateCreateInfoNV *>(this);
}

PipelineViewportSwizzleStateCreateInfoNV::operator VkPipelineViewportSwizzleStateCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkPipelineViewportSwizzleStateCreateInfoNV *>(this);
}

PipelineViewportSwizzleStateCreateInfoNV::operator const VkPipelineViewportSwizzleStateCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkPipelineViewportSwizzleStateCreateInfoNV *>(this);
}

PipelineViewportSwizzleStateCreateInfoNV::operator VkPipelineViewportSwizzleStateCreateInfoNV *() noexcept {
  return reinterpret_cast<VkPipelineViewportSwizzleStateCreateInfoNV *>(this);
}

PhysicalDeviceDiscardRectanglePropertiesEXT::operator const VkPhysicalDeviceDiscardRectanglePropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDiscardRectanglePropertiesEXT *>(this);
}

PhysicalDeviceDiscardRectanglePropertiesEXT::operator VkPhysicalDeviceDiscardRectanglePropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDiscardRectanglePropertiesEXT *>(this);
}

PhysicalDeviceDiscardRectanglePropertiesEXT::operator const VkPhysicalDeviceDiscardRectanglePropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDiscardRectanglePropertiesEXT *>(this);
}

PhysicalDeviceDiscardRectanglePropertiesEXT::operator VkPhysicalDeviceDiscardRectanglePropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDiscardRectanglePropertiesEXT *>(this);
}

PipelineDiscardRectangleStateCreateInfoEXT::operator const VkPipelineDiscardRectangleStateCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkPipelineDiscardRectangleStateCreateInfoEXT *>(this);
}

PipelineDiscardRectangleStateCreateInfoEXT::operator VkPipelineDiscardRectangleStateCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkPipelineDiscardRectangleStateCreateInfoEXT *>(this);
}

PipelineDiscardRectangleStateCreateInfoEXT::operator const VkPipelineDiscardRectangleStateCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkPipelineDiscardRectangleStateCreateInfoEXT *>(this);
}

PipelineDiscardRectangleStateCreateInfoEXT::operator VkPipelineDiscardRectangleStateCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkPipelineDiscardRectangleStateCreateInfoEXT *>(this);
}

PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::operator const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *>(this);
}

PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::operator VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *>(this);
}

PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::operator const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *>(this);
}

PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::operator VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *>(this);
}

InputAttachmentAspectReference::operator const VkInputAttachmentAspectReference &() const noexcept {
  return *reinterpret_cast<const VkInputAttachmentAspectReference *>(this);
}

InputAttachmentAspectReference::operator VkInputAttachmentAspectReference &() noexcept {
  return *reinterpret_cast<VkInputAttachmentAspectReference *>(this);
}

InputAttachmentAspectReference::operator const VkInputAttachmentAspectReference *() const noexcept {
  return reinterpret_cast<const VkInputAttachmentAspectReference *>(this);
}

InputAttachmentAspectReference::operator VkInputAttachmentAspectReference *() noexcept {
  return reinterpret_cast<VkInputAttachmentAspectReference *>(this);
}

RenderPassInputAttachmentAspectCreateInfo::operator const VkRenderPassInputAttachmentAspectCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkRenderPassInputAttachmentAspectCreateInfo *>(this);
}

RenderPassInputAttachmentAspectCreateInfo::operator VkRenderPassInputAttachmentAspectCreateInfo &() noexcept {
  return *reinterpret_cast<VkRenderPassInputAttachmentAspectCreateInfo *>(this);
}

RenderPassInputAttachmentAspectCreateInfo::operator const VkRenderPassInputAttachmentAspectCreateInfo *() const noexcept {
  return reinterpret_cast<const VkRenderPassInputAttachmentAspectCreateInfo *>(this);
}

RenderPassInputAttachmentAspectCreateInfo::operator VkRenderPassInputAttachmentAspectCreateInfo *() noexcept {
  return reinterpret_cast<VkRenderPassInputAttachmentAspectCreateInfo *>(this);
}

PhysicalDeviceSurfaceInfo2KHR::operator const VkPhysicalDeviceSurfaceInfo2KHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceSurfaceInfo2KHR *>(this);
}

PhysicalDeviceSurfaceInfo2KHR::operator VkPhysicalDeviceSurfaceInfo2KHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceSurfaceInfo2KHR *>(this);
}

PhysicalDeviceSurfaceInfo2KHR::operator const VkPhysicalDeviceSurfaceInfo2KHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceSurfaceInfo2KHR *>(this);
}

PhysicalDeviceSurfaceInfo2KHR::operator VkPhysicalDeviceSurfaceInfo2KHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceSurfaceInfo2KHR *>(this);
}

SurfaceCapabilities2KHR::operator const VkSurfaceCapabilities2KHR &() const noexcept {
  return *reinterpret_cast<const VkSurfaceCapabilities2KHR *>(this);
}

SurfaceCapabilities2KHR::operator VkSurfaceCapabilities2KHR &() noexcept {
  return *reinterpret_cast<VkSurfaceCapabilities2KHR *>(this);
}

SurfaceCapabilities2KHR::operator const VkSurfaceCapabilities2KHR *() const noexcept {
  return reinterpret_cast<const VkSurfaceCapabilities2KHR *>(this);
}

SurfaceCapabilities2KHR::operator VkSurfaceCapabilities2KHR *() noexcept {
  return reinterpret_cast<VkSurfaceCapabilities2KHR *>(this);
}

SurfaceFormat2KHR::operator const VkSurfaceFormat2KHR &() const noexcept {
  return *reinterpret_cast<const VkSurfaceFormat2KHR *>(this);
}

SurfaceFormat2KHR::operator VkSurfaceFormat2KHR &() noexcept {
  return *reinterpret_cast<VkSurfaceFormat2KHR *>(this);
}

SurfaceFormat2KHR::operator const VkSurfaceFormat2KHR *() const noexcept {
  return reinterpret_cast<const VkSurfaceFormat2KHR *>(this);
}

SurfaceFormat2KHR::operator VkSurfaceFormat2KHR *() noexcept {
  return reinterpret_cast<VkSurfaceFormat2KHR *>(this);
}

DisplayProperties2KHR::operator const VkDisplayProperties2KHR &() const noexcept {
  return *reinterpret_cast<const VkDisplayProperties2KHR *>(this);
}

DisplayProperties2KHR::operator VkDisplayProperties2KHR &() noexcept {
  return *reinterpret_cast<VkDisplayProperties2KHR *>(this);
}

DisplayProperties2KHR::operator const VkDisplayProperties2KHR *() const noexcept {
  return reinterpret_cast<const VkDisplayProperties2KHR *>(this);
}

DisplayProperties2KHR::operator VkDisplayProperties2KHR *() noexcept {
  return reinterpret_cast<VkDisplayProperties2KHR *>(this);
}

DisplayPlaneProperties2KHR::operator const VkDisplayPlaneProperties2KHR &() const noexcept {
  return *reinterpret_cast<const VkDisplayPlaneProperties2KHR *>(this);
}

DisplayPlaneProperties2KHR::operator VkDisplayPlaneProperties2KHR &() noexcept {
  return *reinterpret_cast<VkDisplayPlaneProperties2KHR *>(this);
}

DisplayPlaneProperties2KHR::operator const VkDisplayPlaneProperties2KHR *() const noexcept {
  return reinterpret_cast<const VkDisplayPlaneProperties2KHR *>(this);
}

DisplayPlaneProperties2KHR::operator VkDisplayPlaneProperties2KHR *() noexcept {
  return reinterpret_cast<VkDisplayPlaneProperties2KHR *>(this);
}

DisplayModeProperties2KHR::operator const VkDisplayModeProperties2KHR &() const noexcept {
  return *reinterpret_cast<const VkDisplayModeProperties2KHR *>(this);
}

DisplayModeProperties2KHR::operator VkDisplayModeProperties2KHR &() noexcept {
  return *reinterpret_cast<VkDisplayModeProperties2KHR *>(this);
}

DisplayModeProperties2KHR::operator const VkDisplayModeProperties2KHR *() const noexcept {
  return reinterpret_cast<const VkDisplayModeProperties2KHR *>(this);
}

DisplayModeProperties2KHR::operator VkDisplayModeProperties2KHR *() noexcept {
  return reinterpret_cast<VkDisplayModeProperties2KHR *>(this);
}

DisplayPlaneInfo2KHR::operator const VkDisplayPlaneInfo2KHR &() const noexcept {
  return *reinterpret_cast<const VkDisplayPlaneInfo2KHR *>(this);
}

DisplayPlaneInfo2KHR::operator VkDisplayPlaneInfo2KHR &() noexcept {
  return *reinterpret_cast<VkDisplayPlaneInfo2KHR *>(this);
}

DisplayPlaneInfo2KHR::operator const VkDisplayPlaneInfo2KHR *() const noexcept {
  return reinterpret_cast<const VkDisplayPlaneInfo2KHR *>(this);
}

DisplayPlaneInfo2KHR::operator VkDisplayPlaneInfo2KHR *() noexcept {
  return reinterpret_cast<VkDisplayPlaneInfo2KHR *>(this);
}

DisplayPlaneCapabilities2KHR::operator const VkDisplayPlaneCapabilities2KHR &() const noexcept {
  return *reinterpret_cast<const VkDisplayPlaneCapabilities2KHR *>(this);
}

DisplayPlaneCapabilities2KHR::operator VkDisplayPlaneCapabilities2KHR &() noexcept {
  return *reinterpret_cast<VkDisplayPlaneCapabilities2KHR *>(this);
}

DisplayPlaneCapabilities2KHR::operator const VkDisplayPlaneCapabilities2KHR *() const noexcept {
  return reinterpret_cast<const VkDisplayPlaneCapabilities2KHR *>(this);
}

DisplayPlaneCapabilities2KHR::operator VkDisplayPlaneCapabilities2KHR *() noexcept {
  return reinterpret_cast<VkDisplayPlaneCapabilities2KHR *>(this);
}

SharedPresentSurfaceCapabilitiesKHR::operator const VkSharedPresentSurfaceCapabilitiesKHR &() const noexcept {
  return *reinterpret_cast<const VkSharedPresentSurfaceCapabilitiesKHR *>(this);
}

SharedPresentSurfaceCapabilitiesKHR::operator VkSharedPresentSurfaceCapabilitiesKHR &() noexcept {
  return *reinterpret_cast<VkSharedPresentSurfaceCapabilitiesKHR *>(this);
}

SharedPresentSurfaceCapabilitiesKHR::operator const VkSharedPresentSurfaceCapabilitiesKHR *() const noexcept {
  return reinterpret_cast<const VkSharedPresentSurfaceCapabilitiesKHR *>(this);
}

SharedPresentSurfaceCapabilitiesKHR::operator VkSharedPresentSurfaceCapabilitiesKHR *() noexcept {
  return reinterpret_cast<VkSharedPresentSurfaceCapabilitiesKHR *>(this);
}

PhysicalDevice16BitStorageFeatures::operator const VkPhysicalDevice16BitStorageFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDevice16BitStorageFeatures *>(this);
}

PhysicalDevice16BitStorageFeatures::operator VkPhysicalDevice16BitStorageFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDevice16BitStorageFeatures *>(this);
}

PhysicalDevice16BitStorageFeatures::operator const VkPhysicalDevice16BitStorageFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDevice16BitStorageFeatures *>(this);
}

PhysicalDevice16BitStorageFeatures::operator VkPhysicalDevice16BitStorageFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDevice16BitStorageFeatures *>(this);
}

PhysicalDeviceSubgroupProperties::operator const VkPhysicalDeviceSubgroupProperties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceSubgroupProperties *>(this);
}

PhysicalDeviceSubgroupProperties::operator VkPhysicalDeviceSubgroupProperties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceSubgroupProperties *>(this);
}

PhysicalDeviceSubgroupProperties::operator const VkPhysicalDeviceSubgroupProperties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceSubgroupProperties *>(this);
}

PhysicalDeviceSubgroupProperties::operator VkPhysicalDeviceSubgroupProperties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceSubgroupProperties *>(this);
}

PhysicalDeviceShaderSubgroupExtendedTypesFeatures::operator const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *>(this);
}

PhysicalDeviceShaderSubgroupExtendedTypesFeatures::operator VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *>(this);
}

PhysicalDeviceShaderSubgroupExtendedTypesFeatures::operator const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *>(this);
}

PhysicalDeviceShaderSubgroupExtendedTypesFeatures::operator VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *>(this);
}

BufferMemoryRequirementsInfo2::operator const VkBufferMemoryRequirementsInfo2 &() const noexcept {
  return *reinterpret_cast<const VkBufferMemoryRequirementsInfo2 *>(this);
}

BufferMemoryRequirementsInfo2::operator VkBufferMemoryRequirementsInfo2 &() noexcept {
  return *reinterpret_cast<VkBufferMemoryRequirementsInfo2 *>(this);
}

BufferMemoryRequirementsInfo2::operator const VkBufferMemoryRequirementsInfo2 *() const noexcept {
  return reinterpret_cast<const VkBufferMemoryRequirementsInfo2 *>(this);
}

BufferMemoryRequirementsInfo2::operator VkBufferMemoryRequirementsInfo2 *() noexcept {
  return reinterpret_cast<VkBufferMemoryRequirementsInfo2 *>(this);
}

DeviceBufferMemoryRequirements::operator const VkDeviceBufferMemoryRequirements &() const noexcept {
  return *reinterpret_cast<const VkDeviceBufferMemoryRequirements *>(this);
}

DeviceBufferMemoryRequirements::operator VkDeviceBufferMemoryRequirements &() noexcept {
  return *reinterpret_cast<VkDeviceBufferMemoryRequirements *>(this);
}

DeviceBufferMemoryRequirements::operator const VkDeviceBufferMemoryRequirements *() const noexcept {
  return reinterpret_cast<const VkDeviceBufferMemoryRequirements *>(this);
}

DeviceBufferMemoryRequirements::operator VkDeviceBufferMemoryRequirements *() noexcept {
  return reinterpret_cast<VkDeviceBufferMemoryRequirements *>(this);
}

ImageMemoryRequirementsInfo2::operator const VkImageMemoryRequirementsInfo2 &() const noexcept {
  return *reinterpret_cast<const VkImageMemoryRequirementsInfo2 *>(this);
}

ImageMemoryRequirementsInfo2::operator VkImageMemoryRequirementsInfo2 &() noexcept {
  return *reinterpret_cast<VkImageMemoryRequirementsInfo2 *>(this);
}

ImageMemoryRequirementsInfo2::operator const VkImageMemoryRequirementsInfo2 *() const noexcept {
  return reinterpret_cast<const VkImageMemoryRequirementsInfo2 *>(this);
}

ImageMemoryRequirementsInfo2::operator VkImageMemoryRequirementsInfo2 *() noexcept {
  return reinterpret_cast<VkImageMemoryRequirementsInfo2 *>(this);
}

ImageSparseMemoryRequirementsInfo2::operator const VkImageSparseMemoryRequirementsInfo2 &() const noexcept {
  return *reinterpret_cast<const VkImageSparseMemoryRequirementsInfo2 *>(this);
}

ImageSparseMemoryRequirementsInfo2::operator VkImageSparseMemoryRequirementsInfo2 &() noexcept {
  return *reinterpret_cast<VkImageSparseMemoryRequirementsInfo2 *>(this);
}

ImageSparseMemoryRequirementsInfo2::operator const VkImageSparseMemoryRequirementsInfo2 *() const noexcept {
  return reinterpret_cast<const VkImageSparseMemoryRequirementsInfo2 *>(this);
}

ImageSparseMemoryRequirementsInfo2::operator VkImageSparseMemoryRequirementsInfo2 *() noexcept {
  return reinterpret_cast<VkImageSparseMemoryRequirementsInfo2 *>(this);
}

DeviceImageMemoryRequirements::operator const VkDeviceImageMemoryRequirements &() const noexcept {
  return *reinterpret_cast<const VkDeviceImageMemoryRequirements *>(this);
}

DeviceImageMemoryRequirements::operator VkDeviceImageMemoryRequirements &() noexcept {
  return *reinterpret_cast<VkDeviceImageMemoryRequirements *>(this);
}

DeviceImageMemoryRequirements::operator const VkDeviceImageMemoryRequirements *() const noexcept {
  return reinterpret_cast<const VkDeviceImageMemoryRequirements *>(this);
}

DeviceImageMemoryRequirements::operator VkDeviceImageMemoryRequirements *() noexcept {
  return reinterpret_cast<VkDeviceImageMemoryRequirements *>(this);
}

MemoryRequirements2::operator const VkMemoryRequirements2 &() const noexcept {
  return *reinterpret_cast<const VkMemoryRequirements2 *>(this);
}

MemoryRequirements2::operator VkMemoryRequirements2 &() noexcept {
  return *reinterpret_cast<VkMemoryRequirements2 *>(this);
}

MemoryRequirements2::operator const VkMemoryRequirements2 *() const noexcept {
  return reinterpret_cast<const VkMemoryRequirements2 *>(this);
}

MemoryRequirements2::operator VkMemoryRequirements2 *() noexcept {
  return reinterpret_cast<VkMemoryRequirements2 *>(this);
}

SparseImageMemoryRequirements2::operator const VkSparseImageMemoryRequirements2 &() const noexcept {
  return *reinterpret_cast<const VkSparseImageMemoryRequirements2 *>(this);
}

SparseImageMemoryRequirements2::operator VkSparseImageMemoryRequirements2 &() noexcept {
  return *reinterpret_cast<VkSparseImageMemoryRequirements2 *>(this);
}

SparseImageMemoryRequirements2::operator const VkSparseImageMemoryRequirements2 *() const noexcept {
  return reinterpret_cast<const VkSparseImageMemoryRequirements2 *>(this);
}

SparseImageMemoryRequirements2::operator VkSparseImageMemoryRequirements2 *() noexcept {
  return reinterpret_cast<VkSparseImageMemoryRequirements2 *>(this);
}

PhysicalDevicePointClippingProperties::operator const VkPhysicalDevicePointClippingProperties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDevicePointClippingProperties *>(this);
}

PhysicalDevicePointClippingProperties::operator VkPhysicalDevicePointClippingProperties &() noexcept {
  return *reinterpret_cast<VkPhysicalDevicePointClippingProperties *>(this);
}

PhysicalDevicePointClippingProperties::operator const VkPhysicalDevicePointClippingProperties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDevicePointClippingProperties *>(this);
}

PhysicalDevicePointClippingProperties::operator VkPhysicalDevicePointClippingProperties *() noexcept {
  return reinterpret_cast<VkPhysicalDevicePointClippingProperties *>(this);
}

MemoryDedicatedRequirements::operator const VkMemoryDedicatedRequirements &() const noexcept {
  return *reinterpret_cast<const VkMemoryDedicatedRequirements *>(this);
}

MemoryDedicatedRequirements::operator VkMemoryDedicatedRequirements &() noexcept {
  return *reinterpret_cast<VkMemoryDedicatedRequirements *>(this);
}

MemoryDedicatedRequirements::operator const VkMemoryDedicatedRequirements *() const noexcept {
  return reinterpret_cast<const VkMemoryDedicatedRequirements *>(this);
}

MemoryDedicatedRequirements::operator VkMemoryDedicatedRequirements *() noexcept {
  return reinterpret_cast<VkMemoryDedicatedRequirements *>(this);
}

MemoryDedicatedAllocateInfo::operator const VkMemoryDedicatedAllocateInfo &() const noexcept {
  return *reinterpret_cast<const VkMemoryDedicatedAllocateInfo *>(this);
}

MemoryDedicatedAllocateInfo::operator VkMemoryDedicatedAllocateInfo &() noexcept {
  return *reinterpret_cast<VkMemoryDedicatedAllocateInfo *>(this);
}

MemoryDedicatedAllocateInfo::operator const VkMemoryDedicatedAllocateInfo *() const noexcept {
  return reinterpret_cast<const VkMemoryDedicatedAllocateInfo *>(this);
}

MemoryDedicatedAllocateInfo::operator VkMemoryDedicatedAllocateInfo *() noexcept {
  return reinterpret_cast<VkMemoryDedicatedAllocateInfo *>(this);
}

ImageViewUsageCreateInfo::operator const VkImageViewUsageCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkImageViewUsageCreateInfo *>(this);
}

ImageViewUsageCreateInfo::operator VkImageViewUsageCreateInfo &() noexcept {
  return *reinterpret_cast<VkImageViewUsageCreateInfo *>(this);
}

ImageViewUsageCreateInfo::operator const VkImageViewUsageCreateInfo *() const noexcept {
  return reinterpret_cast<const VkImageViewUsageCreateInfo *>(this);
}

ImageViewUsageCreateInfo::operator VkImageViewUsageCreateInfo *() noexcept {
  return reinterpret_cast<VkImageViewUsageCreateInfo *>(this);
}

ImageViewSlicedCreateInfoEXT::operator const VkImageViewSlicedCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkImageViewSlicedCreateInfoEXT *>(this);
}

ImageViewSlicedCreateInfoEXT::operator VkImageViewSlicedCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkImageViewSlicedCreateInfoEXT *>(this);
}

ImageViewSlicedCreateInfoEXT::operator const VkImageViewSlicedCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkImageViewSlicedCreateInfoEXT *>(this);
}

ImageViewSlicedCreateInfoEXT::operator VkImageViewSlicedCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkImageViewSlicedCreateInfoEXT *>(this);
}

PipelineTessellationDomainOriginStateCreateInfo::operator const VkPipelineTessellationDomainOriginStateCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkPipelineTessellationDomainOriginStateCreateInfo *>(this);
}

PipelineTessellationDomainOriginStateCreateInfo::operator VkPipelineTessellationDomainOriginStateCreateInfo &() noexcept {
  return *reinterpret_cast<VkPipelineTessellationDomainOriginStateCreateInfo *>(this);
}

PipelineTessellationDomainOriginStateCreateInfo::operator const VkPipelineTessellationDomainOriginStateCreateInfo *() const noexcept {
  return reinterpret_cast<const VkPipelineTessellationDomainOriginStateCreateInfo *>(this);
}

PipelineTessellationDomainOriginStateCreateInfo::operator VkPipelineTessellationDomainOriginStateCreateInfo *() noexcept {
  return reinterpret_cast<VkPipelineTessellationDomainOriginStateCreateInfo *>(this);
}

SamplerYcbcrConversionInfo::operator const VkSamplerYcbcrConversionInfo &() const noexcept {
  return *reinterpret_cast<const VkSamplerYcbcrConversionInfo *>(this);
}

SamplerYcbcrConversionInfo::operator VkSamplerYcbcrConversionInfo &() noexcept {
  return *reinterpret_cast<VkSamplerYcbcrConversionInfo *>(this);
}

SamplerYcbcrConversionInfo::operator const VkSamplerYcbcrConversionInfo *() const noexcept {
  return reinterpret_cast<const VkSamplerYcbcrConversionInfo *>(this);
}

SamplerYcbcrConversionInfo::operator VkSamplerYcbcrConversionInfo *() noexcept {
  return reinterpret_cast<VkSamplerYcbcrConversionInfo *>(this);
}

SamplerYcbcrConversionCreateInfo::operator const VkSamplerYcbcrConversionCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkSamplerYcbcrConversionCreateInfo *>(this);
}

SamplerYcbcrConversionCreateInfo::operator VkSamplerYcbcrConversionCreateInfo &() noexcept {
  return *reinterpret_cast<VkSamplerYcbcrConversionCreateInfo *>(this);
}

SamplerYcbcrConversionCreateInfo::operator const VkSamplerYcbcrConversionCreateInfo *() const noexcept {
  return reinterpret_cast<const VkSamplerYcbcrConversionCreateInfo *>(this);
}

SamplerYcbcrConversionCreateInfo::operator VkSamplerYcbcrConversionCreateInfo *() noexcept {
  return reinterpret_cast<VkSamplerYcbcrConversionCreateInfo *>(this);
}

BindImagePlaneMemoryInfo::operator const VkBindImagePlaneMemoryInfo &() const noexcept {
  return *reinterpret_cast<const VkBindImagePlaneMemoryInfo *>(this);
}

BindImagePlaneMemoryInfo::operator VkBindImagePlaneMemoryInfo &() noexcept {
  return *reinterpret_cast<VkBindImagePlaneMemoryInfo *>(this);
}

BindImagePlaneMemoryInfo::operator const VkBindImagePlaneMemoryInfo *() const noexcept {
  return reinterpret_cast<const VkBindImagePlaneMemoryInfo *>(this);
}

BindImagePlaneMemoryInfo::operator VkBindImagePlaneMemoryInfo *() noexcept {
  return reinterpret_cast<VkBindImagePlaneMemoryInfo *>(this);
}

ImagePlaneMemoryRequirementsInfo::operator const VkImagePlaneMemoryRequirementsInfo &() const noexcept {
  return *reinterpret_cast<const VkImagePlaneMemoryRequirementsInfo *>(this);
}

ImagePlaneMemoryRequirementsInfo::operator VkImagePlaneMemoryRequirementsInfo &() noexcept {
  return *reinterpret_cast<VkImagePlaneMemoryRequirementsInfo *>(this);
}

ImagePlaneMemoryRequirementsInfo::operator const VkImagePlaneMemoryRequirementsInfo *() const noexcept {
  return reinterpret_cast<const VkImagePlaneMemoryRequirementsInfo *>(this);
}

ImagePlaneMemoryRequirementsInfo::operator VkImagePlaneMemoryRequirementsInfo *() noexcept {
  return reinterpret_cast<VkImagePlaneMemoryRequirementsInfo *>(this);
}

PhysicalDeviceSamplerYcbcrConversionFeatures::operator const VkPhysicalDeviceSamplerYcbcrConversionFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceSamplerYcbcrConversionFeatures *>(this);
}

PhysicalDeviceSamplerYcbcrConversionFeatures::operator VkPhysicalDeviceSamplerYcbcrConversionFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceSamplerYcbcrConversionFeatures *>(this);
}

PhysicalDeviceSamplerYcbcrConversionFeatures::operator const VkPhysicalDeviceSamplerYcbcrConversionFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceSamplerYcbcrConversionFeatures *>(this);
}

PhysicalDeviceSamplerYcbcrConversionFeatures::operator VkPhysicalDeviceSamplerYcbcrConversionFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceSamplerYcbcrConversionFeatures *>(this);
}

SamplerYcbcrConversionImageFormatProperties::operator const VkSamplerYcbcrConversionImageFormatProperties &() const noexcept {
  return *reinterpret_cast<const VkSamplerYcbcrConversionImageFormatProperties *>(this);
}

SamplerYcbcrConversionImageFormatProperties::operator VkSamplerYcbcrConversionImageFormatProperties &() noexcept {
  return *reinterpret_cast<VkSamplerYcbcrConversionImageFormatProperties *>(this);
}

SamplerYcbcrConversionImageFormatProperties::operator const VkSamplerYcbcrConversionImageFormatProperties *() const noexcept {
  return reinterpret_cast<const VkSamplerYcbcrConversionImageFormatProperties *>(this);
}

SamplerYcbcrConversionImageFormatProperties::operator VkSamplerYcbcrConversionImageFormatProperties *() noexcept {
  return reinterpret_cast<VkSamplerYcbcrConversionImageFormatProperties *>(this);
}

TextureLODGatherFormatPropertiesAMD::operator const VkTextureLODGatherFormatPropertiesAMD &() const noexcept {
  return *reinterpret_cast<const VkTextureLODGatherFormatPropertiesAMD *>(this);
}

TextureLODGatherFormatPropertiesAMD::operator VkTextureLODGatherFormatPropertiesAMD &() noexcept {
  return *reinterpret_cast<VkTextureLODGatherFormatPropertiesAMD *>(this);
}

TextureLODGatherFormatPropertiesAMD::operator const VkTextureLODGatherFormatPropertiesAMD *() const noexcept {
  return reinterpret_cast<const VkTextureLODGatherFormatPropertiesAMD *>(this);
}

TextureLODGatherFormatPropertiesAMD::operator VkTextureLODGatherFormatPropertiesAMD *() noexcept {
  return reinterpret_cast<VkTextureLODGatherFormatPropertiesAMD *>(this);
}

ConditionalRenderingBeginInfoEXT::operator const VkConditionalRenderingBeginInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkConditionalRenderingBeginInfoEXT *>(this);
}

ConditionalRenderingBeginInfoEXT::operator VkConditionalRenderingBeginInfoEXT &() noexcept {
  return *reinterpret_cast<VkConditionalRenderingBeginInfoEXT *>(this);
}

ConditionalRenderingBeginInfoEXT::operator const VkConditionalRenderingBeginInfoEXT *() const noexcept {
  return reinterpret_cast<const VkConditionalRenderingBeginInfoEXT *>(this);
}

ConditionalRenderingBeginInfoEXT::operator VkConditionalRenderingBeginInfoEXT *() noexcept {
  return reinterpret_cast<VkConditionalRenderingBeginInfoEXT *>(this);
}

ProtectedSubmitInfo::operator const VkProtectedSubmitInfo &() const noexcept {
  return *reinterpret_cast<const VkProtectedSubmitInfo *>(this);
}

ProtectedSubmitInfo::operator VkProtectedSubmitInfo &() noexcept {
  return *reinterpret_cast<VkProtectedSubmitInfo *>(this);
}

ProtectedSubmitInfo::operator const VkProtectedSubmitInfo *() const noexcept {
  return reinterpret_cast<const VkProtectedSubmitInfo *>(this);
}

ProtectedSubmitInfo::operator VkProtectedSubmitInfo *() noexcept {
  return reinterpret_cast<VkProtectedSubmitInfo *>(this);
}

PhysicalDeviceProtectedMemoryFeatures::operator const VkPhysicalDeviceProtectedMemoryFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceProtectedMemoryFeatures *>(this);
}

PhysicalDeviceProtectedMemoryFeatures::operator VkPhysicalDeviceProtectedMemoryFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceProtectedMemoryFeatures *>(this);
}

PhysicalDeviceProtectedMemoryFeatures::operator const VkPhysicalDeviceProtectedMemoryFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceProtectedMemoryFeatures *>(this);
}

PhysicalDeviceProtectedMemoryFeatures::operator VkPhysicalDeviceProtectedMemoryFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceProtectedMemoryFeatures *>(this);
}

PhysicalDeviceProtectedMemoryProperties::operator const VkPhysicalDeviceProtectedMemoryProperties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceProtectedMemoryProperties *>(this);
}

PhysicalDeviceProtectedMemoryProperties::operator VkPhysicalDeviceProtectedMemoryProperties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceProtectedMemoryProperties *>(this);
}

PhysicalDeviceProtectedMemoryProperties::operator const VkPhysicalDeviceProtectedMemoryProperties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceProtectedMemoryProperties *>(this);
}

PhysicalDeviceProtectedMemoryProperties::operator VkPhysicalDeviceProtectedMemoryProperties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceProtectedMemoryProperties *>(this);
}

DeviceQueueInfo2::operator const VkDeviceQueueInfo2 &() const noexcept {
  return *reinterpret_cast<const VkDeviceQueueInfo2 *>(this);
}

DeviceQueueInfo2::operator VkDeviceQueueInfo2 &() noexcept {
  return *reinterpret_cast<VkDeviceQueueInfo2 *>(this);
}

DeviceQueueInfo2::operator const VkDeviceQueueInfo2 *() const noexcept {
  return reinterpret_cast<const VkDeviceQueueInfo2 *>(this);
}

DeviceQueueInfo2::operator VkDeviceQueueInfo2 *() noexcept {
  return reinterpret_cast<VkDeviceQueueInfo2 *>(this);
}

PipelineCoverageToColorStateCreateInfoNV::operator const VkPipelineCoverageToColorStateCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkPipelineCoverageToColorStateCreateInfoNV *>(this);
}

PipelineCoverageToColorStateCreateInfoNV::operator VkPipelineCoverageToColorStateCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkPipelineCoverageToColorStateCreateInfoNV *>(this);
}

PipelineCoverageToColorStateCreateInfoNV::operator const VkPipelineCoverageToColorStateCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkPipelineCoverageToColorStateCreateInfoNV *>(this);
}

PipelineCoverageToColorStateCreateInfoNV::operator VkPipelineCoverageToColorStateCreateInfoNV *() noexcept {
  return reinterpret_cast<VkPipelineCoverageToColorStateCreateInfoNV *>(this);
}

PhysicalDeviceSamplerFilterMinmaxProperties::operator const VkPhysicalDeviceSamplerFilterMinmaxProperties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceSamplerFilterMinmaxProperties *>(this);
}

PhysicalDeviceSamplerFilterMinmaxProperties::operator VkPhysicalDeviceSamplerFilterMinmaxProperties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceSamplerFilterMinmaxProperties *>(this);
}

PhysicalDeviceSamplerFilterMinmaxProperties::operator const VkPhysicalDeviceSamplerFilterMinmaxProperties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceSamplerFilterMinmaxProperties *>(this);
}

PhysicalDeviceSamplerFilterMinmaxProperties::operator VkPhysicalDeviceSamplerFilterMinmaxProperties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceSamplerFilterMinmaxProperties *>(this);
}

SampleLocationEXT::operator const VkSampleLocationEXT &() const noexcept {
  return *reinterpret_cast<const VkSampleLocationEXT *>(this);
}

SampleLocationEXT::operator VkSampleLocationEXT &() noexcept {
  return *reinterpret_cast<VkSampleLocationEXT *>(this);
}

SampleLocationEXT::operator const VkSampleLocationEXT *() const noexcept {
  return reinterpret_cast<const VkSampleLocationEXT *>(this);
}

SampleLocationEXT::operator VkSampleLocationEXT *() noexcept {
  return reinterpret_cast<VkSampleLocationEXT *>(this);
}

SampleLocationsInfoEXT::operator const VkSampleLocationsInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkSampleLocationsInfoEXT *>(this);
}

SampleLocationsInfoEXT::operator VkSampleLocationsInfoEXT &() noexcept {
  return *reinterpret_cast<VkSampleLocationsInfoEXT *>(this);
}

SampleLocationsInfoEXT::operator const VkSampleLocationsInfoEXT *() const noexcept {
  return reinterpret_cast<const VkSampleLocationsInfoEXT *>(this);
}

SampleLocationsInfoEXT::operator VkSampleLocationsInfoEXT *() noexcept {
  return reinterpret_cast<VkSampleLocationsInfoEXT *>(this);
}

AttachmentSampleLocationsEXT::operator const VkAttachmentSampleLocationsEXT &() const noexcept {
  return *reinterpret_cast<const VkAttachmentSampleLocationsEXT *>(this);
}

AttachmentSampleLocationsEXT::operator VkAttachmentSampleLocationsEXT &() noexcept {
  return *reinterpret_cast<VkAttachmentSampleLocationsEXT *>(this);
}

AttachmentSampleLocationsEXT::operator const VkAttachmentSampleLocationsEXT *() const noexcept {
  return reinterpret_cast<const VkAttachmentSampleLocationsEXT *>(this);
}

AttachmentSampleLocationsEXT::operator VkAttachmentSampleLocationsEXT *() noexcept {
  return reinterpret_cast<VkAttachmentSampleLocationsEXT *>(this);
}

SubpassSampleLocationsEXT::operator const VkSubpassSampleLocationsEXT &() const noexcept {
  return *reinterpret_cast<const VkSubpassSampleLocationsEXT *>(this);
}

SubpassSampleLocationsEXT::operator VkSubpassSampleLocationsEXT &() noexcept {
  return *reinterpret_cast<VkSubpassSampleLocationsEXT *>(this);
}

SubpassSampleLocationsEXT::operator const VkSubpassSampleLocationsEXT *() const noexcept {
  return reinterpret_cast<const VkSubpassSampleLocationsEXT *>(this);
}

SubpassSampleLocationsEXT::operator VkSubpassSampleLocationsEXT *() noexcept {
  return reinterpret_cast<VkSubpassSampleLocationsEXT *>(this);
}

RenderPassSampleLocationsBeginInfoEXT::operator const VkRenderPassSampleLocationsBeginInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkRenderPassSampleLocationsBeginInfoEXT *>(this);
}

RenderPassSampleLocationsBeginInfoEXT::operator VkRenderPassSampleLocationsBeginInfoEXT &() noexcept {
  return *reinterpret_cast<VkRenderPassSampleLocationsBeginInfoEXT *>(this);
}

RenderPassSampleLocationsBeginInfoEXT::operator const VkRenderPassSampleLocationsBeginInfoEXT *() const noexcept {
  return reinterpret_cast<const VkRenderPassSampleLocationsBeginInfoEXT *>(this);
}

RenderPassSampleLocationsBeginInfoEXT::operator VkRenderPassSampleLocationsBeginInfoEXT *() noexcept {
  return reinterpret_cast<VkRenderPassSampleLocationsBeginInfoEXT *>(this);
}

PipelineSampleLocationsStateCreateInfoEXT::operator const VkPipelineSampleLocationsStateCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkPipelineSampleLocationsStateCreateInfoEXT *>(this);
}

PipelineSampleLocationsStateCreateInfoEXT::operator VkPipelineSampleLocationsStateCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkPipelineSampleLocationsStateCreateInfoEXT *>(this);
}

PipelineSampleLocationsStateCreateInfoEXT::operator const VkPipelineSampleLocationsStateCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkPipelineSampleLocationsStateCreateInfoEXT *>(this);
}

PipelineSampleLocationsStateCreateInfoEXT::operator VkPipelineSampleLocationsStateCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkPipelineSampleLocationsStateCreateInfoEXT *>(this);
}

PhysicalDeviceSampleLocationsPropertiesEXT::operator const VkPhysicalDeviceSampleLocationsPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceSampleLocationsPropertiesEXT *>(this);
}

PhysicalDeviceSampleLocationsPropertiesEXT::operator VkPhysicalDeviceSampleLocationsPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceSampleLocationsPropertiesEXT *>(this);
}

PhysicalDeviceSampleLocationsPropertiesEXT::operator const VkPhysicalDeviceSampleLocationsPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceSampleLocationsPropertiesEXT *>(this);
}

PhysicalDeviceSampleLocationsPropertiesEXT::operator VkPhysicalDeviceSampleLocationsPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceSampleLocationsPropertiesEXT *>(this);
}

MultisamplePropertiesEXT::operator const VkMultisamplePropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkMultisamplePropertiesEXT *>(this);
}

MultisamplePropertiesEXT::operator VkMultisamplePropertiesEXT &() noexcept {
  return *reinterpret_cast<VkMultisamplePropertiesEXT *>(this);
}

MultisamplePropertiesEXT::operator const VkMultisamplePropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkMultisamplePropertiesEXT *>(this);
}

MultisamplePropertiesEXT::operator VkMultisamplePropertiesEXT *() noexcept {
  return reinterpret_cast<VkMultisamplePropertiesEXT *>(this);
}

SamplerReductionModeCreateInfo::operator const VkSamplerReductionModeCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkSamplerReductionModeCreateInfo *>(this);
}

SamplerReductionModeCreateInfo::operator VkSamplerReductionModeCreateInfo &() noexcept {
  return *reinterpret_cast<VkSamplerReductionModeCreateInfo *>(this);
}

SamplerReductionModeCreateInfo::operator const VkSamplerReductionModeCreateInfo *() const noexcept {
  return reinterpret_cast<const VkSamplerReductionModeCreateInfo *>(this);
}

SamplerReductionModeCreateInfo::operator VkSamplerReductionModeCreateInfo *() noexcept {
  return reinterpret_cast<VkSamplerReductionModeCreateInfo *>(this);
}

PhysicalDeviceBlendOperationAdvancedFeaturesEXT::operator const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *>(this);
}

PhysicalDeviceBlendOperationAdvancedFeaturesEXT::operator VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *>(this);
}

PhysicalDeviceBlendOperationAdvancedFeaturesEXT::operator const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *>(this);
}

PhysicalDeviceBlendOperationAdvancedFeaturesEXT::operator VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *>(this);
}

PhysicalDeviceMultiDrawFeaturesEXT::operator const VkPhysicalDeviceMultiDrawFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMultiDrawFeaturesEXT *>(this);
}

PhysicalDeviceMultiDrawFeaturesEXT::operator VkPhysicalDeviceMultiDrawFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMultiDrawFeaturesEXT *>(this);
}

PhysicalDeviceMultiDrawFeaturesEXT::operator const VkPhysicalDeviceMultiDrawFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMultiDrawFeaturesEXT *>(this);
}

PhysicalDeviceMultiDrawFeaturesEXT::operator VkPhysicalDeviceMultiDrawFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMultiDrawFeaturesEXT *>(this);
}

PhysicalDeviceBlendOperationAdvancedPropertiesEXT::operator const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT *>(this);
}

PhysicalDeviceBlendOperationAdvancedPropertiesEXT::operator VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT *>(this);
}

PhysicalDeviceBlendOperationAdvancedPropertiesEXT::operator const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT *>(this);
}

PhysicalDeviceBlendOperationAdvancedPropertiesEXT::operator VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT *>(this);
}

PipelineColorBlendAdvancedStateCreateInfoEXT::operator const VkPipelineColorBlendAdvancedStateCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkPipelineColorBlendAdvancedStateCreateInfoEXT *>(this);
}

PipelineColorBlendAdvancedStateCreateInfoEXT::operator VkPipelineColorBlendAdvancedStateCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkPipelineColorBlendAdvancedStateCreateInfoEXT *>(this);
}

PipelineColorBlendAdvancedStateCreateInfoEXT::operator const VkPipelineColorBlendAdvancedStateCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkPipelineColorBlendAdvancedStateCreateInfoEXT *>(this);
}

PipelineColorBlendAdvancedStateCreateInfoEXT::operator VkPipelineColorBlendAdvancedStateCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkPipelineColorBlendAdvancedStateCreateInfoEXT *>(this);
}

PhysicalDeviceInlineUniformBlockFeatures::operator const VkPhysicalDeviceInlineUniformBlockFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceInlineUniformBlockFeatures *>(this);
}

PhysicalDeviceInlineUniformBlockFeatures::operator VkPhysicalDeviceInlineUniformBlockFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceInlineUniformBlockFeatures *>(this);
}

PhysicalDeviceInlineUniformBlockFeatures::operator const VkPhysicalDeviceInlineUniformBlockFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceInlineUniformBlockFeatures *>(this);
}

PhysicalDeviceInlineUniformBlockFeatures::operator VkPhysicalDeviceInlineUniformBlockFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceInlineUniformBlockFeatures *>(this);
}

PhysicalDeviceInlineUniformBlockProperties::operator const VkPhysicalDeviceInlineUniformBlockProperties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceInlineUniformBlockProperties *>(this);
}

PhysicalDeviceInlineUniformBlockProperties::operator VkPhysicalDeviceInlineUniformBlockProperties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceInlineUniformBlockProperties *>(this);
}

PhysicalDeviceInlineUniformBlockProperties::operator const VkPhysicalDeviceInlineUniformBlockProperties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceInlineUniformBlockProperties *>(this);
}

PhysicalDeviceInlineUniformBlockProperties::operator VkPhysicalDeviceInlineUniformBlockProperties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceInlineUniformBlockProperties *>(this);
}

WriteDescriptorSetInlineUniformBlock::operator const VkWriteDescriptorSetInlineUniformBlock &() const noexcept {
  return *reinterpret_cast<const VkWriteDescriptorSetInlineUniformBlock *>(this);
}

WriteDescriptorSetInlineUniformBlock::operator VkWriteDescriptorSetInlineUniformBlock &() noexcept {
  return *reinterpret_cast<VkWriteDescriptorSetInlineUniformBlock *>(this);
}

WriteDescriptorSetInlineUniformBlock::operator const VkWriteDescriptorSetInlineUniformBlock *() const noexcept {
  return reinterpret_cast<const VkWriteDescriptorSetInlineUniformBlock *>(this);
}

WriteDescriptorSetInlineUniformBlock::operator VkWriteDescriptorSetInlineUniformBlock *() noexcept {
  return reinterpret_cast<VkWriteDescriptorSetInlineUniformBlock *>(this);
}

DescriptorPoolInlineUniformBlockCreateInfo::operator const VkDescriptorPoolInlineUniformBlockCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkDescriptorPoolInlineUniformBlockCreateInfo *>(this);
}

DescriptorPoolInlineUniformBlockCreateInfo::operator VkDescriptorPoolInlineUniformBlockCreateInfo &() noexcept {
  return *reinterpret_cast<VkDescriptorPoolInlineUniformBlockCreateInfo *>(this);
}

DescriptorPoolInlineUniformBlockCreateInfo::operator const VkDescriptorPoolInlineUniformBlockCreateInfo *() const noexcept {
  return reinterpret_cast<const VkDescriptorPoolInlineUniformBlockCreateInfo *>(this);
}

DescriptorPoolInlineUniformBlockCreateInfo::operator VkDescriptorPoolInlineUniformBlockCreateInfo *() noexcept {
  return reinterpret_cast<VkDescriptorPoolInlineUniformBlockCreateInfo *>(this);
}

PipelineCoverageModulationStateCreateInfoNV::operator const VkPipelineCoverageModulationStateCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkPipelineCoverageModulationStateCreateInfoNV *>(this);
}

PipelineCoverageModulationStateCreateInfoNV::operator VkPipelineCoverageModulationStateCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkPipelineCoverageModulationStateCreateInfoNV *>(this);
}

PipelineCoverageModulationStateCreateInfoNV::operator const VkPipelineCoverageModulationStateCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkPipelineCoverageModulationStateCreateInfoNV *>(this);
}

PipelineCoverageModulationStateCreateInfoNV::operator VkPipelineCoverageModulationStateCreateInfoNV *() noexcept {
  return reinterpret_cast<VkPipelineCoverageModulationStateCreateInfoNV *>(this);
}

ImageFormatListCreateInfo::operator const VkImageFormatListCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkImageFormatListCreateInfo *>(this);
}

ImageFormatListCreateInfo::operator VkImageFormatListCreateInfo &() noexcept {
  return *reinterpret_cast<VkImageFormatListCreateInfo *>(this);
}

ImageFormatListCreateInfo::operator const VkImageFormatListCreateInfo *() const noexcept {
  return reinterpret_cast<const VkImageFormatListCreateInfo *>(this);
}

ImageFormatListCreateInfo::operator VkImageFormatListCreateInfo *() noexcept {
  return reinterpret_cast<VkImageFormatListCreateInfo *>(this);
}

ValidationCacheCreateInfoEXT::operator const VkValidationCacheCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkValidationCacheCreateInfoEXT *>(this);
}

ValidationCacheCreateInfoEXT::operator VkValidationCacheCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkValidationCacheCreateInfoEXT *>(this);
}

ValidationCacheCreateInfoEXT::operator const VkValidationCacheCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkValidationCacheCreateInfoEXT *>(this);
}

ValidationCacheCreateInfoEXT::operator VkValidationCacheCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkValidationCacheCreateInfoEXT *>(this);
}

ShaderModuleValidationCacheCreateInfoEXT::operator const VkShaderModuleValidationCacheCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkShaderModuleValidationCacheCreateInfoEXT *>(this);
}

ShaderModuleValidationCacheCreateInfoEXT::operator VkShaderModuleValidationCacheCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkShaderModuleValidationCacheCreateInfoEXT *>(this);
}

ShaderModuleValidationCacheCreateInfoEXT::operator const VkShaderModuleValidationCacheCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkShaderModuleValidationCacheCreateInfoEXT *>(this);
}

ShaderModuleValidationCacheCreateInfoEXT::operator VkShaderModuleValidationCacheCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkShaderModuleValidationCacheCreateInfoEXT *>(this);
}

PhysicalDeviceMaintenance3Properties::operator const VkPhysicalDeviceMaintenance3Properties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMaintenance3Properties *>(this);
}

PhysicalDeviceMaintenance3Properties::operator VkPhysicalDeviceMaintenance3Properties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMaintenance3Properties *>(this);
}

PhysicalDeviceMaintenance3Properties::operator const VkPhysicalDeviceMaintenance3Properties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMaintenance3Properties *>(this);
}

PhysicalDeviceMaintenance3Properties::operator VkPhysicalDeviceMaintenance3Properties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMaintenance3Properties *>(this);
}

PhysicalDeviceMaintenance4Features::operator const VkPhysicalDeviceMaintenance4Features &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMaintenance4Features *>(this);
}

PhysicalDeviceMaintenance4Features::operator VkPhysicalDeviceMaintenance4Features &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMaintenance4Features *>(this);
}

PhysicalDeviceMaintenance4Features::operator const VkPhysicalDeviceMaintenance4Features *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMaintenance4Features *>(this);
}

PhysicalDeviceMaintenance4Features::operator VkPhysicalDeviceMaintenance4Features *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMaintenance4Features *>(this);
}

PhysicalDeviceMaintenance4Properties::operator const VkPhysicalDeviceMaintenance4Properties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMaintenance4Properties *>(this);
}

PhysicalDeviceMaintenance4Properties::operator VkPhysicalDeviceMaintenance4Properties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMaintenance4Properties *>(this);
}

PhysicalDeviceMaintenance4Properties::operator const VkPhysicalDeviceMaintenance4Properties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMaintenance4Properties *>(this);
}

PhysicalDeviceMaintenance4Properties::operator VkPhysicalDeviceMaintenance4Properties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMaintenance4Properties *>(this);
}

PhysicalDeviceMaintenance5FeaturesKHR::operator const VkPhysicalDeviceMaintenance5FeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMaintenance5FeaturesKHR *>(this);
}

PhysicalDeviceMaintenance5FeaturesKHR::operator VkPhysicalDeviceMaintenance5FeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMaintenance5FeaturesKHR *>(this);
}

PhysicalDeviceMaintenance5FeaturesKHR::operator const VkPhysicalDeviceMaintenance5FeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMaintenance5FeaturesKHR *>(this);
}

PhysicalDeviceMaintenance5FeaturesKHR::operator VkPhysicalDeviceMaintenance5FeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMaintenance5FeaturesKHR *>(this);
}

PhysicalDeviceMaintenance5PropertiesKHR::operator const VkPhysicalDeviceMaintenance5PropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMaintenance5PropertiesKHR *>(this);
}

PhysicalDeviceMaintenance5PropertiesKHR::operator VkPhysicalDeviceMaintenance5PropertiesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMaintenance5PropertiesKHR *>(this);
}

PhysicalDeviceMaintenance5PropertiesKHR::operator const VkPhysicalDeviceMaintenance5PropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMaintenance5PropertiesKHR *>(this);
}

PhysicalDeviceMaintenance5PropertiesKHR::operator VkPhysicalDeviceMaintenance5PropertiesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMaintenance5PropertiesKHR *>(this);
}

PhysicalDeviceMaintenance6FeaturesKHR::operator const VkPhysicalDeviceMaintenance6FeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMaintenance6FeaturesKHR *>(this);
}

PhysicalDeviceMaintenance6FeaturesKHR::operator VkPhysicalDeviceMaintenance6FeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMaintenance6FeaturesKHR *>(this);
}

PhysicalDeviceMaintenance6FeaturesKHR::operator const VkPhysicalDeviceMaintenance6FeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMaintenance6FeaturesKHR *>(this);
}

PhysicalDeviceMaintenance6FeaturesKHR::operator VkPhysicalDeviceMaintenance6FeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMaintenance6FeaturesKHR *>(this);
}

PhysicalDeviceMaintenance6PropertiesKHR::operator const VkPhysicalDeviceMaintenance6PropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMaintenance6PropertiesKHR *>(this);
}

PhysicalDeviceMaintenance6PropertiesKHR::operator VkPhysicalDeviceMaintenance6PropertiesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMaintenance6PropertiesKHR *>(this);
}

PhysicalDeviceMaintenance6PropertiesKHR::operator const VkPhysicalDeviceMaintenance6PropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMaintenance6PropertiesKHR *>(this);
}

PhysicalDeviceMaintenance6PropertiesKHR::operator VkPhysicalDeviceMaintenance6PropertiesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMaintenance6PropertiesKHR *>(this);
}

PhysicalDeviceMaintenance7FeaturesKHR::operator const VkPhysicalDeviceMaintenance7FeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMaintenance7FeaturesKHR *>(this);
}

PhysicalDeviceMaintenance7FeaturesKHR::operator VkPhysicalDeviceMaintenance7FeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMaintenance7FeaturesKHR *>(this);
}

PhysicalDeviceMaintenance7FeaturesKHR::operator const VkPhysicalDeviceMaintenance7FeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMaintenance7FeaturesKHR *>(this);
}

PhysicalDeviceMaintenance7FeaturesKHR::operator VkPhysicalDeviceMaintenance7FeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMaintenance7FeaturesKHR *>(this);
}

PhysicalDeviceMaintenance7PropertiesKHR::operator const VkPhysicalDeviceMaintenance7PropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMaintenance7PropertiesKHR *>(this);
}

PhysicalDeviceMaintenance7PropertiesKHR::operator VkPhysicalDeviceMaintenance7PropertiesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMaintenance7PropertiesKHR *>(this);
}

PhysicalDeviceMaintenance7PropertiesKHR::operator const VkPhysicalDeviceMaintenance7PropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMaintenance7PropertiesKHR *>(this);
}

PhysicalDeviceMaintenance7PropertiesKHR::operator VkPhysicalDeviceMaintenance7PropertiesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMaintenance7PropertiesKHR *>(this);
}

PhysicalDeviceLayeredApiPropertiesKHR::operator const VkPhysicalDeviceLayeredApiPropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceLayeredApiPropertiesKHR *>(this);
}

PhysicalDeviceLayeredApiPropertiesKHR::operator VkPhysicalDeviceLayeredApiPropertiesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceLayeredApiPropertiesKHR *>(this);
}

PhysicalDeviceLayeredApiPropertiesKHR::operator const VkPhysicalDeviceLayeredApiPropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceLayeredApiPropertiesKHR *>(this);
}

PhysicalDeviceLayeredApiPropertiesKHR::operator VkPhysicalDeviceLayeredApiPropertiesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceLayeredApiPropertiesKHR *>(this);
}

PhysicalDeviceLayeredApiPropertiesListKHR::operator const VkPhysicalDeviceLayeredApiPropertiesListKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceLayeredApiPropertiesListKHR *>(this);
}

PhysicalDeviceLayeredApiPropertiesListKHR::operator VkPhysicalDeviceLayeredApiPropertiesListKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceLayeredApiPropertiesListKHR *>(this);
}

PhysicalDeviceLayeredApiPropertiesListKHR::operator const VkPhysicalDeviceLayeredApiPropertiesListKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceLayeredApiPropertiesListKHR *>(this);
}

PhysicalDeviceLayeredApiPropertiesListKHR::operator VkPhysicalDeviceLayeredApiPropertiesListKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceLayeredApiPropertiesListKHR *>(this);
}

PhysicalDeviceLayeredApiVulkanPropertiesKHR::operator const VkPhysicalDeviceLayeredApiVulkanPropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceLayeredApiVulkanPropertiesKHR *>(this);
}

PhysicalDeviceLayeredApiVulkanPropertiesKHR::operator VkPhysicalDeviceLayeredApiVulkanPropertiesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceLayeredApiVulkanPropertiesKHR *>(this);
}

PhysicalDeviceLayeredApiVulkanPropertiesKHR::operator const VkPhysicalDeviceLayeredApiVulkanPropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceLayeredApiVulkanPropertiesKHR *>(this);
}

PhysicalDeviceLayeredApiVulkanPropertiesKHR::operator VkPhysicalDeviceLayeredApiVulkanPropertiesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceLayeredApiVulkanPropertiesKHR *>(this);
}

RenderingAreaInfoKHR::operator const VkRenderingAreaInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkRenderingAreaInfoKHR *>(this);
}

RenderingAreaInfoKHR::operator VkRenderingAreaInfoKHR &() noexcept {
  return *reinterpret_cast<VkRenderingAreaInfoKHR *>(this);
}

RenderingAreaInfoKHR::operator const VkRenderingAreaInfoKHR *() const noexcept {
  return reinterpret_cast<const VkRenderingAreaInfoKHR *>(this);
}

RenderingAreaInfoKHR::operator VkRenderingAreaInfoKHR *() noexcept {
  return reinterpret_cast<VkRenderingAreaInfoKHR *>(this);
}

DescriptorSetLayoutSupport::operator const VkDescriptorSetLayoutSupport &() const noexcept {
  return *reinterpret_cast<const VkDescriptorSetLayoutSupport *>(this);
}

DescriptorSetLayoutSupport::operator VkDescriptorSetLayoutSupport &() noexcept {
  return *reinterpret_cast<VkDescriptorSetLayoutSupport *>(this);
}

DescriptorSetLayoutSupport::operator const VkDescriptorSetLayoutSupport *() const noexcept {
  return reinterpret_cast<const VkDescriptorSetLayoutSupport *>(this);
}

DescriptorSetLayoutSupport::operator VkDescriptorSetLayoutSupport *() noexcept {
  return reinterpret_cast<VkDescriptorSetLayoutSupport *>(this);
}

PhysicalDeviceShaderDrawParametersFeatures::operator const VkPhysicalDeviceShaderDrawParametersFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderDrawParametersFeatures *>(this);
}

PhysicalDeviceShaderDrawParametersFeatures::operator VkPhysicalDeviceShaderDrawParametersFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderDrawParametersFeatures *>(this);
}

PhysicalDeviceShaderDrawParametersFeatures::operator const VkPhysicalDeviceShaderDrawParametersFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderDrawParametersFeatures *>(this);
}

PhysicalDeviceShaderDrawParametersFeatures::operator VkPhysicalDeviceShaderDrawParametersFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderDrawParametersFeatures *>(this);
}

PhysicalDeviceShaderFloat16Int8Features::operator const VkPhysicalDeviceShaderFloat16Int8Features &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderFloat16Int8Features *>(this);
}

PhysicalDeviceShaderFloat16Int8Features::operator VkPhysicalDeviceShaderFloat16Int8Features &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderFloat16Int8Features *>(this);
}

PhysicalDeviceShaderFloat16Int8Features::operator const VkPhysicalDeviceShaderFloat16Int8Features *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderFloat16Int8Features *>(this);
}

PhysicalDeviceShaderFloat16Int8Features::operator VkPhysicalDeviceShaderFloat16Int8Features *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderFloat16Int8Features *>(this);
}

PhysicalDeviceFloatControlsProperties::operator const VkPhysicalDeviceFloatControlsProperties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceFloatControlsProperties *>(this);
}

PhysicalDeviceFloatControlsProperties::operator VkPhysicalDeviceFloatControlsProperties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceFloatControlsProperties *>(this);
}

PhysicalDeviceFloatControlsProperties::operator const VkPhysicalDeviceFloatControlsProperties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceFloatControlsProperties *>(this);
}

PhysicalDeviceFloatControlsProperties::operator VkPhysicalDeviceFloatControlsProperties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceFloatControlsProperties *>(this);
}

PhysicalDeviceHostQueryResetFeatures::operator const VkPhysicalDeviceHostQueryResetFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceHostQueryResetFeatures *>(this);
}

PhysicalDeviceHostQueryResetFeatures::operator VkPhysicalDeviceHostQueryResetFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceHostQueryResetFeatures *>(this);
}

PhysicalDeviceHostQueryResetFeatures::operator const VkPhysicalDeviceHostQueryResetFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceHostQueryResetFeatures *>(this);
}

PhysicalDeviceHostQueryResetFeatures::operator VkPhysicalDeviceHostQueryResetFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceHostQueryResetFeatures *>(this);
}

ShaderResourceUsageAMD::operator const VkShaderResourceUsageAMD &() const noexcept {
  return *reinterpret_cast<const VkShaderResourceUsageAMD *>(this);
}

ShaderResourceUsageAMD::operator VkShaderResourceUsageAMD &() noexcept {
  return *reinterpret_cast<VkShaderResourceUsageAMD *>(this);
}

ShaderResourceUsageAMD::operator const VkShaderResourceUsageAMD *() const noexcept {
  return reinterpret_cast<const VkShaderResourceUsageAMD *>(this);
}

ShaderResourceUsageAMD::operator VkShaderResourceUsageAMD *() noexcept {
  return reinterpret_cast<VkShaderResourceUsageAMD *>(this);
}

ShaderStatisticsInfoAMD::operator const VkShaderStatisticsInfoAMD &() const noexcept {
  return *reinterpret_cast<const VkShaderStatisticsInfoAMD *>(this);
}

ShaderStatisticsInfoAMD::operator VkShaderStatisticsInfoAMD &() noexcept {
  return *reinterpret_cast<VkShaderStatisticsInfoAMD *>(this);
}

ShaderStatisticsInfoAMD::operator const VkShaderStatisticsInfoAMD *() const noexcept {
  return reinterpret_cast<const VkShaderStatisticsInfoAMD *>(this);
}

ShaderStatisticsInfoAMD::operator VkShaderStatisticsInfoAMD *() noexcept {
  return reinterpret_cast<VkShaderStatisticsInfoAMD *>(this);
}

DeviceQueueGlobalPriorityCreateInfoKHR::operator const VkDeviceQueueGlobalPriorityCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkDeviceQueueGlobalPriorityCreateInfoKHR *>(this);
}

DeviceQueueGlobalPriorityCreateInfoKHR::operator VkDeviceQueueGlobalPriorityCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkDeviceQueueGlobalPriorityCreateInfoKHR *>(this);
}

DeviceQueueGlobalPriorityCreateInfoKHR::operator const VkDeviceQueueGlobalPriorityCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkDeviceQueueGlobalPriorityCreateInfoKHR *>(this);
}

DeviceQueueGlobalPriorityCreateInfoKHR::operator VkDeviceQueueGlobalPriorityCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkDeviceQueueGlobalPriorityCreateInfoKHR *>(this);
}

PhysicalDeviceGlobalPriorityQueryFeaturesKHR::operator const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR *>(this);
}

PhysicalDeviceGlobalPriorityQueryFeaturesKHR::operator VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR *>(this);
}

PhysicalDeviceGlobalPriorityQueryFeaturesKHR::operator const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR *>(this);
}

PhysicalDeviceGlobalPriorityQueryFeaturesKHR::operator VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR *>(this);
}

QueueFamilyGlobalPriorityPropertiesKHR::operator const VkQueueFamilyGlobalPriorityPropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkQueueFamilyGlobalPriorityPropertiesKHR *>(this);
}

QueueFamilyGlobalPriorityPropertiesKHR::operator VkQueueFamilyGlobalPriorityPropertiesKHR &() noexcept {
  return *reinterpret_cast<VkQueueFamilyGlobalPriorityPropertiesKHR *>(this);
}

QueueFamilyGlobalPriorityPropertiesKHR::operator const VkQueueFamilyGlobalPriorityPropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkQueueFamilyGlobalPriorityPropertiesKHR *>(this);
}

QueueFamilyGlobalPriorityPropertiesKHR::operator VkQueueFamilyGlobalPriorityPropertiesKHR *() noexcept {
  return reinterpret_cast<VkQueueFamilyGlobalPriorityPropertiesKHR *>(this);
}

DebugUtilsObjectNameInfoEXT::operator const VkDebugUtilsObjectNameInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkDebugUtilsObjectNameInfoEXT *>(this);
}

DebugUtilsObjectNameInfoEXT::operator VkDebugUtilsObjectNameInfoEXT &() noexcept {
  return *reinterpret_cast<VkDebugUtilsObjectNameInfoEXT *>(this);
}

DebugUtilsObjectNameInfoEXT::operator const VkDebugUtilsObjectNameInfoEXT *() const noexcept {
  return reinterpret_cast<const VkDebugUtilsObjectNameInfoEXT *>(this);
}

DebugUtilsObjectNameInfoEXT::operator VkDebugUtilsObjectNameInfoEXT *() noexcept {
  return reinterpret_cast<VkDebugUtilsObjectNameInfoEXT *>(this);
}

DebugUtilsObjectTagInfoEXT::operator const VkDebugUtilsObjectTagInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkDebugUtilsObjectTagInfoEXT *>(this);
}

DebugUtilsObjectTagInfoEXT::operator VkDebugUtilsObjectTagInfoEXT &() noexcept {
  return *reinterpret_cast<VkDebugUtilsObjectTagInfoEXT *>(this);
}

DebugUtilsObjectTagInfoEXT::operator const VkDebugUtilsObjectTagInfoEXT *() const noexcept {
  return reinterpret_cast<const VkDebugUtilsObjectTagInfoEXT *>(this);
}

DebugUtilsObjectTagInfoEXT::operator VkDebugUtilsObjectTagInfoEXT *() noexcept {
  return reinterpret_cast<VkDebugUtilsObjectTagInfoEXT *>(this);
}

DebugUtilsLabelEXT::operator const VkDebugUtilsLabelEXT &() const noexcept {
  return *reinterpret_cast<const VkDebugUtilsLabelEXT *>(this);
}

DebugUtilsLabelEXT::operator VkDebugUtilsLabelEXT &() noexcept {
  return *reinterpret_cast<VkDebugUtilsLabelEXT *>(this);
}

DebugUtilsLabelEXT::operator const VkDebugUtilsLabelEXT *() const noexcept {
  return reinterpret_cast<const VkDebugUtilsLabelEXT *>(this);
}

DebugUtilsLabelEXT::operator VkDebugUtilsLabelEXT *() noexcept {
  return reinterpret_cast<VkDebugUtilsLabelEXT *>(this);
}

DebugUtilsMessengerCreateInfoEXT::operator const VkDebugUtilsMessengerCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkDebugUtilsMessengerCreateInfoEXT *>(this);
}

DebugUtilsMessengerCreateInfoEXT::operator VkDebugUtilsMessengerCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkDebugUtilsMessengerCreateInfoEXT *>(this);
}

DebugUtilsMessengerCreateInfoEXT::operator const VkDebugUtilsMessengerCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkDebugUtilsMessengerCreateInfoEXT *>(this);
}

DebugUtilsMessengerCreateInfoEXT::operator VkDebugUtilsMessengerCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkDebugUtilsMessengerCreateInfoEXT *>(this);
}

DebugUtilsMessengerCallbackDataEXT::operator const VkDebugUtilsMessengerCallbackDataEXT &() const noexcept {
  return *reinterpret_cast<const VkDebugUtilsMessengerCallbackDataEXT *>(this);
}

DebugUtilsMessengerCallbackDataEXT::operator VkDebugUtilsMessengerCallbackDataEXT &() noexcept {
  return *reinterpret_cast<VkDebugUtilsMessengerCallbackDataEXT *>(this);
}

DebugUtilsMessengerCallbackDataEXT::operator const VkDebugUtilsMessengerCallbackDataEXT *() const noexcept {
  return reinterpret_cast<const VkDebugUtilsMessengerCallbackDataEXT *>(this);
}

DebugUtilsMessengerCallbackDataEXT::operator VkDebugUtilsMessengerCallbackDataEXT *() noexcept {
  return reinterpret_cast<VkDebugUtilsMessengerCallbackDataEXT *>(this);
}

PhysicalDeviceDeviceMemoryReportFeaturesEXT::operator const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT *>(this);
}

PhysicalDeviceDeviceMemoryReportFeaturesEXT::operator VkPhysicalDeviceDeviceMemoryReportFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDeviceMemoryReportFeaturesEXT *>(this);
}

PhysicalDeviceDeviceMemoryReportFeaturesEXT::operator const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT *>(this);
}

PhysicalDeviceDeviceMemoryReportFeaturesEXT::operator VkPhysicalDeviceDeviceMemoryReportFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDeviceMemoryReportFeaturesEXT *>(this);
}

DeviceDeviceMemoryReportCreateInfoEXT::operator const VkDeviceDeviceMemoryReportCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkDeviceDeviceMemoryReportCreateInfoEXT *>(this);
}

DeviceDeviceMemoryReportCreateInfoEXT::operator VkDeviceDeviceMemoryReportCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkDeviceDeviceMemoryReportCreateInfoEXT *>(this);
}

DeviceDeviceMemoryReportCreateInfoEXT::operator const VkDeviceDeviceMemoryReportCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkDeviceDeviceMemoryReportCreateInfoEXT *>(this);
}

DeviceDeviceMemoryReportCreateInfoEXT::operator VkDeviceDeviceMemoryReportCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkDeviceDeviceMemoryReportCreateInfoEXT *>(this);
}

DeviceMemoryReportCallbackDataEXT::operator const VkDeviceMemoryReportCallbackDataEXT &() const noexcept {
  return *reinterpret_cast<const VkDeviceMemoryReportCallbackDataEXT *>(this);
}

DeviceMemoryReportCallbackDataEXT::operator VkDeviceMemoryReportCallbackDataEXT &() noexcept {
  return *reinterpret_cast<VkDeviceMemoryReportCallbackDataEXT *>(this);
}

DeviceMemoryReportCallbackDataEXT::operator const VkDeviceMemoryReportCallbackDataEXT *() const noexcept {
  return reinterpret_cast<const VkDeviceMemoryReportCallbackDataEXT *>(this);
}

DeviceMemoryReportCallbackDataEXT::operator VkDeviceMemoryReportCallbackDataEXT *() noexcept {
  return reinterpret_cast<VkDeviceMemoryReportCallbackDataEXT *>(this);
}

ImportMemoryHostPointerInfoEXT::operator const VkImportMemoryHostPointerInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkImportMemoryHostPointerInfoEXT *>(this);
}

ImportMemoryHostPointerInfoEXT::operator VkImportMemoryHostPointerInfoEXT &() noexcept {
  return *reinterpret_cast<VkImportMemoryHostPointerInfoEXT *>(this);
}

ImportMemoryHostPointerInfoEXT::operator const VkImportMemoryHostPointerInfoEXT *() const noexcept {
  return reinterpret_cast<const VkImportMemoryHostPointerInfoEXT *>(this);
}

ImportMemoryHostPointerInfoEXT::operator VkImportMemoryHostPointerInfoEXT *() noexcept {
  return reinterpret_cast<VkImportMemoryHostPointerInfoEXT *>(this);
}

MemoryHostPointerPropertiesEXT::operator const VkMemoryHostPointerPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkMemoryHostPointerPropertiesEXT *>(this);
}

MemoryHostPointerPropertiesEXT::operator VkMemoryHostPointerPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkMemoryHostPointerPropertiesEXT *>(this);
}

MemoryHostPointerPropertiesEXT::operator const VkMemoryHostPointerPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkMemoryHostPointerPropertiesEXT *>(this);
}

MemoryHostPointerPropertiesEXT::operator VkMemoryHostPointerPropertiesEXT *() noexcept {
  return reinterpret_cast<VkMemoryHostPointerPropertiesEXT *>(this);
}

PhysicalDeviceExternalMemoryHostPropertiesEXT::operator const VkPhysicalDeviceExternalMemoryHostPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceExternalMemoryHostPropertiesEXT *>(this);
}

PhysicalDeviceExternalMemoryHostPropertiesEXT::operator VkPhysicalDeviceExternalMemoryHostPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceExternalMemoryHostPropertiesEXT *>(this);
}

PhysicalDeviceExternalMemoryHostPropertiesEXT::operator const VkPhysicalDeviceExternalMemoryHostPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceExternalMemoryHostPropertiesEXT *>(this);
}

PhysicalDeviceExternalMemoryHostPropertiesEXT::operator VkPhysicalDeviceExternalMemoryHostPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceExternalMemoryHostPropertiesEXT *>(this);
}

PhysicalDeviceConservativeRasterizationPropertiesEXT::operator const VkPhysicalDeviceConservativeRasterizationPropertiesEXT &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceConservativeRasterizationPropertiesEXT *>(this);
}

PhysicalDeviceConservativeRasterizationPropertiesEXT::operator VkPhysicalDeviceConservativeRasterizationPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceConservativeRasterizationPropertiesEXT *>(this);
}

PhysicalDeviceConservativeRasterizationPropertiesEXT::operator const VkPhysicalDeviceConservativeRasterizationPropertiesEXT *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceConservativeRasterizationPropertiesEXT *>(this);
}

PhysicalDeviceConservativeRasterizationPropertiesEXT::operator VkPhysicalDeviceConservativeRasterizationPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceConservativeRasterizationPropertiesEXT *>(this);
}

CalibratedTimestampInfoKHR::operator const VkCalibratedTimestampInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkCalibratedTimestampInfoKHR *>(this);
}

CalibratedTimestampInfoKHR::operator VkCalibratedTimestampInfoKHR &() noexcept {
  return *reinterpret_cast<VkCalibratedTimestampInfoKHR *>(this);
}

CalibratedTimestampInfoKHR::operator const VkCalibratedTimestampInfoKHR *() const noexcept {
  return reinterpret_cast<const VkCalibratedTimestampInfoKHR *>(this);
}

CalibratedTimestampInfoKHR::operator VkCalibratedTimestampInfoKHR *() noexcept {
  return reinterpret_cast<VkCalibratedTimestampInfoKHR *>(this);
}

PhysicalDeviceShaderCorePropertiesAMD::operator const VkPhysicalDeviceShaderCorePropertiesAMD &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderCorePropertiesAMD *>(this);
}

PhysicalDeviceShaderCorePropertiesAMD::operator VkPhysicalDeviceShaderCorePropertiesAMD &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderCorePropertiesAMD *>(this);
}

PhysicalDeviceShaderCorePropertiesAMD::operator const VkPhysicalDeviceShaderCorePropertiesAMD *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderCorePropertiesAMD *>(this);
}

PhysicalDeviceShaderCorePropertiesAMD::operator VkPhysicalDeviceShaderCorePropertiesAMD *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderCorePropertiesAMD *>(this);
}

PhysicalDeviceShaderCoreProperties2AMD::operator const VkPhysicalDeviceShaderCoreProperties2AMD &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderCoreProperties2AMD *>(this);
}

PhysicalDeviceShaderCoreProperties2AMD::operator VkPhysicalDeviceShaderCoreProperties2AMD &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderCoreProperties2AMD *>(this);
}

PhysicalDeviceShaderCoreProperties2AMD::operator const VkPhysicalDeviceShaderCoreProperties2AMD *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderCoreProperties2AMD *>(this);
}

PhysicalDeviceShaderCoreProperties2AMD::operator VkPhysicalDeviceShaderCoreProperties2AMD *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderCoreProperties2AMD *>(this);
}

PipelineRasterizationConservativeStateCreateInfoEXT::operator const VkPipelineRasterizationConservativeStateCreateInfoEXT &()
  const noexcept {
  return *reinterpret_cast<const VkPipelineRasterizationConservativeStateCreateInfoEXT *>(this);
}

PipelineRasterizationConservativeStateCreateInfoEXT::operator VkPipelineRasterizationConservativeStateCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkPipelineRasterizationConservativeStateCreateInfoEXT *>(this);
}

PipelineRasterizationConservativeStateCreateInfoEXT::operator const VkPipelineRasterizationConservativeStateCreateInfoEXT *()
  const noexcept {
  return reinterpret_cast<const VkPipelineRasterizationConservativeStateCreateInfoEXT *>(this);
}

PipelineRasterizationConservativeStateCreateInfoEXT::operator VkPipelineRasterizationConservativeStateCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkPipelineRasterizationConservativeStateCreateInfoEXT *>(this);
}

PhysicalDeviceDescriptorIndexingFeatures::operator const VkPhysicalDeviceDescriptorIndexingFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDescriptorIndexingFeatures *>(this);
}

PhysicalDeviceDescriptorIndexingFeatures::operator VkPhysicalDeviceDescriptorIndexingFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDescriptorIndexingFeatures *>(this);
}

PhysicalDeviceDescriptorIndexingFeatures::operator const VkPhysicalDeviceDescriptorIndexingFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDescriptorIndexingFeatures *>(this);
}

PhysicalDeviceDescriptorIndexingFeatures::operator VkPhysicalDeviceDescriptorIndexingFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDescriptorIndexingFeatures *>(this);
}

PhysicalDeviceDescriptorIndexingProperties::operator const VkPhysicalDeviceDescriptorIndexingProperties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDescriptorIndexingProperties *>(this);
}

PhysicalDeviceDescriptorIndexingProperties::operator VkPhysicalDeviceDescriptorIndexingProperties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDescriptorIndexingProperties *>(this);
}

PhysicalDeviceDescriptorIndexingProperties::operator const VkPhysicalDeviceDescriptorIndexingProperties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDescriptorIndexingProperties *>(this);
}

PhysicalDeviceDescriptorIndexingProperties::operator VkPhysicalDeviceDescriptorIndexingProperties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDescriptorIndexingProperties *>(this);
}

DescriptorSetLayoutBindingFlagsCreateInfo::operator const VkDescriptorSetLayoutBindingFlagsCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkDescriptorSetLayoutBindingFlagsCreateInfo *>(this);
}

DescriptorSetLayoutBindingFlagsCreateInfo::operator VkDescriptorSetLayoutBindingFlagsCreateInfo &() noexcept {
  return *reinterpret_cast<VkDescriptorSetLayoutBindingFlagsCreateInfo *>(this);
}

DescriptorSetLayoutBindingFlagsCreateInfo::operator const VkDescriptorSetLayoutBindingFlagsCreateInfo *() const noexcept {
  return reinterpret_cast<const VkDescriptorSetLayoutBindingFlagsCreateInfo *>(this);
}

DescriptorSetLayoutBindingFlagsCreateInfo::operator VkDescriptorSetLayoutBindingFlagsCreateInfo *() noexcept {
  return reinterpret_cast<VkDescriptorSetLayoutBindingFlagsCreateInfo *>(this);
}

DescriptorSetVariableDescriptorCountAllocateInfo::operator const VkDescriptorSetVariableDescriptorCountAllocateInfo &() const noexcept {
  return *reinterpret_cast<const VkDescriptorSetVariableDescriptorCountAllocateInfo *>(this);
}

DescriptorSetVariableDescriptorCountAllocateInfo::operator VkDescriptorSetVariableDescriptorCountAllocateInfo &() noexcept {
  return *reinterpret_cast<VkDescriptorSetVariableDescriptorCountAllocateInfo *>(this);
}

DescriptorSetVariableDescriptorCountAllocateInfo::operator const VkDescriptorSetVariableDescriptorCountAllocateInfo *() const noexcept {
  return reinterpret_cast<const VkDescriptorSetVariableDescriptorCountAllocateInfo *>(this);
}

DescriptorSetVariableDescriptorCountAllocateInfo::operator VkDescriptorSetVariableDescriptorCountAllocateInfo *() noexcept {
  return reinterpret_cast<VkDescriptorSetVariableDescriptorCountAllocateInfo *>(this);
}

DescriptorSetVariableDescriptorCountLayoutSupport::operator const VkDescriptorSetVariableDescriptorCountLayoutSupport &() const noexcept {
  return *reinterpret_cast<const VkDescriptorSetVariableDescriptorCountLayoutSupport *>(this);
}

DescriptorSetVariableDescriptorCountLayoutSupport::operator VkDescriptorSetVariableDescriptorCountLayoutSupport &() noexcept {
  return *reinterpret_cast<VkDescriptorSetVariableDescriptorCountLayoutSupport *>(this);
}

DescriptorSetVariableDescriptorCountLayoutSupport::operator const VkDescriptorSetVariableDescriptorCountLayoutSupport *() const noexcept {
  return reinterpret_cast<const VkDescriptorSetVariableDescriptorCountLayoutSupport *>(this);
}

DescriptorSetVariableDescriptorCountLayoutSupport::operator VkDescriptorSetVariableDescriptorCountLayoutSupport *() noexcept {
  return reinterpret_cast<VkDescriptorSetVariableDescriptorCountLayoutSupport *>(this);
}

AttachmentDescription2::operator const VkAttachmentDescription2 &() const noexcept {
  return *reinterpret_cast<const VkAttachmentDescription2 *>(this);
}

AttachmentDescription2::operator VkAttachmentDescription2 &() noexcept {
  return *reinterpret_cast<VkAttachmentDescription2 *>(this);
}

AttachmentDescription2::operator const VkAttachmentDescription2 *() const noexcept {
  return reinterpret_cast<const VkAttachmentDescription2 *>(this);
}

AttachmentDescription2::operator VkAttachmentDescription2 *() noexcept {
  return reinterpret_cast<VkAttachmentDescription2 *>(this);
}

AttachmentReference2::operator const VkAttachmentReference2 &() const noexcept {
  return *reinterpret_cast<const VkAttachmentReference2 *>(this);
}

AttachmentReference2::operator VkAttachmentReference2 &() noexcept {
  return *reinterpret_cast<VkAttachmentReference2 *>(this);
}

AttachmentReference2::operator const VkAttachmentReference2 *() const noexcept {
  return reinterpret_cast<const VkAttachmentReference2 *>(this);
}

AttachmentReference2::operator VkAttachmentReference2 *() noexcept {
  return reinterpret_cast<VkAttachmentReference2 *>(this);
}

SubpassDescription2::operator const VkSubpassDescription2 &() const noexcept {
  return *reinterpret_cast<const VkSubpassDescription2 *>(this);
}

SubpassDescription2::operator VkSubpassDescription2 &() noexcept {
  return *reinterpret_cast<VkSubpassDescription2 *>(this);
}

SubpassDescription2::operator const VkSubpassDescription2 *() const noexcept {
  return reinterpret_cast<const VkSubpassDescription2 *>(this);
}

SubpassDescription2::operator VkSubpassDescription2 *() noexcept {
  return reinterpret_cast<VkSubpassDescription2 *>(this);
}

SubpassDependency2::operator const VkSubpassDependency2 &() const noexcept {
  return *reinterpret_cast<const VkSubpassDependency2 *>(this);
}

SubpassDependency2::operator VkSubpassDependency2 &() noexcept {
  return *reinterpret_cast<VkSubpassDependency2 *>(this);
}

SubpassDependency2::operator const VkSubpassDependency2 *() const noexcept {
  return reinterpret_cast<const VkSubpassDependency2 *>(this);
}

SubpassDependency2::operator VkSubpassDependency2 *() noexcept {
  return reinterpret_cast<VkSubpassDependency2 *>(this);
}

RenderPassCreateInfo2::operator const VkRenderPassCreateInfo2 &() const noexcept {
  return *reinterpret_cast<const VkRenderPassCreateInfo2 *>(this);
}

RenderPassCreateInfo2::operator VkRenderPassCreateInfo2 &() noexcept {
  return *reinterpret_cast<VkRenderPassCreateInfo2 *>(this);
}

RenderPassCreateInfo2::operator const VkRenderPassCreateInfo2 *() const noexcept {
  return reinterpret_cast<const VkRenderPassCreateInfo2 *>(this);
}

RenderPassCreateInfo2::operator VkRenderPassCreateInfo2 *() noexcept {
  return reinterpret_cast<VkRenderPassCreateInfo2 *>(this);
}

SubpassBeginInfo::operator const VkSubpassBeginInfo &() const noexcept {
  return *reinterpret_cast<const VkSubpassBeginInfo *>(this);
}

SubpassBeginInfo::operator VkSubpassBeginInfo &() noexcept {
  return *reinterpret_cast<VkSubpassBeginInfo *>(this);
}

SubpassBeginInfo::operator const VkSubpassBeginInfo *() const noexcept {
  return reinterpret_cast<const VkSubpassBeginInfo *>(this);
}

SubpassBeginInfo::operator VkSubpassBeginInfo *() noexcept {
  return reinterpret_cast<VkSubpassBeginInfo *>(this);
}

SubpassEndInfo::operator const VkSubpassEndInfo &() const noexcept {
  return *reinterpret_cast<const VkSubpassEndInfo *>(this);
}

SubpassEndInfo::operator VkSubpassEndInfo &() noexcept {
  return *reinterpret_cast<VkSubpassEndInfo *>(this);
}

SubpassEndInfo::operator const VkSubpassEndInfo *() const noexcept {
  return reinterpret_cast<const VkSubpassEndInfo *>(this);
}

SubpassEndInfo::operator VkSubpassEndInfo *() noexcept {
  return reinterpret_cast<VkSubpassEndInfo *>(this);
}

PhysicalDeviceTimelineSemaphoreFeatures::operator const VkPhysicalDeviceTimelineSemaphoreFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceTimelineSemaphoreFeatures *>(this);
}

PhysicalDeviceTimelineSemaphoreFeatures::operator VkPhysicalDeviceTimelineSemaphoreFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceTimelineSemaphoreFeatures *>(this);
}

PhysicalDeviceTimelineSemaphoreFeatures::operator const VkPhysicalDeviceTimelineSemaphoreFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceTimelineSemaphoreFeatures *>(this);
}

PhysicalDeviceTimelineSemaphoreFeatures::operator VkPhysicalDeviceTimelineSemaphoreFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceTimelineSemaphoreFeatures *>(this);
}

PhysicalDeviceTimelineSemaphoreProperties::operator const VkPhysicalDeviceTimelineSemaphoreProperties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceTimelineSemaphoreProperties *>(this);
}

PhysicalDeviceTimelineSemaphoreProperties::operator VkPhysicalDeviceTimelineSemaphoreProperties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceTimelineSemaphoreProperties *>(this);
}

PhysicalDeviceTimelineSemaphoreProperties::operator const VkPhysicalDeviceTimelineSemaphoreProperties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceTimelineSemaphoreProperties *>(this);
}

PhysicalDeviceTimelineSemaphoreProperties::operator VkPhysicalDeviceTimelineSemaphoreProperties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceTimelineSemaphoreProperties *>(this);
}

SemaphoreTypeCreateInfo::operator const VkSemaphoreTypeCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkSemaphoreTypeCreateInfo *>(this);
}

SemaphoreTypeCreateInfo::operator VkSemaphoreTypeCreateInfo &() noexcept {
  return *reinterpret_cast<VkSemaphoreTypeCreateInfo *>(this);
}

SemaphoreTypeCreateInfo::operator const VkSemaphoreTypeCreateInfo *() const noexcept {
  return reinterpret_cast<const VkSemaphoreTypeCreateInfo *>(this);
}

SemaphoreTypeCreateInfo::operator VkSemaphoreTypeCreateInfo *() noexcept {
  return reinterpret_cast<VkSemaphoreTypeCreateInfo *>(this);
}

TimelineSemaphoreSubmitInfo::operator const VkTimelineSemaphoreSubmitInfo &() const noexcept {
  return *reinterpret_cast<const VkTimelineSemaphoreSubmitInfo *>(this);
}

TimelineSemaphoreSubmitInfo::operator VkTimelineSemaphoreSubmitInfo &() noexcept {
  return *reinterpret_cast<VkTimelineSemaphoreSubmitInfo *>(this);
}

TimelineSemaphoreSubmitInfo::operator const VkTimelineSemaphoreSubmitInfo *() const noexcept {
  return reinterpret_cast<const VkTimelineSemaphoreSubmitInfo *>(this);
}

TimelineSemaphoreSubmitInfo::operator VkTimelineSemaphoreSubmitInfo *() noexcept {
  return reinterpret_cast<VkTimelineSemaphoreSubmitInfo *>(this);
}

SemaphoreWaitInfo::operator const VkSemaphoreWaitInfo &() const noexcept {
  return *reinterpret_cast<const VkSemaphoreWaitInfo *>(this);
}

SemaphoreWaitInfo::operator VkSemaphoreWaitInfo &() noexcept {
  return *reinterpret_cast<VkSemaphoreWaitInfo *>(this);
}

SemaphoreWaitInfo::operator const VkSemaphoreWaitInfo *() const noexcept {
  return reinterpret_cast<const VkSemaphoreWaitInfo *>(this);
}

SemaphoreWaitInfo::operator VkSemaphoreWaitInfo *() noexcept {
  return reinterpret_cast<VkSemaphoreWaitInfo *>(this);
}

SemaphoreSignalInfo::operator const VkSemaphoreSignalInfo &() const noexcept {
  return *reinterpret_cast<const VkSemaphoreSignalInfo *>(this);
}

SemaphoreSignalInfo::operator VkSemaphoreSignalInfo &() noexcept {
  return *reinterpret_cast<VkSemaphoreSignalInfo *>(this);
}

SemaphoreSignalInfo::operator const VkSemaphoreSignalInfo *() const noexcept {
  return reinterpret_cast<const VkSemaphoreSignalInfo *>(this);
}

SemaphoreSignalInfo::operator VkSemaphoreSignalInfo *() noexcept {
  return reinterpret_cast<VkSemaphoreSignalInfo *>(this);
}

VertexInputBindingDivisorDescriptionKHR::operator const VkVertexInputBindingDivisorDescriptionKHR &() const noexcept {
  return *reinterpret_cast<const VkVertexInputBindingDivisorDescriptionKHR *>(this);
}

VertexInputBindingDivisorDescriptionKHR::operator VkVertexInputBindingDivisorDescriptionKHR &() noexcept {
  return *reinterpret_cast<VkVertexInputBindingDivisorDescriptionKHR *>(this);
}

VertexInputBindingDivisorDescriptionKHR::operator const VkVertexInputBindingDivisorDescriptionKHR *() const noexcept {
  return reinterpret_cast<const VkVertexInputBindingDivisorDescriptionKHR *>(this);
}

VertexInputBindingDivisorDescriptionKHR::operator VkVertexInputBindingDivisorDescriptionKHR *() noexcept {
  return reinterpret_cast<VkVertexInputBindingDivisorDescriptionKHR *>(this);
}

PipelineVertexInputDivisorStateCreateInfoKHR::operator const VkPipelineVertexInputDivisorStateCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkPipelineVertexInputDivisorStateCreateInfoKHR *>(this);
}

PipelineVertexInputDivisorStateCreateInfoKHR::operator VkPipelineVertexInputDivisorStateCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkPipelineVertexInputDivisorStateCreateInfoKHR *>(this);
}

PipelineVertexInputDivisorStateCreateInfoKHR::operator const VkPipelineVertexInputDivisorStateCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkPipelineVertexInputDivisorStateCreateInfoKHR *>(this);
}

PipelineVertexInputDivisorStateCreateInfoKHR::operator VkPipelineVertexInputDivisorStateCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkPipelineVertexInputDivisorStateCreateInfoKHR *>(this);
}

PhysicalDeviceVertexAttributeDivisorPropertiesEXT::operator const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *>(this);
}

PhysicalDeviceVertexAttributeDivisorPropertiesEXT::operator VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *>(this);
}

PhysicalDeviceVertexAttributeDivisorPropertiesEXT::operator const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *>(this);
}

PhysicalDeviceVertexAttributeDivisorPropertiesEXT::operator VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *>(this);
}

PhysicalDeviceVertexAttributeDivisorPropertiesKHR::operator const VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR *>(this);
}

PhysicalDeviceVertexAttributeDivisorPropertiesKHR::operator VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR *>(this);
}

PhysicalDeviceVertexAttributeDivisorPropertiesKHR::operator const VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR *>(this);
}

PhysicalDeviceVertexAttributeDivisorPropertiesKHR::operator VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR *>(this);
}

PhysicalDevicePCIBusInfoPropertiesEXT::operator const VkPhysicalDevicePCIBusInfoPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDevicePCIBusInfoPropertiesEXT *>(this);
}

PhysicalDevicePCIBusInfoPropertiesEXT::operator VkPhysicalDevicePCIBusInfoPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDevicePCIBusInfoPropertiesEXT *>(this);
}

PhysicalDevicePCIBusInfoPropertiesEXT::operator const VkPhysicalDevicePCIBusInfoPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDevicePCIBusInfoPropertiesEXT *>(this);
}

PhysicalDevicePCIBusInfoPropertiesEXT::operator VkPhysicalDevicePCIBusInfoPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDevicePCIBusInfoPropertiesEXT *>(this);
}

CommandBufferInheritanceConditionalRenderingInfoEXT::operator const VkCommandBufferInheritanceConditionalRenderingInfoEXT &()
  const noexcept {
  return *reinterpret_cast<const VkCommandBufferInheritanceConditionalRenderingInfoEXT *>(this);
}

CommandBufferInheritanceConditionalRenderingInfoEXT::operator VkCommandBufferInheritanceConditionalRenderingInfoEXT &() noexcept {
  return *reinterpret_cast<VkCommandBufferInheritanceConditionalRenderingInfoEXT *>(this);
}

CommandBufferInheritanceConditionalRenderingInfoEXT::operator const VkCommandBufferInheritanceConditionalRenderingInfoEXT *()
  const noexcept {
  return reinterpret_cast<const VkCommandBufferInheritanceConditionalRenderingInfoEXT *>(this);
}

CommandBufferInheritanceConditionalRenderingInfoEXT::operator VkCommandBufferInheritanceConditionalRenderingInfoEXT *() noexcept {
  return reinterpret_cast<VkCommandBufferInheritanceConditionalRenderingInfoEXT *>(this);
}

PhysicalDevice8BitStorageFeatures::operator const VkPhysicalDevice8BitStorageFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDevice8BitStorageFeatures *>(this);
}

PhysicalDevice8BitStorageFeatures::operator VkPhysicalDevice8BitStorageFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDevice8BitStorageFeatures *>(this);
}

PhysicalDevice8BitStorageFeatures::operator const VkPhysicalDevice8BitStorageFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDevice8BitStorageFeatures *>(this);
}

PhysicalDevice8BitStorageFeatures::operator VkPhysicalDevice8BitStorageFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDevice8BitStorageFeatures *>(this);
}

PhysicalDeviceConditionalRenderingFeaturesEXT::operator const VkPhysicalDeviceConditionalRenderingFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceConditionalRenderingFeaturesEXT *>(this);
}

PhysicalDeviceConditionalRenderingFeaturesEXT::operator VkPhysicalDeviceConditionalRenderingFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceConditionalRenderingFeaturesEXT *>(this);
}

PhysicalDeviceConditionalRenderingFeaturesEXT::operator const VkPhysicalDeviceConditionalRenderingFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceConditionalRenderingFeaturesEXT *>(this);
}

PhysicalDeviceConditionalRenderingFeaturesEXT::operator VkPhysicalDeviceConditionalRenderingFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceConditionalRenderingFeaturesEXT *>(this);
}

PhysicalDeviceVulkanMemoryModelFeatures::operator const VkPhysicalDeviceVulkanMemoryModelFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceVulkanMemoryModelFeatures *>(this);
}

PhysicalDeviceVulkanMemoryModelFeatures::operator VkPhysicalDeviceVulkanMemoryModelFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceVulkanMemoryModelFeatures *>(this);
}

PhysicalDeviceVulkanMemoryModelFeatures::operator const VkPhysicalDeviceVulkanMemoryModelFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceVulkanMemoryModelFeatures *>(this);
}

PhysicalDeviceVulkanMemoryModelFeatures::operator VkPhysicalDeviceVulkanMemoryModelFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceVulkanMemoryModelFeatures *>(this);
}

PhysicalDeviceShaderAtomicInt64Features::operator const VkPhysicalDeviceShaderAtomicInt64Features &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderAtomicInt64Features *>(this);
}

PhysicalDeviceShaderAtomicInt64Features::operator VkPhysicalDeviceShaderAtomicInt64Features &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderAtomicInt64Features *>(this);
}

PhysicalDeviceShaderAtomicInt64Features::operator const VkPhysicalDeviceShaderAtomicInt64Features *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderAtomicInt64Features *>(this);
}

PhysicalDeviceShaderAtomicInt64Features::operator VkPhysicalDeviceShaderAtomicInt64Features *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderAtomicInt64Features *>(this);
}

PhysicalDeviceShaderAtomicFloatFeaturesEXT::operator const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *>(this);
}

PhysicalDeviceShaderAtomicFloatFeaturesEXT::operator VkPhysicalDeviceShaderAtomicFloatFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *>(this);
}

PhysicalDeviceShaderAtomicFloatFeaturesEXT::operator const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *>(this);
}

PhysicalDeviceShaderAtomicFloatFeaturesEXT::operator VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *>(this);
}

PhysicalDeviceShaderAtomicFloat2FeaturesEXT::operator const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *>(this);
}

PhysicalDeviceShaderAtomicFloat2FeaturesEXT::operator VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *>(this);
}

PhysicalDeviceShaderAtomicFloat2FeaturesEXT::operator const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *>(this);
}

PhysicalDeviceShaderAtomicFloat2FeaturesEXT::operator VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *>(this);
}

PhysicalDeviceVertexAttributeDivisorFeaturesKHR::operator const VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR *>(this);
}

PhysicalDeviceVertexAttributeDivisorFeaturesKHR::operator VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR *>(this);
}

PhysicalDeviceVertexAttributeDivisorFeaturesKHR::operator const VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR *>(this);
}

PhysicalDeviceVertexAttributeDivisorFeaturesKHR::operator VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR *>(this);
}

QueueFamilyCheckpointPropertiesNV::operator const VkQueueFamilyCheckpointPropertiesNV &() const noexcept {
  return *reinterpret_cast<const VkQueueFamilyCheckpointPropertiesNV *>(this);
}

QueueFamilyCheckpointPropertiesNV::operator VkQueueFamilyCheckpointPropertiesNV &() noexcept {
  return *reinterpret_cast<VkQueueFamilyCheckpointPropertiesNV *>(this);
}

QueueFamilyCheckpointPropertiesNV::operator const VkQueueFamilyCheckpointPropertiesNV *() const noexcept {
  return reinterpret_cast<const VkQueueFamilyCheckpointPropertiesNV *>(this);
}

QueueFamilyCheckpointPropertiesNV::operator VkQueueFamilyCheckpointPropertiesNV *() noexcept {
  return reinterpret_cast<VkQueueFamilyCheckpointPropertiesNV *>(this);
}

CheckpointDataNV::operator const VkCheckpointDataNV &() const noexcept {
  return *reinterpret_cast<const VkCheckpointDataNV *>(this);
}

CheckpointDataNV::operator VkCheckpointDataNV &() noexcept {
  return *reinterpret_cast<VkCheckpointDataNV *>(this);
}

CheckpointDataNV::operator const VkCheckpointDataNV *() const noexcept {
  return reinterpret_cast<const VkCheckpointDataNV *>(this);
}

CheckpointDataNV::operator VkCheckpointDataNV *() noexcept {
  return reinterpret_cast<VkCheckpointDataNV *>(this);
}

PhysicalDeviceDepthStencilResolveProperties::operator const VkPhysicalDeviceDepthStencilResolveProperties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDepthStencilResolveProperties *>(this);
}

PhysicalDeviceDepthStencilResolveProperties::operator VkPhysicalDeviceDepthStencilResolveProperties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDepthStencilResolveProperties *>(this);
}

PhysicalDeviceDepthStencilResolveProperties::operator const VkPhysicalDeviceDepthStencilResolveProperties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDepthStencilResolveProperties *>(this);
}

PhysicalDeviceDepthStencilResolveProperties::operator VkPhysicalDeviceDepthStencilResolveProperties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDepthStencilResolveProperties *>(this);
}

SubpassDescriptionDepthStencilResolve::operator const VkSubpassDescriptionDepthStencilResolve &() const noexcept {
  return *reinterpret_cast<const VkSubpassDescriptionDepthStencilResolve *>(this);
}

SubpassDescriptionDepthStencilResolve::operator VkSubpassDescriptionDepthStencilResolve &() noexcept {
  return *reinterpret_cast<VkSubpassDescriptionDepthStencilResolve *>(this);
}

SubpassDescriptionDepthStencilResolve::operator const VkSubpassDescriptionDepthStencilResolve *() const noexcept {
  return reinterpret_cast<const VkSubpassDescriptionDepthStencilResolve *>(this);
}

SubpassDescriptionDepthStencilResolve::operator VkSubpassDescriptionDepthStencilResolve *() noexcept {
  return reinterpret_cast<VkSubpassDescriptionDepthStencilResolve *>(this);
}

ImageViewASTCDecodeModeEXT::operator const VkImageViewASTCDecodeModeEXT &() const noexcept {
  return *reinterpret_cast<const VkImageViewASTCDecodeModeEXT *>(this);
}

ImageViewASTCDecodeModeEXT::operator VkImageViewASTCDecodeModeEXT &() noexcept {
  return *reinterpret_cast<VkImageViewASTCDecodeModeEXT *>(this);
}

ImageViewASTCDecodeModeEXT::operator const VkImageViewASTCDecodeModeEXT *() const noexcept {
  return reinterpret_cast<const VkImageViewASTCDecodeModeEXT *>(this);
}

ImageViewASTCDecodeModeEXT::operator VkImageViewASTCDecodeModeEXT *() noexcept {
  return reinterpret_cast<VkImageViewASTCDecodeModeEXT *>(this);
}

PhysicalDeviceASTCDecodeFeaturesEXT::operator const VkPhysicalDeviceASTCDecodeFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceASTCDecodeFeaturesEXT *>(this);
}

PhysicalDeviceASTCDecodeFeaturesEXT::operator VkPhysicalDeviceASTCDecodeFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceASTCDecodeFeaturesEXT *>(this);
}

PhysicalDeviceASTCDecodeFeaturesEXT::operator const VkPhysicalDeviceASTCDecodeFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceASTCDecodeFeaturesEXT *>(this);
}

PhysicalDeviceASTCDecodeFeaturesEXT::operator VkPhysicalDeviceASTCDecodeFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceASTCDecodeFeaturesEXT *>(this);
}

PhysicalDeviceTransformFeedbackFeaturesEXT::operator const VkPhysicalDeviceTransformFeedbackFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceTransformFeedbackFeaturesEXT *>(this);
}

PhysicalDeviceTransformFeedbackFeaturesEXT::operator VkPhysicalDeviceTransformFeedbackFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceTransformFeedbackFeaturesEXT *>(this);
}

PhysicalDeviceTransformFeedbackFeaturesEXT::operator const VkPhysicalDeviceTransformFeedbackFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceTransformFeedbackFeaturesEXT *>(this);
}

PhysicalDeviceTransformFeedbackFeaturesEXT::operator VkPhysicalDeviceTransformFeedbackFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceTransformFeedbackFeaturesEXT *>(this);
}

PhysicalDeviceTransformFeedbackPropertiesEXT::operator const VkPhysicalDeviceTransformFeedbackPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceTransformFeedbackPropertiesEXT *>(this);
}

PhysicalDeviceTransformFeedbackPropertiesEXT::operator VkPhysicalDeviceTransformFeedbackPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceTransformFeedbackPropertiesEXT *>(this);
}

PhysicalDeviceTransformFeedbackPropertiesEXT::operator const VkPhysicalDeviceTransformFeedbackPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceTransformFeedbackPropertiesEXT *>(this);
}

PhysicalDeviceTransformFeedbackPropertiesEXT::operator VkPhysicalDeviceTransformFeedbackPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceTransformFeedbackPropertiesEXT *>(this);
}

PipelineRasterizationStateStreamCreateInfoEXT::operator const VkPipelineRasterizationStateStreamCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkPipelineRasterizationStateStreamCreateInfoEXT *>(this);
}

PipelineRasterizationStateStreamCreateInfoEXT::operator VkPipelineRasterizationStateStreamCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkPipelineRasterizationStateStreamCreateInfoEXT *>(this);
}

PipelineRasterizationStateStreamCreateInfoEXT::operator const VkPipelineRasterizationStateStreamCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkPipelineRasterizationStateStreamCreateInfoEXT *>(this);
}

PipelineRasterizationStateStreamCreateInfoEXT::operator VkPipelineRasterizationStateStreamCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkPipelineRasterizationStateStreamCreateInfoEXT *>(this);
}

PhysicalDeviceRepresentativeFragmentTestFeaturesNV::operator const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *>(this);
}

PhysicalDeviceRepresentativeFragmentTestFeaturesNV::operator VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *>(this);
}

PhysicalDeviceRepresentativeFragmentTestFeaturesNV::operator const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *>(this);
}

PhysicalDeviceRepresentativeFragmentTestFeaturesNV::operator VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *>(this);
}

PipelineRepresentativeFragmentTestStateCreateInfoNV::operator const VkPipelineRepresentativeFragmentTestStateCreateInfoNV &()
  const noexcept {
  return *reinterpret_cast<const VkPipelineRepresentativeFragmentTestStateCreateInfoNV *>(this);
}

PipelineRepresentativeFragmentTestStateCreateInfoNV::operator VkPipelineRepresentativeFragmentTestStateCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkPipelineRepresentativeFragmentTestStateCreateInfoNV *>(this);
}

PipelineRepresentativeFragmentTestStateCreateInfoNV::operator const VkPipelineRepresentativeFragmentTestStateCreateInfoNV *()
  const noexcept {
  return reinterpret_cast<const VkPipelineRepresentativeFragmentTestStateCreateInfoNV *>(this);
}

PipelineRepresentativeFragmentTestStateCreateInfoNV::operator VkPipelineRepresentativeFragmentTestStateCreateInfoNV *() noexcept {
  return reinterpret_cast<VkPipelineRepresentativeFragmentTestStateCreateInfoNV *>(this);
}

PhysicalDeviceExclusiveScissorFeaturesNV::operator const VkPhysicalDeviceExclusiveScissorFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceExclusiveScissorFeaturesNV *>(this);
}

PhysicalDeviceExclusiveScissorFeaturesNV::operator VkPhysicalDeviceExclusiveScissorFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceExclusiveScissorFeaturesNV *>(this);
}

PhysicalDeviceExclusiveScissorFeaturesNV::operator const VkPhysicalDeviceExclusiveScissorFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceExclusiveScissorFeaturesNV *>(this);
}

PhysicalDeviceExclusiveScissorFeaturesNV::operator VkPhysicalDeviceExclusiveScissorFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceExclusiveScissorFeaturesNV *>(this);
}

PipelineViewportExclusiveScissorStateCreateInfoNV::operator const VkPipelineViewportExclusiveScissorStateCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkPipelineViewportExclusiveScissorStateCreateInfoNV *>(this);
}

PipelineViewportExclusiveScissorStateCreateInfoNV::operator VkPipelineViewportExclusiveScissorStateCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkPipelineViewportExclusiveScissorStateCreateInfoNV *>(this);
}

PipelineViewportExclusiveScissorStateCreateInfoNV::operator const VkPipelineViewportExclusiveScissorStateCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkPipelineViewportExclusiveScissorStateCreateInfoNV *>(this);
}

PipelineViewportExclusiveScissorStateCreateInfoNV::operator VkPipelineViewportExclusiveScissorStateCreateInfoNV *() noexcept {
  return reinterpret_cast<VkPipelineViewportExclusiveScissorStateCreateInfoNV *>(this);
}

PhysicalDeviceCornerSampledImageFeaturesNV::operator const VkPhysicalDeviceCornerSampledImageFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceCornerSampledImageFeaturesNV *>(this);
}

PhysicalDeviceCornerSampledImageFeaturesNV::operator VkPhysicalDeviceCornerSampledImageFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceCornerSampledImageFeaturesNV *>(this);
}

PhysicalDeviceCornerSampledImageFeaturesNV::operator const VkPhysicalDeviceCornerSampledImageFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceCornerSampledImageFeaturesNV *>(this);
}

PhysicalDeviceCornerSampledImageFeaturesNV::operator VkPhysicalDeviceCornerSampledImageFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceCornerSampledImageFeaturesNV *>(this);
}

PhysicalDeviceComputeShaderDerivativesFeaturesNV::operator const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *>(this);
}

PhysicalDeviceComputeShaderDerivativesFeaturesNV::operator VkPhysicalDeviceComputeShaderDerivativesFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *>(this);
}

PhysicalDeviceComputeShaderDerivativesFeaturesNV::operator const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *>(this);
}

PhysicalDeviceComputeShaderDerivativesFeaturesNV::operator VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *>(this);
}

PhysicalDeviceShaderImageFootprintFeaturesNV::operator const VkPhysicalDeviceShaderImageFootprintFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderImageFootprintFeaturesNV *>(this);
}

PhysicalDeviceShaderImageFootprintFeaturesNV::operator VkPhysicalDeviceShaderImageFootprintFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderImageFootprintFeaturesNV *>(this);
}

PhysicalDeviceShaderImageFootprintFeaturesNV::operator const VkPhysicalDeviceShaderImageFootprintFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderImageFootprintFeaturesNV *>(this);
}

PhysicalDeviceShaderImageFootprintFeaturesNV::operator VkPhysicalDeviceShaderImageFootprintFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderImageFootprintFeaturesNV *>(this);
}

PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV::operator const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *>(this);
}

PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV::operator VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *>(this);
}

PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV::operator const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *>(this);
}

PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV::operator VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *>(this);
}

PhysicalDeviceCopyMemoryIndirectFeaturesNV::operator const VkPhysicalDeviceCopyMemoryIndirectFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *>(this);
}

PhysicalDeviceCopyMemoryIndirectFeaturesNV::operator VkPhysicalDeviceCopyMemoryIndirectFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *>(this);
}

PhysicalDeviceCopyMemoryIndirectFeaturesNV::operator const VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *>(this);
}

PhysicalDeviceCopyMemoryIndirectFeaturesNV::operator VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *>(this);
}

PhysicalDeviceCopyMemoryIndirectPropertiesNV::operator const VkPhysicalDeviceCopyMemoryIndirectPropertiesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceCopyMemoryIndirectPropertiesNV *>(this);
}

PhysicalDeviceCopyMemoryIndirectPropertiesNV::operator VkPhysicalDeviceCopyMemoryIndirectPropertiesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceCopyMemoryIndirectPropertiesNV *>(this);
}

PhysicalDeviceCopyMemoryIndirectPropertiesNV::operator const VkPhysicalDeviceCopyMemoryIndirectPropertiesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceCopyMemoryIndirectPropertiesNV *>(this);
}

PhysicalDeviceCopyMemoryIndirectPropertiesNV::operator VkPhysicalDeviceCopyMemoryIndirectPropertiesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceCopyMemoryIndirectPropertiesNV *>(this);
}

PhysicalDeviceMemoryDecompressionFeaturesNV::operator const VkPhysicalDeviceMemoryDecompressionFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMemoryDecompressionFeaturesNV *>(this);
}

PhysicalDeviceMemoryDecompressionFeaturesNV::operator VkPhysicalDeviceMemoryDecompressionFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMemoryDecompressionFeaturesNV *>(this);
}

PhysicalDeviceMemoryDecompressionFeaturesNV::operator const VkPhysicalDeviceMemoryDecompressionFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMemoryDecompressionFeaturesNV *>(this);
}

PhysicalDeviceMemoryDecompressionFeaturesNV::operator VkPhysicalDeviceMemoryDecompressionFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMemoryDecompressionFeaturesNV *>(this);
}

PhysicalDeviceMemoryDecompressionPropertiesNV::operator const VkPhysicalDeviceMemoryDecompressionPropertiesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMemoryDecompressionPropertiesNV *>(this);
}

PhysicalDeviceMemoryDecompressionPropertiesNV::operator VkPhysicalDeviceMemoryDecompressionPropertiesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMemoryDecompressionPropertiesNV *>(this);
}

PhysicalDeviceMemoryDecompressionPropertiesNV::operator const VkPhysicalDeviceMemoryDecompressionPropertiesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMemoryDecompressionPropertiesNV *>(this);
}

PhysicalDeviceMemoryDecompressionPropertiesNV::operator VkPhysicalDeviceMemoryDecompressionPropertiesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMemoryDecompressionPropertiesNV *>(this);
}

ShadingRatePaletteNV::operator const VkShadingRatePaletteNV &() const noexcept {
  return *reinterpret_cast<const VkShadingRatePaletteNV *>(this);
}

ShadingRatePaletteNV::operator VkShadingRatePaletteNV &() noexcept {
  return *reinterpret_cast<VkShadingRatePaletteNV *>(this);
}

ShadingRatePaletteNV::operator const VkShadingRatePaletteNV *() const noexcept {
  return reinterpret_cast<const VkShadingRatePaletteNV *>(this);
}

ShadingRatePaletteNV::operator VkShadingRatePaletteNV *() noexcept {
  return reinterpret_cast<VkShadingRatePaletteNV *>(this);
}

PipelineViewportShadingRateImageStateCreateInfoNV::operator const VkPipelineViewportShadingRateImageStateCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkPipelineViewportShadingRateImageStateCreateInfoNV *>(this);
}

PipelineViewportShadingRateImageStateCreateInfoNV::operator VkPipelineViewportShadingRateImageStateCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkPipelineViewportShadingRateImageStateCreateInfoNV *>(this);
}

PipelineViewportShadingRateImageStateCreateInfoNV::operator const VkPipelineViewportShadingRateImageStateCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkPipelineViewportShadingRateImageStateCreateInfoNV *>(this);
}

PipelineViewportShadingRateImageStateCreateInfoNV::operator VkPipelineViewportShadingRateImageStateCreateInfoNV *() noexcept {
  return reinterpret_cast<VkPipelineViewportShadingRateImageStateCreateInfoNV *>(this);
}

PhysicalDeviceShadingRateImageFeaturesNV::operator const VkPhysicalDeviceShadingRateImageFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShadingRateImageFeaturesNV *>(this);
}

PhysicalDeviceShadingRateImageFeaturesNV::operator VkPhysicalDeviceShadingRateImageFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShadingRateImageFeaturesNV *>(this);
}

PhysicalDeviceShadingRateImageFeaturesNV::operator const VkPhysicalDeviceShadingRateImageFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShadingRateImageFeaturesNV *>(this);
}

PhysicalDeviceShadingRateImageFeaturesNV::operator VkPhysicalDeviceShadingRateImageFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShadingRateImageFeaturesNV *>(this);
}

PhysicalDeviceShadingRateImagePropertiesNV::operator const VkPhysicalDeviceShadingRateImagePropertiesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShadingRateImagePropertiesNV *>(this);
}

PhysicalDeviceShadingRateImagePropertiesNV::operator VkPhysicalDeviceShadingRateImagePropertiesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShadingRateImagePropertiesNV *>(this);
}

PhysicalDeviceShadingRateImagePropertiesNV::operator const VkPhysicalDeviceShadingRateImagePropertiesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShadingRateImagePropertiesNV *>(this);
}

PhysicalDeviceShadingRateImagePropertiesNV::operator VkPhysicalDeviceShadingRateImagePropertiesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShadingRateImagePropertiesNV *>(this);
}

PhysicalDeviceInvocationMaskFeaturesHUAWEI::operator const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *>(this);
}

PhysicalDeviceInvocationMaskFeaturesHUAWEI::operator VkPhysicalDeviceInvocationMaskFeaturesHUAWEI &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *>(this);
}

PhysicalDeviceInvocationMaskFeaturesHUAWEI::operator const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *>(this);
}

PhysicalDeviceInvocationMaskFeaturesHUAWEI::operator VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *>(this);
}

CoarseSampleLocationNV::operator const VkCoarseSampleLocationNV &() const noexcept {
  return *reinterpret_cast<const VkCoarseSampleLocationNV *>(this);
}

CoarseSampleLocationNV::operator VkCoarseSampleLocationNV &() noexcept {
  return *reinterpret_cast<VkCoarseSampleLocationNV *>(this);
}

CoarseSampleLocationNV::operator const VkCoarseSampleLocationNV *() const noexcept {
  return reinterpret_cast<const VkCoarseSampleLocationNV *>(this);
}

CoarseSampleLocationNV::operator VkCoarseSampleLocationNV *() noexcept {
  return reinterpret_cast<VkCoarseSampleLocationNV *>(this);
}

CoarseSampleOrderCustomNV::operator const VkCoarseSampleOrderCustomNV &() const noexcept {
  return *reinterpret_cast<const VkCoarseSampleOrderCustomNV *>(this);
}

CoarseSampleOrderCustomNV::operator VkCoarseSampleOrderCustomNV &() noexcept {
  return *reinterpret_cast<VkCoarseSampleOrderCustomNV *>(this);
}

CoarseSampleOrderCustomNV::operator const VkCoarseSampleOrderCustomNV *() const noexcept {
  return reinterpret_cast<const VkCoarseSampleOrderCustomNV *>(this);
}

CoarseSampleOrderCustomNV::operator VkCoarseSampleOrderCustomNV *() noexcept {
  return reinterpret_cast<VkCoarseSampleOrderCustomNV *>(this);
}

PipelineViewportCoarseSampleOrderStateCreateInfoNV::operator const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *>(this);
}

PipelineViewportCoarseSampleOrderStateCreateInfoNV::operator VkPipelineViewportCoarseSampleOrderStateCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *>(this);
}

PipelineViewportCoarseSampleOrderStateCreateInfoNV::operator const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *>(this);
}

PipelineViewportCoarseSampleOrderStateCreateInfoNV::operator VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *() noexcept {
  return reinterpret_cast<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *>(this);
}

PhysicalDeviceMeshShaderFeaturesNV::operator const VkPhysicalDeviceMeshShaderFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMeshShaderFeaturesNV *>(this);
}

PhysicalDeviceMeshShaderFeaturesNV::operator VkPhysicalDeviceMeshShaderFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMeshShaderFeaturesNV *>(this);
}

PhysicalDeviceMeshShaderFeaturesNV::operator const VkPhysicalDeviceMeshShaderFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMeshShaderFeaturesNV *>(this);
}

PhysicalDeviceMeshShaderFeaturesNV::operator VkPhysicalDeviceMeshShaderFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMeshShaderFeaturesNV *>(this);
}

PhysicalDeviceMeshShaderPropertiesNV::operator const VkPhysicalDeviceMeshShaderPropertiesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMeshShaderPropertiesNV *>(this);
}

PhysicalDeviceMeshShaderPropertiesNV::operator VkPhysicalDeviceMeshShaderPropertiesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMeshShaderPropertiesNV *>(this);
}

PhysicalDeviceMeshShaderPropertiesNV::operator const VkPhysicalDeviceMeshShaderPropertiesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMeshShaderPropertiesNV *>(this);
}

PhysicalDeviceMeshShaderPropertiesNV::operator VkPhysicalDeviceMeshShaderPropertiesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMeshShaderPropertiesNV *>(this);
}

DrawMeshTasksIndirectCommandNV::operator const VkDrawMeshTasksIndirectCommandNV &() const noexcept {
  return *reinterpret_cast<const VkDrawMeshTasksIndirectCommandNV *>(this);
}

DrawMeshTasksIndirectCommandNV::operator VkDrawMeshTasksIndirectCommandNV &() noexcept {
  return *reinterpret_cast<VkDrawMeshTasksIndirectCommandNV *>(this);
}

DrawMeshTasksIndirectCommandNV::operator const VkDrawMeshTasksIndirectCommandNV *() const noexcept {
  return reinterpret_cast<const VkDrawMeshTasksIndirectCommandNV *>(this);
}

DrawMeshTasksIndirectCommandNV::operator VkDrawMeshTasksIndirectCommandNV *() noexcept {
  return reinterpret_cast<VkDrawMeshTasksIndirectCommandNV *>(this);
}

PhysicalDeviceMeshShaderFeaturesEXT::operator const VkPhysicalDeviceMeshShaderFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMeshShaderFeaturesEXT *>(this);
}

PhysicalDeviceMeshShaderFeaturesEXT::operator VkPhysicalDeviceMeshShaderFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMeshShaderFeaturesEXT *>(this);
}

PhysicalDeviceMeshShaderFeaturesEXT::operator const VkPhysicalDeviceMeshShaderFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMeshShaderFeaturesEXT *>(this);
}

PhysicalDeviceMeshShaderFeaturesEXT::operator VkPhysicalDeviceMeshShaderFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMeshShaderFeaturesEXT *>(this);
}

PhysicalDeviceMeshShaderPropertiesEXT::operator const VkPhysicalDeviceMeshShaderPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMeshShaderPropertiesEXT *>(this);
}

PhysicalDeviceMeshShaderPropertiesEXT::operator VkPhysicalDeviceMeshShaderPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMeshShaderPropertiesEXT *>(this);
}

PhysicalDeviceMeshShaderPropertiesEXT::operator const VkPhysicalDeviceMeshShaderPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMeshShaderPropertiesEXT *>(this);
}

PhysicalDeviceMeshShaderPropertiesEXT::operator VkPhysicalDeviceMeshShaderPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMeshShaderPropertiesEXT *>(this);
}

DrawMeshTasksIndirectCommandEXT::operator const VkDrawMeshTasksIndirectCommandEXT &() const noexcept {
  return *reinterpret_cast<const VkDrawMeshTasksIndirectCommandEXT *>(this);
}

DrawMeshTasksIndirectCommandEXT::operator VkDrawMeshTasksIndirectCommandEXT &() noexcept {
  return *reinterpret_cast<VkDrawMeshTasksIndirectCommandEXT *>(this);
}

DrawMeshTasksIndirectCommandEXT::operator const VkDrawMeshTasksIndirectCommandEXT *() const noexcept {
  return reinterpret_cast<const VkDrawMeshTasksIndirectCommandEXT *>(this);
}

DrawMeshTasksIndirectCommandEXT::operator VkDrawMeshTasksIndirectCommandEXT *() noexcept {
  return reinterpret_cast<VkDrawMeshTasksIndirectCommandEXT *>(this);
}

RayTracingShaderGroupCreateInfoNV::operator const VkRayTracingShaderGroupCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkRayTracingShaderGroupCreateInfoNV *>(this);
}

RayTracingShaderGroupCreateInfoNV::operator VkRayTracingShaderGroupCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkRayTracingShaderGroupCreateInfoNV *>(this);
}

RayTracingShaderGroupCreateInfoNV::operator const VkRayTracingShaderGroupCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkRayTracingShaderGroupCreateInfoNV *>(this);
}

RayTracingShaderGroupCreateInfoNV::operator VkRayTracingShaderGroupCreateInfoNV *() noexcept {
  return reinterpret_cast<VkRayTracingShaderGroupCreateInfoNV *>(this);
}

RayTracingShaderGroupCreateInfoKHR::operator const VkRayTracingShaderGroupCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkRayTracingShaderGroupCreateInfoKHR *>(this);
}

RayTracingShaderGroupCreateInfoKHR::operator VkRayTracingShaderGroupCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkRayTracingShaderGroupCreateInfoKHR *>(this);
}

RayTracingShaderGroupCreateInfoKHR::operator const VkRayTracingShaderGroupCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkRayTracingShaderGroupCreateInfoKHR *>(this);
}

RayTracingShaderGroupCreateInfoKHR::operator VkRayTracingShaderGroupCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkRayTracingShaderGroupCreateInfoKHR *>(this);
}

RayTracingPipelineCreateInfoNV::operator const VkRayTracingPipelineCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkRayTracingPipelineCreateInfoNV *>(this);
}

RayTracingPipelineCreateInfoNV::operator VkRayTracingPipelineCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkRayTracingPipelineCreateInfoNV *>(this);
}

RayTracingPipelineCreateInfoNV::operator const VkRayTracingPipelineCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkRayTracingPipelineCreateInfoNV *>(this);
}

RayTracingPipelineCreateInfoNV::operator VkRayTracingPipelineCreateInfoNV *() noexcept {
  return reinterpret_cast<VkRayTracingPipelineCreateInfoNV *>(this);
}

PipelineLibraryCreateInfoKHR::operator const VkPipelineLibraryCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkPipelineLibraryCreateInfoKHR *>(this);
}

PipelineLibraryCreateInfoKHR::operator VkPipelineLibraryCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkPipelineLibraryCreateInfoKHR *>(this);
}

PipelineLibraryCreateInfoKHR::operator const VkPipelineLibraryCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkPipelineLibraryCreateInfoKHR *>(this);
}

PipelineLibraryCreateInfoKHR::operator VkPipelineLibraryCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkPipelineLibraryCreateInfoKHR *>(this);
}

RayTracingPipelineInterfaceCreateInfoKHR::operator const VkRayTracingPipelineInterfaceCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkRayTracingPipelineInterfaceCreateInfoKHR *>(this);
}

RayTracingPipelineInterfaceCreateInfoKHR::operator VkRayTracingPipelineInterfaceCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkRayTracingPipelineInterfaceCreateInfoKHR *>(this);
}

RayTracingPipelineInterfaceCreateInfoKHR::operator const VkRayTracingPipelineInterfaceCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkRayTracingPipelineInterfaceCreateInfoKHR *>(this);
}

RayTracingPipelineInterfaceCreateInfoKHR::operator VkRayTracingPipelineInterfaceCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkRayTracingPipelineInterfaceCreateInfoKHR *>(this);
}

RayTracingPipelineCreateInfoKHR::operator const VkRayTracingPipelineCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkRayTracingPipelineCreateInfoKHR *>(this);
}

RayTracingPipelineCreateInfoKHR::operator VkRayTracingPipelineCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkRayTracingPipelineCreateInfoKHR *>(this);
}

RayTracingPipelineCreateInfoKHR::operator const VkRayTracingPipelineCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkRayTracingPipelineCreateInfoKHR *>(this);
}

RayTracingPipelineCreateInfoKHR::operator VkRayTracingPipelineCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkRayTracingPipelineCreateInfoKHR *>(this);
}

GeometryTrianglesNV::operator const VkGeometryTrianglesNV &() const noexcept {
  return *reinterpret_cast<const VkGeometryTrianglesNV *>(this);
}

GeometryTrianglesNV::operator VkGeometryTrianglesNV &() noexcept {
  return *reinterpret_cast<VkGeometryTrianglesNV *>(this);
}

GeometryTrianglesNV::operator const VkGeometryTrianglesNV *() const noexcept {
  return reinterpret_cast<const VkGeometryTrianglesNV *>(this);
}

GeometryTrianglesNV::operator VkGeometryTrianglesNV *() noexcept {
  return reinterpret_cast<VkGeometryTrianglesNV *>(this);
}

GeometryAABBNV::operator const VkGeometryAABBNV &() const noexcept {
  return *reinterpret_cast<const VkGeometryAABBNV *>(this);
}

GeometryAABBNV::operator VkGeometryAABBNV &() noexcept {
  return *reinterpret_cast<VkGeometryAABBNV *>(this);
}

GeometryAABBNV::operator const VkGeometryAABBNV *() const noexcept {
  return reinterpret_cast<const VkGeometryAABBNV *>(this);
}

GeometryAABBNV::operator VkGeometryAABBNV *() noexcept {
  return reinterpret_cast<VkGeometryAABBNV *>(this);
}

GeometryDataNV::operator const VkGeometryDataNV &() const noexcept {
  return *reinterpret_cast<const VkGeometryDataNV *>(this);
}

GeometryDataNV::operator VkGeometryDataNV &() noexcept {
  return *reinterpret_cast<VkGeometryDataNV *>(this);
}

GeometryDataNV::operator const VkGeometryDataNV *() const noexcept {
  return reinterpret_cast<const VkGeometryDataNV *>(this);
}

GeometryDataNV::operator VkGeometryDataNV *() noexcept {
  return reinterpret_cast<VkGeometryDataNV *>(this);
}

GeometryNV::operator const VkGeometryNV &() const noexcept {
  return *reinterpret_cast<const VkGeometryNV *>(this);
}

GeometryNV::operator VkGeometryNV &() noexcept {
  return *reinterpret_cast<VkGeometryNV *>(this);
}

GeometryNV::operator const VkGeometryNV *() const noexcept {
  return reinterpret_cast<const VkGeometryNV *>(this);
}

GeometryNV::operator VkGeometryNV *() noexcept {
  return reinterpret_cast<VkGeometryNV *>(this);
}

AccelerationStructureInfoNV::operator const VkAccelerationStructureInfoNV &() const noexcept {
  return *reinterpret_cast<const VkAccelerationStructureInfoNV *>(this);
}

AccelerationStructureInfoNV::operator VkAccelerationStructureInfoNV &() noexcept {
  return *reinterpret_cast<VkAccelerationStructureInfoNV *>(this);
}

AccelerationStructureInfoNV::operator const VkAccelerationStructureInfoNV *() const noexcept {
  return reinterpret_cast<const VkAccelerationStructureInfoNV *>(this);
}

AccelerationStructureInfoNV::operator VkAccelerationStructureInfoNV *() noexcept {
  return reinterpret_cast<VkAccelerationStructureInfoNV *>(this);
}

AccelerationStructureCreateInfoNV::operator const VkAccelerationStructureCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkAccelerationStructureCreateInfoNV *>(this);
}

AccelerationStructureCreateInfoNV::operator VkAccelerationStructureCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkAccelerationStructureCreateInfoNV *>(this);
}

AccelerationStructureCreateInfoNV::operator const VkAccelerationStructureCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkAccelerationStructureCreateInfoNV *>(this);
}

AccelerationStructureCreateInfoNV::operator VkAccelerationStructureCreateInfoNV *() noexcept {
  return reinterpret_cast<VkAccelerationStructureCreateInfoNV *>(this);
}

BindAccelerationStructureMemoryInfoNV::operator const VkBindAccelerationStructureMemoryInfoNV &() const noexcept {
  return *reinterpret_cast<const VkBindAccelerationStructureMemoryInfoNV *>(this);
}

BindAccelerationStructureMemoryInfoNV::operator VkBindAccelerationStructureMemoryInfoNV &() noexcept {
  return *reinterpret_cast<VkBindAccelerationStructureMemoryInfoNV *>(this);
}

BindAccelerationStructureMemoryInfoNV::operator const VkBindAccelerationStructureMemoryInfoNV *() const noexcept {
  return reinterpret_cast<const VkBindAccelerationStructureMemoryInfoNV *>(this);
}

BindAccelerationStructureMemoryInfoNV::operator VkBindAccelerationStructureMemoryInfoNV *() noexcept {
  return reinterpret_cast<VkBindAccelerationStructureMemoryInfoNV *>(this);
}

WriteDescriptorSetAccelerationStructureKHR::operator const VkWriteDescriptorSetAccelerationStructureKHR &() const noexcept {
  return *reinterpret_cast<const VkWriteDescriptorSetAccelerationStructureKHR *>(this);
}

WriteDescriptorSetAccelerationStructureKHR::operator VkWriteDescriptorSetAccelerationStructureKHR &() noexcept {
  return *reinterpret_cast<VkWriteDescriptorSetAccelerationStructureKHR *>(this);
}

WriteDescriptorSetAccelerationStructureKHR::operator const VkWriteDescriptorSetAccelerationStructureKHR *() const noexcept {
  return reinterpret_cast<const VkWriteDescriptorSetAccelerationStructureKHR *>(this);
}

WriteDescriptorSetAccelerationStructureKHR::operator VkWriteDescriptorSetAccelerationStructureKHR *() noexcept {
  return reinterpret_cast<VkWriteDescriptorSetAccelerationStructureKHR *>(this);
}

WriteDescriptorSetAccelerationStructureNV::operator const VkWriteDescriptorSetAccelerationStructureNV &() const noexcept {
  return *reinterpret_cast<const VkWriteDescriptorSetAccelerationStructureNV *>(this);
}

WriteDescriptorSetAccelerationStructureNV::operator VkWriteDescriptorSetAccelerationStructureNV &() noexcept {
  return *reinterpret_cast<VkWriteDescriptorSetAccelerationStructureNV *>(this);
}

WriteDescriptorSetAccelerationStructureNV::operator const VkWriteDescriptorSetAccelerationStructureNV *() const noexcept {
  return reinterpret_cast<const VkWriteDescriptorSetAccelerationStructureNV *>(this);
}

WriteDescriptorSetAccelerationStructureNV::operator VkWriteDescriptorSetAccelerationStructureNV *() noexcept {
  return reinterpret_cast<VkWriteDescriptorSetAccelerationStructureNV *>(this);
}

AccelerationStructureMemoryRequirementsInfoNV::operator const VkAccelerationStructureMemoryRequirementsInfoNV &() const noexcept {
  return *reinterpret_cast<const VkAccelerationStructureMemoryRequirementsInfoNV *>(this);
}

AccelerationStructureMemoryRequirementsInfoNV::operator VkAccelerationStructureMemoryRequirementsInfoNV &() noexcept {
  return *reinterpret_cast<VkAccelerationStructureMemoryRequirementsInfoNV *>(this);
}

AccelerationStructureMemoryRequirementsInfoNV::operator const VkAccelerationStructureMemoryRequirementsInfoNV *() const noexcept {
  return reinterpret_cast<const VkAccelerationStructureMemoryRequirementsInfoNV *>(this);
}

AccelerationStructureMemoryRequirementsInfoNV::operator VkAccelerationStructureMemoryRequirementsInfoNV *() noexcept {
  return reinterpret_cast<VkAccelerationStructureMemoryRequirementsInfoNV *>(this);
}

PhysicalDeviceAccelerationStructureFeaturesKHR::operator const VkPhysicalDeviceAccelerationStructureFeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceAccelerationStructureFeaturesKHR *>(this);
}

PhysicalDeviceAccelerationStructureFeaturesKHR::operator VkPhysicalDeviceAccelerationStructureFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceAccelerationStructureFeaturesKHR *>(this);
}

PhysicalDeviceAccelerationStructureFeaturesKHR::operator const VkPhysicalDeviceAccelerationStructureFeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceAccelerationStructureFeaturesKHR *>(this);
}

PhysicalDeviceAccelerationStructureFeaturesKHR::operator VkPhysicalDeviceAccelerationStructureFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceAccelerationStructureFeaturesKHR *>(this);
}

PhysicalDeviceRayTracingPipelineFeaturesKHR::operator const VkPhysicalDeviceRayTracingPipelineFeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceRayTracingPipelineFeaturesKHR *>(this);
}

PhysicalDeviceRayTracingPipelineFeaturesKHR::operator VkPhysicalDeviceRayTracingPipelineFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceRayTracingPipelineFeaturesKHR *>(this);
}

PhysicalDeviceRayTracingPipelineFeaturesKHR::operator const VkPhysicalDeviceRayTracingPipelineFeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceRayTracingPipelineFeaturesKHR *>(this);
}

PhysicalDeviceRayTracingPipelineFeaturesKHR::operator VkPhysicalDeviceRayTracingPipelineFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceRayTracingPipelineFeaturesKHR *>(this);
}

PhysicalDeviceRayQueryFeaturesKHR::operator const VkPhysicalDeviceRayQueryFeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceRayQueryFeaturesKHR *>(this);
}

PhysicalDeviceRayQueryFeaturesKHR::operator VkPhysicalDeviceRayQueryFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceRayQueryFeaturesKHR *>(this);
}

PhysicalDeviceRayQueryFeaturesKHR::operator const VkPhysicalDeviceRayQueryFeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceRayQueryFeaturesKHR *>(this);
}

PhysicalDeviceRayQueryFeaturesKHR::operator VkPhysicalDeviceRayQueryFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceRayQueryFeaturesKHR *>(this);
}

PhysicalDeviceAccelerationStructurePropertiesKHR::operator const VkPhysicalDeviceAccelerationStructurePropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceAccelerationStructurePropertiesKHR *>(this);
}

PhysicalDeviceAccelerationStructurePropertiesKHR::operator VkPhysicalDeviceAccelerationStructurePropertiesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceAccelerationStructurePropertiesKHR *>(this);
}

PhysicalDeviceAccelerationStructurePropertiesKHR::operator const VkPhysicalDeviceAccelerationStructurePropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceAccelerationStructurePropertiesKHR *>(this);
}

PhysicalDeviceAccelerationStructurePropertiesKHR::operator VkPhysicalDeviceAccelerationStructurePropertiesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceAccelerationStructurePropertiesKHR *>(this);
}

PhysicalDeviceRayTracingPipelinePropertiesKHR::operator const VkPhysicalDeviceRayTracingPipelinePropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceRayTracingPipelinePropertiesKHR *>(this);
}

PhysicalDeviceRayTracingPipelinePropertiesKHR::operator VkPhysicalDeviceRayTracingPipelinePropertiesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceRayTracingPipelinePropertiesKHR *>(this);
}

PhysicalDeviceRayTracingPipelinePropertiesKHR::operator const VkPhysicalDeviceRayTracingPipelinePropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceRayTracingPipelinePropertiesKHR *>(this);
}

PhysicalDeviceRayTracingPipelinePropertiesKHR::operator VkPhysicalDeviceRayTracingPipelinePropertiesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceRayTracingPipelinePropertiesKHR *>(this);
}

PhysicalDeviceRayTracingPropertiesNV::operator const VkPhysicalDeviceRayTracingPropertiesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceRayTracingPropertiesNV *>(this);
}

PhysicalDeviceRayTracingPropertiesNV::operator VkPhysicalDeviceRayTracingPropertiesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceRayTracingPropertiesNV *>(this);
}

PhysicalDeviceRayTracingPropertiesNV::operator const VkPhysicalDeviceRayTracingPropertiesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceRayTracingPropertiesNV *>(this);
}

PhysicalDeviceRayTracingPropertiesNV::operator VkPhysicalDeviceRayTracingPropertiesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceRayTracingPropertiesNV *>(this);
}

StridedDeviceAddressRegionKHR::operator const VkStridedDeviceAddressRegionKHR &() const noexcept {
  return *reinterpret_cast<const VkStridedDeviceAddressRegionKHR *>(this);
}

StridedDeviceAddressRegionKHR::operator VkStridedDeviceAddressRegionKHR &() noexcept {
  return *reinterpret_cast<VkStridedDeviceAddressRegionKHR *>(this);
}

StridedDeviceAddressRegionKHR::operator const VkStridedDeviceAddressRegionKHR *() const noexcept {
  return reinterpret_cast<const VkStridedDeviceAddressRegionKHR *>(this);
}

StridedDeviceAddressRegionKHR::operator VkStridedDeviceAddressRegionKHR *() noexcept {
  return reinterpret_cast<VkStridedDeviceAddressRegionKHR *>(this);
}

TraceRaysIndirectCommandKHR::operator const VkTraceRaysIndirectCommandKHR &() const noexcept {
  return *reinterpret_cast<const VkTraceRaysIndirectCommandKHR *>(this);
}

TraceRaysIndirectCommandKHR::operator VkTraceRaysIndirectCommandKHR &() noexcept {
  return *reinterpret_cast<VkTraceRaysIndirectCommandKHR *>(this);
}

TraceRaysIndirectCommandKHR::operator const VkTraceRaysIndirectCommandKHR *() const noexcept {
  return reinterpret_cast<const VkTraceRaysIndirectCommandKHR *>(this);
}

TraceRaysIndirectCommandKHR::operator VkTraceRaysIndirectCommandKHR *() noexcept {
  return reinterpret_cast<VkTraceRaysIndirectCommandKHR *>(this);
}

TraceRaysIndirectCommand2KHR::operator const VkTraceRaysIndirectCommand2KHR &() const noexcept {
  return *reinterpret_cast<const VkTraceRaysIndirectCommand2KHR *>(this);
}

TraceRaysIndirectCommand2KHR::operator VkTraceRaysIndirectCommand2KHR &() noexcept {
  return *reinterpret_cast<VkTraceRaysIndirectCommand2KHR *>(this);
}

TraceRaysIndirectCommand2KHR::operator const VkTraceRaysIndirectCommand2KHR *() const noexcept {
  return reinterpret_cast<const VkTraceRaysIndirectCommand2KHR *>(this);
}

TraceRaysIndirectCommand2KHR::operator VkTraceRaysIndirectCommand2KHR *() noexcept {
  return reinterpret_cast<VkTraceRaysIndirectCommand2KHR *>(this);
}

PhysicalDeviceRayTracingMaintenance1FeaturesKHR::operator const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *>(this);
}

PhysicalDeviceRayTracingMaintenance1FeaturesKHR::operator VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *>(this);
}

PhysicalDeviceRayTracingMaintenance1FeaturesKHR::operator const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *>(this);
}

PhysicalDeviceRayTracingMaintenance1FeaturesKHR::operator VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *>(this);
}

DrmFormatModifierPropertiesEXT::operator const VkDrmFormatModifierPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkDrmFormatModifierPropertiesEXT *>(this);
}

DrmFormatModifierPropertiesEXT::operator VkDrmFormatModifierPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkDrmFormatModifierPropertiesEXT *>(this);
}

DrmFormatModifierPropertiesEXT::operator const VkDrmFormatModifierPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkDrmFormatModifierPropertiesEXT *>(this);
}

DrmFormatModifierPropertiesEXT::operator VkDrmFormatModifierPropertiesEXT *() noexcept {
  return reinterpret_cast<VkDrmFormatModifierPropertiesEXT *>(this);
}

DrmFormatModifierPropertiesListEXT::operator const VkDrmFormatModifierPropertiesListEXT &() const noexcept {
  return *reinterpret_cast<const VkDrmFormatModifierPropertiesListEXT *>(this);
}

DrmFormatModifierPropertiesListEXT::operator VkDrmFormatModifierPropertiesListEXT &() noexcept {
  return *reinterpret_cast<VkDrmFormatModifierPropertiesListEXT *>(this);
}

DrmFormatModifierPropertiesListEXT::operator const VkDrmFormatModifierPropertiesListEXT *() const noexcept {
  return reinterpret_cast<const VkDrmFormatModifierPropertiesListEXT *>(this);
}

DrmFormatModifierPropertiesListEXT::operator VkDrmFormatModifierPropertiesListEXT *() noexcept {
  return reinterpret_cast<VkDrmFormatModifierPropertiesListEXT *>(this);
}

PhysicalDeviceImageDrmFormatModifierInfoEXT::operator const VkPhysicalDeviceImageDrmFormatModifierInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceImageDrmFormatModifierInfoEXT *>(this);
}

PhysicalDeviceImageDrmFormatModifierInfoEXT::operator VkPhysicalDeviceImageDrmFormatModifierInfoEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceImageDrmFormatModifierInfoEXT *>(this);
}

PhysicalDeviceImageDrmFormatModifierInfoEXT::operator const VkPhysicalDeviceImageDrmFormatModifierInfoEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceImageDrmFormatModifierInfoEXT *>(this);
}

PhysicalDeviceImageDrmFormatModifierInfoEXT::operator VkPhysicalDeviceImageDrmFormatModifierInfoEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceImageDrmFormatModifierInfoEXT *>(this);
}

ImageDrmFormatModifierListCreateInfoEXT::operator const VkImageDrmFormatModifierListCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkImageDrmFormatModifierListCreateInfoEXT *>(this);
}

ImageDrmFormatModifierListCreateInfoEXT::operator VkImageDrmFormatModifierListCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkImageDrmFormatModifierListCreateInfoEXT *>(this);
}

ImageDrmFormatModifierListCreateInfoEXT::operator const VkImageDrmFormatModifierListCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkImageDrmFormatModifierListCreateInfoEXT *>(this);
}

ImageDrmFormatModifierListCreateInfoEXT::operator VkImageDrmFormatModifierListCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkImageDrmFormatModifierListCreateInfoEXT *>(this);
}

ImageDrmFormatModifierExplicitCreateInfoEXT::operator const VkImageDrmFormatModifierExplicitCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkImageDrmFormatModifierExplicitCreateInfoEXT *>(this);
}

ImageDrmFormatModifierExplicitCreateInfoEXT::operator VkImageDrmFormatModifierExplicitCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkImageDrmFormatModifierExplicitCreateInfoEXT *>(this);
}

ImageDrmFormatModifierExplicitCreateInfoEXT::operator const VkImageDrmFormatModifierExplicitCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkImageDrmFormatModifierExplicitCreateInfoEXT *>(this);
}

ImageDrmFormatModifierExplicitCreateInfoEXT::operator VkImageDrmFormatModifierExplicitCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkImageDrmFormatModifierExplicitCreateInfoEXT *>(this);
}

ImageDrmFormatModifierPropertiesEXT::operator const VkImageDrmFormatModifierPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkImageDrmFormatModifierPropertiesEXT *>(this);
}

ImageDrmFormatModifierPropertiesEXT::operator VkImageDrmFormatModifierPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkImageDrmFormatModifierPropertiesEXT *>(this);
}

ImageDrmFormatModifierPropertiesEXT::operator const VkImageDrmFormatModifierPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkImageDrmFormatModifierPropertiesEXT *>(this);
}

ImageDrmFormatModifierPropertiesEXT::operator VkImageDrmFormatModifierPropertiesEXT *() noexcept {
  return reinterpret_cast<VkImageDrmFormatModifierPropertiesEXT *>(this);
}

ImageStencilUsageCreateInfo::operator const VkImageStencilUsageCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkImageStencilUsageCreateInfo *>(this);
}

ImageStencilUsageCreateInfo::operator VkImageStencilUsageCreateInfo &() noexcept {
  return *reinterpret_cast<VkImageStencilUsageCreateInfo *>(this);
}

ImageStencilUsageCreateInfo::operator const VkImageStencilUsageCreateInfo *() const noexcept {
  return reinterpret_cast<const VkImageStencilUsageCreateInfo *>(this);
}

ImageStencilUsageCreateInfo::operator VkImageStencilUsageCreateInfo *() noexcept {
  return reinterpret_cast<VkImageStencilUsageCreateInfo *>(this);
}

DeviceMemoryOverallocationCreateInfoAMD::operator const VkDeviceMemoryOverallocationCreateInfoAMD &() const noexcept {
  return *reinterpret_cast<const VkDeviceMemoryOverallocationCreateInfoAMD *>(this);
}

DeviceMemoryOverallocationCreateInfoAMD::operator VkDeviceMemoryOverallocationCreateInfoAMD &() noexcept {
  return *reinterpret_cast<VkDeviceMemoryOverallocationCreateInfoAMD *>(this);
}

DeviceMemoryOverallocationCreateInfoAMD::operator const VkDeviceMemoryOverallocationCreateInfoAMD *() const noexcept {
  return reinterpret_cast<const VkDeviceMemoryOverallocationCreateInfoAMD *>(this);
}

DeviceMemoryOverallocationCreateInfoAMD::operator VkDeviceMemoryOverallocationCreateInfoAMD *() noexcept {
  return reinterpret_cast<VkDeviceMemoryOverallocationCreateInfoAMD *>(this);
}

PhysicalDeviceFragmentDensityMapFeaturesEXT::operator const VkPhysicalDeviceFragmentDensityMapFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapFeaturesEXT *>(this);
}

PhysicalDeviceFragmentDensityMapFeaturesEXT::operator VkPhysicalDeviceFragmentDensityMapFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceFragmentDensityMapFeaturesEXT *>(this);
}

PhysicalDeviceFragmentDensityMapFeaturesEXT::operator const VkPhysicalDeviceFragmentDensityMapFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapFeaturesEXT *>(this);
}

PhysicalDeviceFragmentDensityMapFeaturesEXT::operator VkPhysicalDeviceFragmentDensityMapFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceFragmentDensityMapFeaturesEXT *>(this);
}

PhysicalDeviceFragmentDensityMap2FeaturesEXT::operator const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *>(this);
}

PhysicalDeviceFragmentDensityMap2FeaturesEXT::operator VkPhysicalDeviceFragmentDensityMap2FeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *>(this);
}

PhysicalDeviceFragmentDensityMap2FeaturesEXT::operator const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *>(this);
}

PhysicalDeviceFragmentDensityMap2FeaturesEXT::operator VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *>(this);
}

PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM::operator const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM *>(this);
}

PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM::operator VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM *>(this);
}

PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM::operator const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM *>(this);
}

PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM::operator VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM *>(this);
}

PhysicalDeviceFragmentDensityMapPropertiesEXT::operator const VkPhysicalDeviceFragmentDensityMapPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapPropertiesEXT *>(this);
}

PhysicalDeviceFragmentDensityMapPropertiesEXT::operator VkPhysicalDeviceFragmentDensityMapPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceFragmentDensityMapPropertiesEXT *>(this);
}

PhysicalDeviceFragmentDensityMapPropertiesEXT::operator const VkPhysicalDeviceFragmentDensityMapPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapPropertiesEXT *>(this);
}

PhysicalDeviceFragmentDensityMapPropertiesEXT::operator VkPhysicalDeviceFragmentDensityMapPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceFragmentDensityMapPropertiesEXT *>(this);
}

PhysicalDeviceFragmentDensityMap2PropertiesEXT::operator const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT *>(this);
}

PhysicalDeviceFragmentDensityMap2PropertiesEXT::operator VkPhysicalDeviceFragmentDensityMap2PropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceFragmentDensityMap2PropertiesEXT *>(this);
}

PhysicalDeviceFragmentDensityMap2PropertiesEXT::operator const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT *>(this);
}

PhysicalDeviceFragmentDensityMap2PropertiesEXT::operator VkPhysicalDeviceFragmentDensityMap2PropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceFragmentDensityMap2PropertiesEXT *>(this);
}

PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM::operator const VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM *>(this);
}

PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM::operator VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM *>(this);
}

PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM::operator const VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM *>(this);
}

PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM::operator VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM *>(this);
}

RenderPassFragmentDensityMapCreateInfoEXT::operator const VkRenderPassFragmentDensityMapCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkRenderPassFragmentDensityMapCreateInfoEXT *>(this);
}

RenderPassFragmentDensityMapCreateInfoEXT::operator VkRenderPassFragmentDensityMapCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkRenderPassFragmentDensityMapCreateInfoEXT *>(this);
}

RenderPassFragmentDensityMapCreateInfoEXT::operator const VkRenderPassFragmentDensityMapCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkRenderPassFragmentDensityMapCreateInfoEXT *>(this);
}

RenderPassFragmentDensityMapCreateInfoEXT::operator VkRenderPassFragmentDensityMapCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkRenderPassFragmentDensityMapCreateInfoEXT *>(this);
}

SubpassFragmentDensityMapOffsetEndInfoQCOM::operator const VkSubpassFragmentDensityMapOffsetEndInfoQCOM &() const noexcept {
  return *reinterpret_cast<const VkSubpassFragmentDensityMapOffsetEndInfoQCOM *>(this);
}

SubpassFragmentDensityMapOffsetEndInfoQCOM::operator VkSubpassFragmentDensityMapOffsetEndInfoQCOM &() noexcept {
  return *reinterpret_cast<VkSubpassFragmentDensityMapOffsetEndInfoQCOM *>(this);
}

SubpassFragmentDensityMapOffsetEndInfoQCOM::operator const VkSubpassFragmentDensityMapOffsetEndInfoQCOM *() const noexcept {
  return reinterpret_cast<const VkSubpassFragmentDensityMapOffsetEndInfoQCOM *>(this);
}

SubpassFragmentDensityMapOffsetEndInfoQCOM::operator VkSubpassFragmentDensityMapOffsetEndInfoQCOM *() noexcept {
  return reinterpret_cast<VkSubpassFragmentDensityMapOffsetEndInfoQCOM *>(this);
}

PhysicalDeviceScalarBlockLayoutFeatures::operator const VkPhysicalDeviceScalarBlockLayoutFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceScalarBlockLayoutFeatures *>(this);
}

PhysicalDeviceScalarBlockLayoutFeatures::operator VkPhysicalDeviceScalarBlockLayoutFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceScalarBlockLayoutFeatures *>(this);
}

PhysicalDeviceScalarBlockLayoutFeatures::operator const VkPhysicalDeviceScalarBlockLayoutFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceScalarBlockLayoutFeatures *>(this);
}

PhysicalDeviceScalarBlockLayoutFeatures::operator VkPhysicalDeviceScalarBlockLayoutFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceScalarBlockLayoutFeatures *>(this);
}

SurfaceProtectedCapabilitiesKHR::operator const VkSurfaceProtectedCapabilitiesKHR &() const noexcept {
  return *reinterpret_cast<const VkSurfaceProtectedCapabilitiesKHR *>(this);
}

SurfaceProtectedCapabilitiesKHR::operator VkSurfaceProtectedCapabilitiesKHR &() noexcept {
  return *reinterpret_cast<VkSurfaceProtectedCapabilitiesKHR *>(this);
}

SurfaceProtectedCapabilitiesKHR::operator const VkSurfaceProtectedCapabilitiesKHR *() const noexcept {
  return reinterpret_cast<const VkSurfaceProtectedCapabilitiesKHR *>(this);
}

SurfaceProtectedCapabilitiesKHR::operator VkSurfaceProtectedCapabilitiesKHR *() noexcept {
  return reinterpret_cast<VkSurfaceProtectedCapabilitiesKHR *>(this);
}

PhysicalDeviceUniformBufferStandardLayoutFeatures::operator const VkPhysicalDeviceUniformBufferStandardLayoutFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceUniformBufferStandardLayoutFeatures *>(this);
}

PhysicalDeviceUniformBufferStandardLayoutFeatures::operator VkPhysicalDeviceUniformBufferStandardLayoutFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceUniformBufferStandardLayoutFeatures *>(this);
}

PhysicalDeviceUniformBufferStandardLayoutFeatures::operator const VkPhysicalDeviceUniformBufferStandardLayoutFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceUniformBufferStandardLayoutFeatures *>(this);
}

PhysicalDeviceUniformBufferStandardLayoutFeatures::operator VkPhysicalDeviceUniformBufferStandardLayoutFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceUniformBufferStandardLayoutFeatures *>(this);
}

PhysicalDeviceDepthClipEnableFeaturesEXT::operator const VkPhysicalDeviceDepthClipEnableFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDepthClipEnableFeaturesEXT *>(this);
}

PhysicalDeviceDepthClipEnableFeaturesEXT::operator VkPhysicalDeviceDepthClipEnableFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDepthClipEnableFeaturesEXT *>(this);
}

PhysicalDeviceDepthClipEnableFeaturesEXT::operator const VkPhysicalDeviceDepthClipEnableFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDepthClipEnableFeaturesEXT *>(this);
}

PhysicalDeviceDepthClipEnableFeaturesEXT::operator VkPhysicalDeviceDepthClipEnableFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDepthClipEnableFeaturesEXT *>(this);
}

PipelineRasterizationDepthClipStateCreateInfoEXT::operator const VkPipelineRasterizationDepthClipStateCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkPipelineRasterizationDepthClipStateCreateInfoEXT *>(this);
}

PipelineRasterizationDepthClipStateCreateInfoEXT::operator VkPipelineRasterizationDepthClipStateCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkPipelineRasterizationDepthClipStateCreateInfoEXT *>(this);
}

PipelineRasterizationDepthClipStateCreateInfoEXT::operator const VkPipelineRasterizationDepthClipStateCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkPipelineRasterizationDepthClipStateCreateInfoEXT *>(this);
}

PipelineRasterizationDepthClipStateCreateInfoEXT::operator VkPipelineRasterizationDepthClipStateCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkPipelineRasterizationDepthClipStateCreateInfoEXT *>(this);
}

PhysicalDeviceMemoryBudgetPropertiesEXT::operator const VkPhysicalDeviceMemoryBudgetPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMemoryBudgetPropertiesEXT *>(this);
}

PhysicalDeviceMemoryBudgetPropertiesEXT::operator VkPhysicalDeviceMemoryBudgetPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMemoryBudgetPropertiesEXT *>(this);
}

PhysicalDeviceMemoryBudgetPropertiesEXT::operator const VkPhysicalDeviceMemoryBudgetPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMemoryBudgetPropertiesEXT *>(this);
}

PhysicalDeviceMemoryBudgetPropertiesEXT::operator VkPhysicalDeviceMemoryBudgetPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMemoryBudgetPropertiesEXT *>(this);
}

PhysicalDeviceMemoryPriorityFeaturesEXT::operator const VkPhysicalDeviceMemoryPriorityFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMemoryPriorityFeaturesEXT *>(this);
}

PhysicalDeviceMemoryPriorityFeaturesEXT::operator VkPhysicalDeviceMemoryPriorityFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMemoryPriorityFeaturesEXT *>(this);
}

PhysicalDeviceMemoryPriorityFeaturesEXT::operator const VkPhysicalDeviceMemoryPriorityFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMemoryPriorityFeaturesEXT *>(this);
}

PhysicalDeviceMemoryPriorityFeaturesEXT::operator VkPhysicalDeviceMemoryPriorityFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMemoryPriorityFeaturesEXT *>(this);
}

MemoryPriorityAllocateInfoEXT::operator const VkMemoryPriorityAllocateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkMemoryPriorityAllocateInfoEXT *>(this);
}

MemoryPriorityAllocateInfoEXT::operator VkMemoryPriorityAllocateInfoEXT &() noexcept {
  return *reinterpret_cast<VkMemoryPriorityAllocateInfoEXT *>(this);
}

MemoryPriorityAllocateInfoEXT::operator const VkMemoryPriorityAllocateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkMemoryPriorityAllocateInfoEXT *>(this);
}

MemoryPriorityAllocateInfoEXT::operator VkMemoryPriorityAllocateInfoEXT *() noexcept {
  return reinterpret_cast<VkMemoryPriorityAllocateInfoEXT *>(this);
}

PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT::operator const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *>(this);
}

PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT::operator VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *>(this);
}

PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT::operator const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *>(this);
}

PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT::operator VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *>(this);
}

PhysicalDeviceBufferDeviceAddressFeatures::operator const VkPhysicalDeviceBufferDeviceAddressFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceBufferDeviceAddressFeatures *>(this);
}

PhysicalDeviceBufferDeviceAddressFeatures::operator VkPhysicalDeviceBufferDeviceAddressFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceBufferDeviceAddressFeatures *>(this);
}

PhysicalDeviceBufferDeviceAddressFeatures::operator const VkPhysicalDeviceBufferDeviceAddressFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceBufferDeviceAddressFeatures *>(this);
}

PhysicalDeviceBufferDeviceAddressFeatures::operator VkPhysicalDeviceBufferDeviceAddressFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceBufferDeviceAddressFeatures *>(this);
}

PhysicalDeviceBufferDeviceAddressFeaturesEXT::operator const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *>(this);
}

PhysicalDeviceBufferDeviceAddressFeaturesEXT::operator VkPhysicalDeviceBufferDeviceAddressFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *>(this);
}

PhysicalDeviceBufferDeviceAddressFeaturesEXT::operator const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *>(this);
}

PhysicalDeviceBufferDeviceAddressFeaturesEXT::operator VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *>(this);
}

BufferDeviceAddressInfo::operator const VkBufferDeviceAddressInfo &() const noexcept {
  return *reinterpret_cast<const VkBufferDeviceAddressInfo *>(this);
}

BufferDeviceAddressInfo::operator VkBufferDeviceAddressInfo &() noexcept {
  return *reinterpret_cast<VkBufferDeviceAddressInfo *>(this);
}

BufferDeviceAddressInfo::operator const VkBufferDeviceAddressInfo *() const noexcept {
  return reinterpret_cast<const VkBufferDeviceAddressInfo *>(this);
}

BufferDeviceAddressInfo::operator VkBufferDeviceAddressInfo *() noexcept {
  return reinterpret_cast<VkBufferDeviceAddressInfo *>(this);
}

BufferOpaqueCaptureAddressCreateInfo::operator const VkBufferOpaqueCaptureAddressCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkBufferOpaqueCaptureAddressCreateInfo *>(this);
}

BufferOpaqueCaptureAddressCreateInfo::operator VkBufferOpaqueCaptureAddressCreateInfo &() noexcept {
  return *reinterpret_cast<VkBufferOpaqueCaptureAddressCreateInfo *>(this);
}

BufferOpaqueCaptureAddressCreateInfo::operator const VkBufferOpaqueCaptureAddressCreateInfo *() const noexcept {
  return reinterpret_cast<const VkBufferOpaqueCaptureAddressCreateInfo *>(this);
}

BufferOpaqueCaptureAddressCreateInfo::operator VkBufferOpaqueCaptureAddressCreateInfo *() noexcept {
  return reinterpret_cast<VkBufferOpaqueCaptureAddressCreateInfo *>(this);
}

BufferDeviceAddressCreateInfoEXT::operator const VkBufferDeviceAddressCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkBufferDeviceAddressCreateInfoEXT *>(this);
}

BufferDeviceAddressCreateInfoEXT::operator VkBufferDeviceAddressCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkBufferDeviceAddressCreateInfoEXT *>(this);
}

BufferDeviceAddressCreateInfoEXT::operator const VkBufferDeviceAddressCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkBufferDeviceAddressCreateInfoEXT *>(this);
}

BufferDeviceAddressCreateInfoEXT::operator VkBufferDeviceAddressCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkBufferDeviceAddressCreateInfoEXT *>(this);
}

PhysicalDeviceImageViewImageFormatInfoEXT::operator const VkPhysicalDeviceImageViewImageFormatInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceImageViewImageFormatInfoEXT *>(this);
}

PhysicalDeviceImageViewImageFormatInfoEXT::operator VkPhysicalDeviceImageViewImageFormatInfoEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceImageViewImageFormatInfoEXT *>(this);
}

PhysicalDeviceImageViewImageFormatInfoEXT::operator const VkPhysicalDeviceImageViewImageFormatInfoEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceImageViewImageFormatInfoEXT *>(this);
}

PhysicalDeviceImageViewImageFormatInfoEXT::operator VkPhysicalDeviceImageViewImageFormatInfoEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceImageViewImageFormatInfoEXT *>(this);
}

FilterCubicImageViewImageFormatPropertiesEXT::operator const VkFilterCubicImageViewImageFormatPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkFilterCubicImageViewImageFormatPropertiesEXT *>(this);
}

FilterCubicImageViewImageFormatPropertiesEXT::operator VkFilterCubicImageViewImageFormatPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkFilterCubicImageViewImageFormatPropertiesEXT *>(this);
}

FilterCubicImageViewImageFormatPropertiesEXT::operator const VkFilterCubicImageViewImageFormatPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkFilterCubicImageViewImageFormatPropertiesEXT *>(this);
}

FilterCubicImageViewImageFormatPropertiesEXT::operator VkFilterCubicImageViewImageFormatPropertiesEXT *() noexcept {
  return reinterpret_cast<VkFilterCubicImageViewImageFormatPropertiesEXT *>(this);
}

PhysicalDeviceImagelessFramebufferFeatures::operator const VkPhysicalDeviceImagelessFramebufferFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceImagelessFramebufferFeatures *>(this);
}

PhysicalDeviceImagelessFramebufferFeatures::operator VkPhysicalDeviceImagelessFramebufferFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceImagelessFramebufferFeatures *>(this);
}

PhysicalDeviceImagelessFramebufferFeatures::operator const VkPhysicalDeviceImagelessFramebufferFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceImagelessFramebufferFeatures *>(this);
}

PhysicalDeviceImagelessFramebufferFeatures::operator VkPhysicalDeviceImagelessFramebufferFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceImagelessFramebufferFeatures *>(this);
}

FramebufferAttachmentImageInfo::operator const VkFramebufferAttachmentImageInfo &() const noexcept {
  return *reinterpret_cast<const VkFramebufferAttachmentImageInfo *>(this);
}

FramebufferAttachmentImageInfo::operator VkFramebufferAttachmentImageInfo &() noexcept {
  return *reinterpret_cast<VkFramebufferAttachmentImageInfo *>(this);
}

FramebufferAttachmentImageInfo::operator const VkFramebufferAttachmentImageInfo *() const noexcept {
  return reinterpret_cast<const VkFramebufferAttachmentImageInfo *>(this);
}

FramebufferAttachmentImageInfo::operator VkFramebufferAttachmentImageInfo *() noexcept {
  return reinterpret_cast<VkFramebufferAttachmentImageInfo *>(this);
}

FramebufferAttachmentsCreateInfo::operator const VkFramebufferAttachmentsCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkFramebufferAttachmentsCreateInfo *>(this);
}

FramebufferAttachmentsCreateInfo::operator VkFramebufferAttachmentsCreateInfo &() noexcept {
  return *reinterpret_cast<VkFramebufferAttachmentsCreateInfo *>(this);
}

FramebufferAttachmentsCreateInfo::operator const VkFramebufferAttachmentsCreateInfo *() const noexcept {
  return reinterpret_cast<const VkFramebufferAttachmentsCreateInfo *>(this);
}

FramebufferAttachmentsCreateInfo::operator VkFramebufferAttachmentsCreateInfo *() noexcept {
  return reinterpret_cast<VkFramebufferAttachmentsCreateInfo *>(this);
}

RenderPassAttachmentBeginInfo::operator const VkRenderPassAttachmentBeginInfo &() const noexcept {
  return *reinterpret_cast<const VkRenderPassAttachmentBeginInfo *>(this);
}

RenderPassAttachmentBeginInfo::operator VkRenderPassAttachmentBeginInfo &() noexcept {
  return *reinterpret_cast<VkRenderPassAttachmentBeginInfo *>(this);
}

RenderPassAttachmentBeginInfo::operator const VkRenderPassAttachmentBeginInfo *() const noexcept {
  return reinterpret_cast<const VkRenderPassAttachmentBeginInfo *>(this);
}

RenderPassAttachmentBeginInfo::operator VkRenderPassAttachmentBeginInfo *() noexcept {
  return reinterpret_cast<VkRenderPassAttachmentBeginInfo *>(this);
}

PhysicalDeviceTextureCompressionASTCHDRFeatures::operator const VkPhysicalDeviceTextureCompressionASTCHDRFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceTextureCompressionASTCHDRFeatures *>(this);
}

PhysicalDeviceTextureCompressionASTCHDRFeatures::operator VkPhysicalDeviceTextureCompressionASTCHDRFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceTextureCompressionASTCHDRFeatures *>(this);
}

PhysicalDeviceTextureCompressionASTCHDRFeatures::operator const VkPhysicalDeviceTextureCompressionASTCHDRFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceTextureCompressionASTCHDRFeatures *>(this);
}

PhysicalDeviceTextureCompressionASTCHDRFeatures::operator VkPhysicalDeviceTextureCompressionASTCHDRFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceTextureCompressionASTCHDRFeatures *>(this);
}

PhysicalDeviceCooperativeMatrixFeaturesNV::operator const VkPhysicalDeviceCooperativeMatrixFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixFeaturesNV *>(this);
}

PhysicalDeviceCooperativeMatrixFeaturesNV::operator VkPhysicalDeviceCooperativeMatrixFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceCooperativeMatrixFeaturesNV *>(this);
}

PhysicalDeviceCooperativeMatrixFeaturesNV::operator const VkPhysicalDeviceCooperativeMatrixFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixFeaturesNV *>(this);
}

PhysicalDeviceCooperativeMatrixFeaturesNV::operator VkPhysicalDeviceCooperativeMatrixFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceCooperativeMatrixFeaturesNV *>(this);
}

PhysicalDeviceCooperativeMatrixPropertiesNV::operator const VkPhysicalDeviceCooperativeMatrixPropertiesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixPropertiesNV *>(this);
}

PhysicalDeviceCooperativeMatrixPropertiesNV::operator VkPhysicalDeviceCooperativeMatrixPropertiesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceCooperativeMatrixPropertiesNV *>(this);
}

PhysicalDeviceCooperativeMatrixPropertiesNV::operator const VkPhysicalDeviceCooperativeMatrixPropertiesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixPropertiesNV *>(this);
}

PhysicalDeviceCooperativeMatrixPropertiesNV::operator VkPhysicalDeviceCooperativeMatrixPropertiesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceCooperativeMatrixPropertiesNV *>(this);
}

CooperativeMatrixPropertiesNV::operator const VkCooperativeMatrixPropertiesNV &() const noexcept {
  return *reinterpret_cast<const VkCooperativeMatrixPropertiesNV *>(this);
}

CooperativeMatrixPropertiesNV::operator VkCooperativeMatrixPropertiesNV &() noexcept {
  return *reinterpret_cast<VkCooperativeMatrixPropertiesNV *>(this);
}

CooperativeMatrixPropertiesNV::operator const VkCooperativeMatrixPropertiesNV *() const noexcept {
  return reinterpret_cast<const VkCooperativeMatrixPropertiesNV *>(this);
}

CooperativeMatrixPropertiesNV::operator VkCooperativeMatrixPropertiesNV *() noexcept {
  return reinterpret_cast<VkCooperativeMatrixPropertiesNV *>(this);
}

PhysicalDeviceYcbcrImageArraysFeaturesEXT::operator const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *>(this);
}

PhysicalDeviceYcbcrImageArraysFeaturesEXT::operator VkPhysicalDeviceYcbcrImageArraysFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *>(this);
}

PhysicalDeviceYcbcrImageArraysFeaturesEXT::operator const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *>(this);
}

PhysicalDeviceYcbcrImageArraysFeaturesEXT::operator VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *>(this);
}

ImageViewHandleInfoNVX::operator const VkImageViewHandleInfoNVX &() const noexcept {
  return *reinterpret_cast<const VkImageViewHandleInfoNVX *>(this);
}

ImageViewHandleInfoNVX::operator VkImageViewHandleInfoNVX &() noexcept {
  return *reinterpret_cast<VkImageViewHandleInfoNVX *>(this);
}

ImageViewHandleInfoNVX::operator const VkImageViewHandleInfoNVX *() const noexcept {
  return reinterpret_cast<const VkImageViewHandleInfoNVX *>(this);
}

ImageViewHandleInfoNVX::operator VkImageViewHandleInfoNVX *() noexcept {
  return reinterpret_cast<VkImageViewHandleInfoNVX *>(this);
}

ImageViewAddressPropertiesNVX::operator const VkImageViewAddressPropertiesNVX &() const noexcept {
  return *reinterpret_cast<const VkImageViewAddressPropertiesNVX *>(this);
}

ImageViewAddressPropertiesNVX::operator VkImageViewAddressPropertiesNVX &() noexcept {
  return *reinterpret_cast<VkImageViewAddressPropertiesNVX *>(this);
}

ImageViewAddressPropertiesNVX::operator const VkImageViewAddressPropertiesNVX *() const noexcept {
  return reinterpret_cast<const VkImageViewAddressPropertiesNVX *>(this);
}

ImageViewAddressPropertiesNVX::operator VkImageViewAddressPropertiesNVX *() noexcept {
  return reinterpret_cast<VkImageViewAddressPropertiesNVX *>(this);
}

PipelineCreationFeedback::operator const VkPipelineCreationFeedback &() const noexcept {
  return *reinterpret_cast<const VkPipelineCreationFeedback *>(this);
}

PipelineCreationFeedback::operator VkPipelineCreationFeedback &() noexcept {
  return *reinterpret_cast<VkPipelineCreationFeedback *>(this);
}

PipelineCreationFeedback::operator const VkPipelineCreationFeedback *() const noexcept {
  return reinterpret_cast<const VkPipelineCreationFeedback *>(this);
}

PipelineCreationFeedback::operator VkPipelineCreationFeedback *() noexcept {
  return reinterpret_cast<VkPipelineCreationFeedback *>(this);
}

PipelineCreationFeedbackCreateInfo::operator const VkPipelineCreationFeedbackCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkPipelineCreationFeedbackCreateInfo *>(this);
}

PipelineCreationFeedbackCreateInfo::operator VkPipelineCreationFeedbackCreateInfo &() noexcept {
  return *reinterpret_cast<VkPipelineCreationFeedbackCreateInfo *>(this);
}

PipelineCreationFeedbackCreateInfo::operator const VkPipelineCreationFeedbackCreateInfo *() const noexcept {
  return reinterpret_cast<const VkPipelineCreationFeedbackCreateInfo *>(this);
}

PipelineCreationFeedbackCreateInfo::operator VkPipelineCreationFeedbackCreateInfo *() noexcept {
  return reinterpret_cast<VkPipelineCreationFeedbackCreateInfo *>(this);
}

PhysicalDevicePresentBarrierFeaturesNV::operator const VkPhysicalDevicePresentBarrierFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDevicePresentBarrierFeaturesNV *>(this);
}

PhysicalDevicePresentBarrierFeaturesNV::operator VkPhysicalDevicePresentBarrierFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDevicePresentBarrierFeaturesNV *>(this);
}

PhysicalDevicePresentBarrierFeaturesNV::operator const VkPhysicalDevicePresentBarrierFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDevicePresentBarrierFeaturesNV *>(this);
}

PhysicalDevicePresentBarrierFeaturesNV::operator VkPhysicalDevicePresentBarrierFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDevicePresentBarrierFeaturesNV *>(this);
}

SurfaceCapabilitiesPresentBarrierNV::operator const VkSurfaceCapabilitiesPresentBarrierNV &() const noexcept {
  return *reinterpret_cast<const VkSurfaceCapabilitiesPresentBarrierNV *>(this);
}

SurfaceCapabilitiesPresentBarrierNV::operator VkSurfaceCapabilitiesPresentBarrierNV &() noexcept {
  return *reinterpret_cast<VkSurfaceCapabilitiesPresentBarrierNV *>(this);
}

SurfaceCapabilitiesPresentBarrierNV::operator const VkSurfaceCapabilitiesPresentBarrierNV *() const noexcept {
  return reinterpret_cast<const VkSurfaceCapabilitiesPresentBarrierNV *>(this);
}

SurfaceCapabilitiesPresentBarrierNV::operator VkSurfaceCapabilitiesPresentBarrierNV *() noexcept {
  return reinterpret_cast<VkSurfaceCapabilitiesPresentBarrierNV *>(this);
}

SwapchainPresentBarrierCreateInfoNV::operator const VkSwapchainPresentBarrierCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkSwapchainPresentBarrierCreateInfoNV *>(this);
}

SwapchainPresentBarrierCreateInfoNV::operator VkSwapchainPresentBarrierCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkSwapchainPresentBarrierCreateInfoNV *>(this);
}

SwapchainPresentBarrierCreateInfoNV::operator const VkSwapchainPresentBarrierCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkSwapchainPresentBarrierCreateInfoNV *>(this);
}

SwapchainPresentBarrierCreateInfoNV::operator VkSwapchainPresentBarrierCreateInfoNV *() noexcept {
  return reinterpret_cast<VkSwapchainPresentBarrierCreateInfoNV *>(this);
}

PhysicalDevicePerformanceQueryFeaturesKHR::operator const VkPhysicalDevicePerformanceQueryFeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDevicePerformanceQueryFeaturesKHR *>(this);
}

PhysicalDevicePerformanceQueryFeaturesKHR::operator VkPhysicalDevicePerformanceQueryFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDevicePerformanceQueryFeaturesKHR *>(this);
}

PhysicalDevicePerformanceQueryFeaturesKHR::operator const VkPhysicalDevicePerformanceQueryFeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDevicePerformanceQueryFeaturesKHR *>(this);
}

PhysicalDevicePerformanceQueryFeaturesKHR::operator VkPhysicalDevicePerformanceQueryFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDevicePerformanceQueryFeaturesKHR *>(this);
}

PhysicalDevicePerformanceQueryPropertiesKHR::operator const VkPhysicalDevicePerformanceQueryPropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDevicePerformanceQueryPropertiesKHR *>(this);
}

PhysicalDevicePerformanceQueryPropertiesKHR::operator VkPhysicalDevicePerformanceQueryPropertiesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDevicePerformanceQueryPropertiesKHR *>(this);
}

PhysicalDevicePerformanceQueryPropertiesKHR::operator const VkPhysicalDevicePerformanceQueryPropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDevicePerformanceQueryPropertiesKHR *>(this);
}

PhysicalDevicePerformanceQueryPropertiesKHR::operator VkPhysicalDevicePerformanceQueryPropertiesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDevicePerformanceQueryPropertiesKHR *>(this);
}

PerformanceCounterKHR::operator const VkPerformanceCounterKHR &() const noexcept {
  return *reinterpret_cast<const VkPerformanceCounterKHR *>(this);
}

PerformanceCounterKHR::operator VkPerformanceCounterKHR &() noexcept {
  return *reinterpret_cast<VkPerformanceCounterKHR *>(this);
}

PerformanceCounterKHR::operator const VkPerformanceCounterKHR *() const noexcept {
  return reinterpret_cast<const VkPerformanceCounterKHR *>(this);
}

PerformanceCounterKHR::operator VkPerformanceCounterKHR *() noexcept {
  return reinterpret_cast<VkPerformanceCounterKHR *>(this);
}

PerformanceCounterDescriptionKHR::operator const VkPerformanceCounterDescriptionKHR &() const noexcept {
  return *reinterpret_cast<const VkPerformanceCounterDescriptionKHR *>(this);
}

PerformanceCounterDescriptionKHR::operator VkPerformanceCounterDescriptionKHR &() noexcept {
  return *reinterpret_cast<VkPerformanceCounterDescriptionKHR *>(this);
}

PerformanceCounterDescriptionKHR::operator const VkPerformanceCounterDescriptionKHR *() const noexcept {
  return reinterpret_cast<const VkPerformanceCounterDescriptionKHR *>(this);
}

PerformanceCounterDescriptionKHR::operator VkPerformanceCounterDescriptionKHR *() noexcept {
  return reinterpret_cast<VkPerformanceCounterDescriptionKHR *>(this);
}

QueryPoolPerformanceCreateInfoKHR::operator const VkQueryPoolPerformanceCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkQueryPoolPerformanceCreateInfoKHR *>(this);
}

QueryPoolPerformanceCreateInfoKHR::operator VkQueryPoolPerformanceCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkQueryPoolPerformanceCreateInfoKHR *>(this);
}

QueryPoolPerformanceCreateInfoKHR::operator const VkQueryPoolPerformanceCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkQueryPoolPerformanceCreateInfoKHR *>(this);
}

QueryPoolPerformanceCreateInfoKHR::operator VkQueryPoolPerformanceCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkQueryPoolPerformanceCreateInfoKHR *>(this);
}

AcquireProfilingLockInfoKHR::operator const VkAcquireProfilingLockInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkAcquireProfilingLockInfoKHR *>(this);
}

AcquireProfilingLockInfoKHR::operator VkAcquireProfilingLockInfoKHR &() noexcept {
  return *reinterpret_cast<VkAcquireProfilingLockInfoKHR *>(this);
}

AcquireProfilingLockInfoKHR::operator const VkAcquireProfilingLockInfoKHR *() const noexcept {
  return reinterpret_cast<const VkAcquireProfilingLockInfoKHR *>(this);
}

AcquireProfilingLockInfoKHR::operator VkAcquireProfilingLockInfoKHR *() noexcept {
  return reinterpret_cast<VkAcquireProfilingLockInfoKHR *>(this);
}

PerformanceQuerySubmitInfoKHR::operator const VkPerformanceQuerySubmitInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkPerformanceQuerySubmitInfoKHR *>(this);
}

PerformanceQuerySubmitInfoKHR::operator VkPerformanceQuerySubmitInfoKHR &() noexcept {
  return *reinterpret_cast<VkPerformanceQuerySubmitInfoKHR *>(this);
}

PerformanceQuerySubmitInfoKHR::operator const VkPerformanceQuerySubmitInfoKHR *() const noexcept {
  return reinterpret_cast<const VkPerformanceQuerySubmitInfoKHR *>(this);
}

PerformanceQuerySubmitInfoKHR::operator VkPerformanceQuerySubmitInfoKHR *() noexcept {
  return reinterpret_cast<VkPerformanceQuerySubmitInfoKHR *>(this);
}

HeadlessSurfaceCreateInfoEXT::operator const VkHeadlessSurfaceCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkHeadlessSurfaceCreateInfoEXT *>(this);
}

HeadlessSurfaceCreateInfoEXT::operator VkHeadlessSurfaceCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkHeadlessSurfaceCreateInfoEXT *>(this);
}

HeadlessSurfaceCreateInfoEXT::operator const VkHeadlessSurfaceCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkHeadlessSurfaceCreateInfoEXT *>(this);
}

HeadlessSurfaceCreateInfoEXT::operator VkHeadlessSurfaceCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkHeadlessSurfaceCreateInfoEXT *>(this);
}

PhysicalDeviceCoverageReductionModeFeaturesNV::operator const VkPhysicalDeviceCoverageReductionModeFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceCoverageReductionModeFeaturesNV *>(this);
}

PhysicalDeviceCoverageReductionModeFeaturesNV::operator VkPhysicalDeviceCoverageReductionModeFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceCoverageReductionModeFeaturesNV *>(this);
}

PhysicalDeviceCoverageReductionModeFeaturesNV::operator const VkPhysicalDeviceCoverageReductionModeFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceCoverageReductionModeFeaturesNV *>(this);
}

PhysicalDeviceCoverageReductionModeFeaturesNV::operator VkPhysicalDeviceCoverageReductionModeFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceCoverageReductionModeFeaturesNV *>(this);
}

PipelineCoverageReductionStateCreateInfoNV::operator const VkPipelineCoverageReductionStateCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkPipelineCoverageReductionStateCreateInfoNV *>(this);
}

PipelineCoverageReductionStateCreateInfoNV::operator VkPipelineCoverageReductionStateCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkPipelineCoverageReductionStateCreateInfoNV *>(this);
}

PipelineCoverageReductionStateCreateInfoNV::operator const VkPipelineCoverageReductionStateCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkPipelineCoverageReductionStateCreateInfoNV *>(this);
}

PipelineCoverageReductionStateCreateInfoNV::operator VkPipelineCoverageReductionStateCreateInfoNV *() noexcept {
  return reinterpret_cast<VkPipelineCoverageReductionStateCreateInfoNV *>(this);
}

FramebufferMixedSamplesCombinationNV::operator const VkFramebufferMixedSamplesCombinationNV &() const noexcept {
  return *reinterpret_cast<const VkFramebufferMixedSamplesCombinationNV *>(this);
}

FramebufferMixedSamplesCombinationNV::operator VkFramebufferMixedSamplesCombinationNV &() noexcept {
  return *reinterpret_cast<VkFramebufferMixedSamplesCombinationNV *>(this);
}

FramebufferMixedSamplesCombinationNV::operator const VkFramebufferMixedSamplesCombinationNV *() const noexcept {
  return reinterpret_cast<const VkFramebufferMixedSamplesCombinationNV *>(this);
}

FramebufferMixedSamplesCombinationNV::operator VkFramebufferMixedSamplesCombinationNV *() noexcept {
  return reinterpret_cast<VkFramebufferMixedSamplesCombinationNV *>(this);
}

PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL::operator const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *>(this);
}

PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL::operator VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *>(this);
}

PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL::operator const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *>(this);
}

PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL::operator VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *>(this);
}

PerformanceValueINTEL::operator const VkPerformanceValueINTEL &() const noexcept {
  return *reinterpret_cast<const VkPerformanceValueINTEL *>(this);
}

PerformanceValueINTEL::operator VkPerformanceValueINTEL &() noexcept {
  return *reinterpret_cast<VkPerformanceValueINTEL *>(this);
}

PerformanceValueINTEL::operator const VkPerformanceValueINTEL *() const noexcept {
  return reinterpret_cast<const VkPerformanceValueINTEL *>(this);
}

PerformanceValueINTEL::operator VkPerformanceValueINTEL *() noexcept {
  return reinterpret_cast<VkPerformanceValueINTEL *>(this);
}

InitializePerformanceApiInfoINTEL::operator const VkInitializePerformanceApiInfoINTEL &() const noexcept {
  return *reinterpret_cast<const VkInitializePerformanceApiInfoINTEL *>(this);
}

InitializePerformanceApiInfoINTEL::operator VkInitializePerformanceApiInfoINTEL &() noexcept {
  return *reinterpret_cast<VkInitializePerformanceApiInfoINTEL *>(this);
}

InitializePerformanceApiInfoINTEL::operator const VkInitializePerformanceApiInfoINTEL *() const noexcept {
  return reinterpret_cast<const VkInitializePerformanceApiInfoINTEL *>(this);
}

InitializePerformanceApiInfoINTEL::operator VkInitializePerformanceApiInfoINTEL *() noexcept {
  return reinterpret_cast<VkInitializePerformanceApiInfoINTEL *>(this);
}

QueryPoolPerformanceQueryCreateInfoINTEL::operator const VkQueryPoolPerformanceQueryCreateInfoINTEL &() const noexcept {
  return *reinterpret_cast<const VkQueryPoolPerformanceQueryCreateInfoINTEL *>(this);
}

QueryPoolPerformanceQueryCreateInfoINTEL::operator VkQueryPoolPerformanceQueryCreateInfoINTEL &() noexcept {
  return *reinterpret_cast<VkQueryPoolPerformanceQueryCreateInfoINTEL *>(this);
}

QueryPoolPerformanceQueryCreateInfoINTEL::operator const VkQueryPoolPerformanceQueryCreateInfoINTEL *() const noexcept {
  return reinterpret_cast<const VkQueryPoolPerformanceQueryCreateInfoINTEL *>(this);
}

QueryPoolPerformanceQueryCreateInfoINTEL::operator VkQueryPoolPerformanceQueryCreateInfoINTEL *() noexcept {
  return reinterpret_cast<VkQueryPoolPerformanceQueryCreateInfoINTEL *>(this);
}

PerformanceMarkerInfoINTEL::operator const VkPerformanceMarkerInfoINTEL &() const noexcept {
  return *reinterpret_cast<const VkPerformanceMarkerInfoINTEL *>(this);
}

PerformanceMarkerInfoINTEL::operator VkPerformanceMarkerInfoINTEL &() noexcept {
  return *reinterpret_cast<VkPerformanceMarkerInfoINTEL *>(this);
}

PerformanceMarkerInfoINTEL::operator const VkPerformanceMarkerInfoINTEL *() const noexcept {
  return reinterpret_cast<const VkPerformanceMarkerInfoINTEL *>(this);
}

PerformanceMarkerInfoINTEL::operator VkPerformanceMarkerInfoINTEL *() noexcept {
  return reinterpret_cast<VkPerformanceMarkerInfoINTEL *>(this);
}

PerformanceStreamMarkerInfoINTEL::operator const VkPerformanceStreamMarkerInfoINTEL &() const noexcept {
  return *reinterpret_cast<const VkPerformanceStreamMarkerInfoINTEL *>(this);
}

PerformanceStreamMarkerInfoINTEL::operator VkPerformanceStreamMarkerInfoINTEL &() noexcept {
  return *reinterpret_cast<VkPerformanceStreamMarkerInfoINTEL *>(this);
}

PerformanceStreamMarkerInfoINTEL::operator const VkPerformanceStreamMarkerInfoINTEL *() const noexcept {
  return reinterpret_cast<const VkPerformanceStreamMarkerInfoINTEL *>(this);
}

PerformanceStreamMarkerInfoINTEL::operator VkPerformanceStreamMarkerInfoINTEL *() noexcept {
  return reinterpret_cast<VkPerformanceStreamMarkerInfoINTEL *>(this);
}

PerformanceOverrideInfoINTEL::operator const VkPerformanceOverrideInfoINTEL &() const noexcept {
  return *reinterpret_cast<const VkPerformanceOverrideInfoINTEL *>(this);
}

PerformanceOverrideInfoINTEL::operator VkPerformanceOverrideInfoINTEL &() noexcept {
  return *reinterpret_cast<VkPerformanceOverrideInfoINTEL *>(this);
}

PerformanceOverrideInfoINTEL::operator const VkPerformanceOverrideInfoINTEL *() const noexcept {
  return reinterpret_cast<const VkPerformanceOverrideInfoINTEL *>(this);
}

PerformanceOverrideInfoINTEL::operator VkPerformanceOverrideInfoINTEL *() noexcept {
  return reinterpret_cast<VkPerformanceOverrideInfoINTEL *>(this);
}

PerformanceConfigurationAcquireInfoINTEL::operator const VkPerformanceConfigurationAcquireInfoINTEL &() const noexcept {
  return *reinterpret_cast<const VkPerformanceConfigurationAcquireInfoINTEL *>(this);
}

PerformanceConfigurationAcquireInfoINTEL::operator VkPerformanceConfigurationAcquireInfoINTEL &() noexcept {
  return *reinterpret_cast<VkPerformanceConfigurationAcquireInfoINTEL *>(this);
}

PerformanceConfigurationAcquireInfoINTEL::operator const VkPerformanceConfigurationAcquireInfoINTEL *() const noexcept {
  return reinterpret_cast<const VkPerformanceConfigurationAcquireInfoINTEL *>(this);
}

PerformanceConfigurationAcquireInfoINTEL::operator VkPerformanceConfigurationAcquireInfoINTEL *() noexcept {
  return reinterpret_cast<VkPerformanceConfigurationAcquireInfoINTEL *>(this);
}

PhysicalDeviceShaderClockFeaturesKHR::operator const VkPhysicalDeviceShaderClockFeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderClockFeaturesKHR *>(this);
}

PhysicalDeviceShaderClockFeaturesKHR::operator VkPhysicalDeviceShaderClockFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderClockFeaturesKHR *>(this);
}

PhysicalDeviceShaderClockFeaturesKHR::operator const VkPhysicalDeviceShaderClockFeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderClockFeaturesKHR *>(this);
}

PhysicalDeviceShaderClockFeaturesKHR::operator VkPhysicalDeviceShaderClockFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderClockFeaturesKHR *>(this);
}

PhysicalDeviceIndexTypeUint8FeaturesKHR::operator const VkPhysicalDeviceIndexTypeUint8FeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceIndexTypeUint8FeaturesKHR *>(this);
}

PhysicalDeviceIndexTypeUint8FeaturesKHR::operator VkPhysicalDeviceIndexTypeUint8FeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceIndexTypeUint8FeaturesKHR *>(this);
}

PhysicalDeviceIndexTypeUint8FeaturesKHR::operator const VkPhysicalDeviceIndexTypeUint8FeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceIndexTypeUint8FeaturesKHR *>(this);
}

PhysicalDeviceIndexTypeUint8FeaturesKHR::operator VkPhysicalDeviceIndexTypeUint8FeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceIndexTypeUint8FeaturesKHR *>(this);
}

PhysicalDeviceShaderSMBuiltinsPropertiesNV::operator const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV *>(this);
}

PhysicalDeviceShaderSMBuiltinsPropertiesNV::operator VkPhysicalDeviceShaderSMBuiltinsPropertiesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV *>(this);
}

PhysicalDeviceShaderSMBuiltinsPropertiesNV::operator const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV *>(this);
}

PhysicalDeviceShaderSMBuiltinsPropertiesNV::operator VkPhysicalDeviceShaderSMBuiltinsPropertiesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV *>(this);
}

PhysicalDeviceShaderSMBuiltinsFeaturesNV::operator const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *>(this);
}

PhysicalDeviceShaderSMBuiltinsFeaturesNV::operator VkPhysicalDeviceShaderSMBuiltinsFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *>(this);
}

PhysicalDeviceShaderSMBuiltinsFeaturesNV::operator const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *>(this);
}

PhysicalDeviceShaderSMBuiltinsFeaturesNV::operator VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *>(this);
}

PhysicalDeviceFragmentShaderInterlockFeaturesEXT::operator const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *>(this);
}

PhysicalDeviceFragmentShaderInterlockFeaturesEXT::operator VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *>(this);
}

PhysicalDeviceFragmentShaderInterlockFeaturesEXT::operator const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *>(this);
}

PhysicalDeviceFragmentShaderInterlockFeaturesEXT::operator VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *>(this);
}

PhysicalDeviceSeparateDepthStencilLayoutsFeatures::operator const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *>(this);
}

PhysicalDeviceSeparateDepthStencilLayoutsFeatures::operator VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *>(this);
}

PhysicalDeviceSeparateDepthStencilLayoutsFeatures::operator const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *>(this);
}

PhysicalDeviceSeparateDepthStencilLayoutsFeatures::operator VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *>(this);
}

AttachmentReferenceStencilLayout::operator const VkAttachmentReferenceStencilLayout &() const noexcept {
  return *reinterpret_cast<const VkAttachmentReferenceStencilLayout *>(this);
}

AttachmentReferenceStencilLayout::operator VkAttachmentReferenceStencilLayout &() noexcept {
  return *reinterpret_cast<VkAttachmentReferenceStencilLayout *>(this);
}

AttachmentReferenceStencilLayout::operator const VkAttachmentReferenceStencilLayout *() const noexcept {
  return reinterpret_cast<const VkAttachmentReferenceStencilLayout *>(this);
}

AttachmentReferenceStencilLayout::operator VkAttachmentReferenceStencilLayout *() noexcept {
  return reinterpret_cast<VkAttachmentReferenceStencilLayout *>(this);
}

PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT::operator const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *>(this);
}

PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT::operator VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *>(this);
}

PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT::operator const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *>(this);
}

PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT::operator VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *>(this);
}

AttachmentDescriptionStencilLayout::operator const VkAttachmentDescriptionStencilLayout &() const noexcept {
  return *reinterpret_cast<const VkAttachmentDescriptionStencilLayout *>(this);
}

AttachmentDescriptionStencilLayout::operator VkAttachmentDescriptionStencilLayout &() noexcept {
  return *reinterpret_cast<VkAttachmentDescriptionStencilLayout *>(this);
}

AttachmentDescriptionStencilLayout::operator const VkAttachmentDescriptionStencilLayout *() const noexcept {
  return reinterpret_cast<const VkAttachmentDescriptionStencilLayout *>(this);
}

AttachmentDescriptionStencilLayout::operator VkAttachmentDescriptionStencilLayout *() noexcept {
  return reinterpret_cast<VkAttachmentDescriptionStencilLayout *>(this);
}

PhysicalDevicePipelineExecutablePropertiesFeaturesKHR::operator const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *>(this);
}

PhysicalDevicePipelineExecutablePropertiesFeaturesKHR::operator VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *>(this);
}

PhysicalDevicePipelineExecutablePropertiesFeaturesKHR::operator const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *>(this);
}

PhysicalDevicePipelineExecutablePropertiesFeaturesKHR::operator VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *>(this);
}

PipelineInfoKHR::operator const VkPipelineInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkPipelineInfoKHR *>(this);
}

PipelineInfoKHR::operator VkPipelineInfoKHR &() noexcept {
  return *reinterpret_cast<VkPipelineInfoKHR *>(this);
}

PipelineInfoKHR::operator const VkPipelineInfoKHR *() const noexcept {
  return reinterpret_cast<const VkPipelineInfoKHR *>(this);
}

PipelineInfoKHR::operator VkPipelineInfoKHR *() noexcept {
  return reinterpret_cast<VkPipelineInfoKHR *>(this);
}

PipelineExecutablePropertiesKHR::operator const VkPipelineExecutablePropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkPipelineExecutablePropertiesKHR *>(this);
}

PipelineExecutablePropertiesKHR::operator VkPipelineExecutablePropertiesKHR &() noexcept {
  return *reinterpret_cast<VkPipelineExecutablePropertiesKHR *>(this);
}

PipelineExecutablePropertiesKHR::operator const VkPipelineExecutablePropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkPipelineExecutablePropertiesKHR *>(this);
}

PipelineExecutablePropertiesKHR::operator VkPipelineExecutablePropertiesKHR *() noexcept {
  return reinterpret_cast<VkPipelineExecutablePropertiesKHR *>(this);
}

PipelineExecutableInfoKHR::operator const VkPipelineExecutableInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkPipelineExecutableInfoKHR *>(this);
}

PipelineExecutableInfoKHR::operator VkPipelineExecutableInfoKHR &() noexcept {
  return *reinterpret_cast<VkPipelineExecutableInfoKHR *>(this);
}

PipelineExecutableInfoKHR::operator const VkPipelineExecutableInfoKHR *() const noexcept {
  return reinterpret_cast<const VkPipelineExecutableInfoKHR *>(this);
}

PipelineExecutableInfoKHR::operator VkPipelineExecutableInfoKHR *() noexcept {
  return reinterpret_cast<VkPipelineExecutableInfoKHR *>(this);
}

PipelineExecutableStatisticKHR::operator const VkPipelineExecutableStatisticKHR &() const noexcept {
  return *reinterpret_cast<const VkPipelineExecutableStatisticKHR *>(this);
}

PipelineExecutableStatisticKHR::operator VkPipelineExecutableStatisticKHR &() noexcept {
  return *reinterpret_cast<VkPipelineExecutableStatisticKHR *>(this);
}

PipelineExecutableStatisticKHR::operator const VkPipelineExecutableStatisticKHR *() const noexcept {
  return reinterpret_cast<const VkPipelineExecutableStatisticKHR *>(this);
}

PipelineExecutableStatisticKHR::operator VkPipelineExecutableStatisticKHR *() noexcept {
  return reinterpret_cast<VkPipelineExecutableStatisticKHR *>(this);
}

PipelineExecutableInternalRepresentationKHR::operator const VkPipelineExecutableInternalRepresentationKHR &() const noexcept {
  return *reinterpret_cast<const VkPipelineExecutableInternalRepresentationKHR *>(this);
}

PipelineExecutableInternalRepresentationKHR::operator VkPipelineExecutableInternalRepresentationKHR &() noexcept {
  return *reinterpret_cast<VkPipelineExecutableInternalRepresentationKHR *>(this);
}

PipelineExecutableInternalRepresentationKHR::operator const VkPipelineExecutableInternalRepresentationKHR *() const noexcept {
  return reinterpret_cast<const VkPipelineExecutableInternalRepresentationKHR *>(this);
}

PipelineExecutableInternalRepresentationKHR::operator VkPipelineExecutableInternalRepresentationKHR *() noexcept {
  return reinterpret_cast<VkPipelineExecutableInternalRepresentationKHR *>(this);
}

PhysicalDeviceShaderDemoteToHelperInvocationFeatures::operator const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *>(this);
}

PhysicalDeviceShaderDemoteToHelperInvocationFeatures::operator VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *>(this);
}

PhysicalDeviceShaderDemoteToHelperInvocationFeatures::operator const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *>(this);
}

PhysicalDeviceShaderDemoteToHelperInvocationFeatures::operator VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *>(this);
}

PhysicalDeviceTexelBufferAlignmentFeaturesEXT::operator const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *>(this);
}

PhysicalDeviceTexelBufferAlignmentFeaturesEXT::operator VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *>(this);
}

PhysicalDeviceTexelBufferAlignmentFeaturesEXT::operator const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *>(this);
}

PhysicalDeviceTexelBufferAlignmentFeaturesEXT::operator VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *>(this);
}

PhysicalDeviceTexelBufferAlignmentProperties::operator const VkPhysicalDeviceTexelBufferAlignmentProperties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceTexelBufferAlignmentProperties *>(this);
}

PhysicalDeviceTexelBufferAlignmentProperties::operator VkPhysicalDeviceTexelBufferAlignmentProperties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceTexelBufferAlignmentProperties *>(this);
}

PhysicalDeviceTexelBufferAlignmentProperties::operator const VkPhysicalDeviceTexelBufferAlignmentProperties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceTexelBufferAlignmentProperties *>(this);
}

PhysicalDeviceTexelBufferAlignmentProperties::operator VkPhysicalDeviceTexelBufferAlignmentProperties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceTexelBufferAlignmentProperties *>(this);
}

PhysicalDeviceSubgroupSizeControlFeatures::operator const VkPhysicalDeviceSubgroupSizeControlFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceSubgroupSizeControlFeatures *>(this);
}

PhysicalDeviceSubgroupSizeControlFeatures::operator VkPhysicalDeviceSubgroupSizeControlFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceSubgroupSizeControlFeatures *>(this);
}

PhysicalDeviceSubgroupSizeControlFeatures::operator const VkPhysicalDeviceSubgroupSizeControlFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceSubgroupSizeControlFeatures *>(this);
}

PhysicalDeviceSubgroupSizeControlFeatures::operator VkPhysicalDeviceSubgroupSizeControlFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceSubgroupSizeControlFeatures *>(this);
}

PhysicalDeviceSubgroupSizeControlProperties::operator const VkPhysicalDeviceSubgroupSizeControlProperties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceSubgroupSizeControlProperties *>(this);
}

PhysicalDeviceSubgroupSizeControlProperties::operator VkPhysicalDeviceSubgroupSizeControlProperties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceSubgroupSizeControlProperties *>(this);
}

PhysicalDeviceSubgroupSizeControlProperties::operator const VkPhysicalDeviceSubgroupSizeControlProperties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceSubgroupSizeControlProperties *>(this);
}

PhysicalDeviceSubgroupSizeControlProperties::operator VkPhysicalDeviceSubgroupSizeControlProperties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceSubgroupSizeControlProperties *>(this);
}

PipelineShaderStageRequiredSubgroupSizeCreateInfo::operator const VkPipelineShaderStageRequiredSubgroupSizeCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkPipelineShaderStageRequiredSubgroupSizeCreateInfo *>(this);
}

PipelineShaderStageRequiredSubgroupSizeCreateInfo::operator VkPipelineShaderStageRequiredSubgroupSizeCreateInfo &() noexcept {
  return *reinterpret_cast<VkPipelineShaderStageRequiredSubgroupSizeCreateInfo *>(this);
}

PipelineShaderStageRequiredSubgroupSizeCreateInfo::operator const VkPipelineShaderStageRequiredSubgroupSizeCreateInfo *() const noexcept {
  return reinterpret_cast<const VkPipelineShaderStageRequiredSubgroupSizeCreateInfo *>(this);
}

PipelineShaderStageRequiredSubgroupSizeCreateInfo::operator VkPipelineShaderStageRequiredSubgroupSizeCreateInfo *() noexcept {
  return reinterpret_cast<VkPipelineShaderStageRequiredSubgroupSizeCreateInfo *>(this);
}

SubpassShadingPipelineCreateInfoHUAWEI::operator const VkSubpassShadingPipelineCreateInfoHUAWEI &() const noexcept {
  return *reinterpret_cast<const VkSubpassShadingPipelineCreateInfoHUAWEI *>(this);
}

SubpassShadingPipelineCreateInfoHUAWEI::operator VkSubpassShadingPipelineCreateInfoHUAWEI &() noexcept {
  return *reinterpret_cast<VkSubpassShadingPipelineCreateInfoHUAWEI *>(this);
}

SubpassShadingPipelineCreateInfoHUAWEI::operator const VkSubpassShadingPipelineCreateInfoHUAWEI *() const noexcept {
  return reinterpret_cast<const VkSubpassShadingPipelineCreateInfoHUAWEI *>(this);
}

SubpassShadingPipelineCreateInfoHUAWEI::operator VkSubpassShadingPipelineCreateInfoHUAWEI *() noexcept {
  return reinterpret_cast<VkSubpassShadingPipelineCreateInfoHUAWEI *>(this);
}

PhysicalDeviceSubpassShadingPropertiesHUAWEI::operator const VkPhysicalDeviceSubpassShadingPropertiesHUAWEI &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceSubpassShadingPropertiesHUAWEI *>(this);
}

PhysicalDeviceSubpassShadingPropertiesHUAWEI::operator VkPhysicalDeviceSubpassShadingPropertiesHUAWEI &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceSubpassShadingPropertiesHUAWEI *>(this);
}

PhysicalDeviceSubpassShadingPropertiesHUAWEI::operator const VkPhysicalDeviceSubpassShadingPropertiesHUAWEI *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceSubpassShadingPropertiesHUAWEI *>(this);
}

PhysicalDeviceSubpassShadingPropertiesHUAWEI::operator VkPhysicalDeviceSubpassShadingPropertiesHUAWEI *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceSubpassShadingPropertiesHUAWEI *>(this);
}

PhysicalDeviceClusterCullingShaderPropertiesHUAWEI::operator const VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI *>(this);
}

PhysicalDeviceClusterCullingShaderPropertiesHUAWEI::operator VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI *>(this);
}

PhysicalDeviceClusterCullingShaderPropertiesHUAWEI::operator const VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI *>(this);
}

PhysicalDeviceClusterCullingShaderPropertiesHUAWEI::operator VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI *>(this);
}

MemoryOpaqueCaptureAddressAllocateInfo::operator const VkMemoryOpaqueCaptureAddressAllocateInfo &() const noexcept {
  return *reinterpret_cast<const VkMemoryOpaqueCaptureAddressAllocateInfo *>(this);
}

MemoryOpaqueCaptureAddressAllocateInfo::operator VkMemoryOpaqueCaptureAddressAllocateInfo &() noexcept {
  return *reinterpret_cast<VkMemoryOpaqueCaptureAddressAllocateInfo *>(this);
}

MemoryOpaqueCaptureAddressAllocateInfo::operator const VkMemoryOpaqueCaptureAddressAllocateInfo *() const noexcept {
  return reinterpret_cast<const VkMemoryOpaqueCaptureAddressAllocateInfo *>(this);
}

MemoryOpaqueCaptureAddressAllocateInfo::operator VkMemoryOpaqueCaptureAddressAllocateInfo *() noexcept {
  return reinterpret_cast<VkMemoryOpaqueCaptureAddressAllocateInfo *>(this);
}

DeviceMemoryOpaqueCaptureAddressInfo::operator const VkDeviceMemoryOpaqueCaptureAddressInfo &() const noexcept {
  return *reinterpret_cast<const VkDeviceMemoryOpaqueCaptureAddressInfo *>(this);
}

DeviceMemoryOpaqueCaptureAddressInfo::operator VkDeviceMemoryOpaqueCaptureAddressInfo &() noexcept {
  return *reinterpret_cast<VkDeviceMemoryOpaqueCaptureAddressInfo *>(this);
}

DeviceMemoryOpaqueCaptureAddressInfo::operator const VkDeviceMemoryOpaqueCaptureAddressInfo *() const noexcept {
  return reinterpret_cast<const VkDeviceMemoryOpaqueCaptureAddressInfo *>(this);
}

DeviceMemoryOpaqueCaptureAddressInfo::operator VkDeviceMemoryOpaqueCaptureAddressInfo *() noexcept {
  return reinterpret_cast<VkDeviceMemoryOpaqueCaptureAddressInfo *>(this);
}

PhysicalDeviceLineRasterizationFeaturesKHR::operator const VkPhysicalDeviceLineRasterizationFeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceLineRasterizationFeaturesKHR *>(this);
}

PhysicalDeviceLineRasterizationFeaturesKHR::operator VkPhysicalDeviceLineRasterizationFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceLineRasterizationFeaturesKHR *>(this);
}

PhysicalDeviceLineRasterizationFeaturesKHR::operator const VkPhysicalDeviceLineRasterizationFeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceLineRasterizationFeaturesKHR *>(this);
}

PhysicalDeviceLineRasterizationFeaturesKHR::operator VkPhysicalDeviceLineRasterizationFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceLineRasterizationFeaturesKHR *>(this);
}

PhysicalDeviceLineRasterizationPropertiesKHR::operator const VkPhysicalDeviceLineRasterizationPropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceLineRasterizationPropertiesKHR *>(this);
}

PhysicalDeviceLineRasterizationPropertiesKHR::operator VkPhysicalDeviceLineRasterizationPropertiesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceLineRasterizationPropertiesKHR *>(this);
}

PhysicalDeviceLineRasterizationPropertiesKHR::operator const VkPhysicalDeviceLineRasterizationPropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceLineRasterizationPropertiesKHR *>(this);
}

PhysicalDeviceLineRasterizationPropertiesKHR::operator VkPhysicalDeviceLineRasterizationPropertiesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceLineRasterizationPropertiesKHR *>(this);
}

PipelineRasterizationLineStateCreateInfoKHR::operator const VkPipelineRasterizationLineStateCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkPipelineRasterizationLineStateCreateInfoKHR *>(this);
}

PipelineRasterizationLineStateCreateInfoKHR::operator VkPipelineRasterizationLineStateCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkPipelineRasterizationLineStateCreateInfoKHR *>(this);
}

PipelineRasterizationLineStateCreateInfoKHR::operator const VkPipelineRasterizationLineStateCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkPipelineRasterizationLineStateCreateInfoKHR *>(this);
}

PipelineRasterizationLineStateCreateInfoKHR::operator VkPipelineRasterizationLineStateCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkPipelineRasterizationLineStateCreateInfoKHR *>(this);
}

PhysicalDevicePipelineCreationCacheControlFeatures::operator const VkPhysicalDevicePipelineCreationCacheControlFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDevicePipelineCreationCacheControlFeatures *>(this);
}

PhysicalDevicePipelineCreationCacheControlFeatures::operator VkPhysicalDevicePipelineCreationCacheControlFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDevicePipelineCreationCacheControlFeatures *>(this);
}

PhysicalDevicePipelineCreationCacheControlFeatures::operator const VkPhysicalDevicePipelineCreationCacheControlFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDevicePipelineCreationCacheControlFeatures *>(this);
}

PhysicalDevicePipelineCreationCacheControlFeatures::operator VkPhysicalDevicePipelineCreationCacheControlFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDevicePipelineCreationCacheControlFeatures *>(this);
}

PhysicalDeviceVulkan11Features::operator const VkPhysicalDeviceVulkan11Features &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceVulkan11Features *>(this);
}

PhysicalDeviceVulkan11Features::operator VkPhysicalDeviceVulkan11Features &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceVulkan11Features *>(this);
}

PhysicalDeviceVulkan11Features::operator const VkPhysicalDeviceVulkan11Features *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceVulkan11Features *>(this);
}

PhysicalDeviceVulkan11Features::operator VkPhysicalDeviceVulkan11Features *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceVulkan11Features *>(this);
}

PhysicalDeviceVulkan11Properties::operator const VkPhysicalDeviceVulkan11Properties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceVulkan11Properties *>(this);
}

PhysicalDeviceVulkan11Properties::operator VkPhysicalDeviceVulkan11Properties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceVulkan11Properties *>(this);
}

PhysicalDeviceVulkan11Properties::operator const VkPhysicalDeviceVulkan11Properties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceVulkan11Properties *>(this);
}

PhysicalDeviceVulkan11Properties::operator VkPhysicalDeviceVulkan11Properties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceVulkan11Properties *>(this);
}

PhysicalDeviceVulkan12Features::operator const VkPhysicalDeviceVulkan12Features &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceVulkan12Features *>(this);
}

PhysicalDeviceVulkan12Features::operator VkPhysicalDeviceVulkan12Features &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceVulkan12Features *>(this);
}

PhysicalDeviceVulkan12Features::operator const VkPhysicalDeviceVulkan12Features *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceVulkan12Features *>(this);
}

PhysicalDeviceVulkan12Features::operator VkPhysicalDeviceVulkan12Features *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceVulkan12Features *>(this);
}

PhysicalDeviceVulkan12Properties::operator const VkPhysicalDeviceVulkan12Properties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceVulkan12Properties *>(this);
}

PhysicalDeviceVulkan12Properties::operator VkPhysicalDeviceVulkan12Properties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceVulkan12Properties *>(this);
}

PhysicalDeviceVulkan12Properties::operator const VkPhysicalDeviceVulkan12Properties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceVulkan12Properties *>(this);
}

PhysicalDeviceVulkan12Properties::operator VkPhysicalDeviceVulkan12Properties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceVulkan12Properties *>(this);
}

PhysicalDeviceVulkan13Features::operator const VkPhysicalDeviceVulkan13Features &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceVulkan13Features *>(this);
}

PhysicalDeviceVulkan13Features::operator VkPhysicalDeviceVulkan13Features &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceVulkan13Features *>(this);
}

PhysicalDeviceVulkan13Features::operator const VkPhysicalDeviceVulkan13Features *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceVulkan13Features *>(this);
}

PhysicalDeviceVulkan13Features::operator VkPhysicalDeviceVulkan13Features *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceVulkan13Features *>(this);
}

PhysicalDeviceVulkan13Properties::operator const VkPhysicalDeviceVulkan13Properties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceVulkan13Properties *>(this);
}

PhysicalDeviceVulkan13Properties::operator VkPhysicalDeviceVulkan13Properties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceVulkan13Properties *>(this);
}

PhysicalDeviceVulkan13Properties::operator const VkPhysicalDeviceVulkan13Properties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceVulkan13Properties *>(this);
}

PhysicalDeviceVulkan13Properties::operator VkPhysicalDeviceVulkan13Properties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceVulkan13Properties *>(this);
}

PipelineCompilerControlCreateInfoAMD::operator const VkPipelineCompilerControlCreateInfoAMD &() const noexcept {
  return *reinterpret_cast<const VkPipelineCompilerControlCreateInfoAMD *>(this);
}

PipelineCompilerControlCreateInfoAMD::operator VkPipelineCompilerControlCreateInfoAMD &() noexcept {
  return *reinterpret_cast<VkPipelineCompilerControlCreateInfoAMD *>(this);
}

PipelineCompilerControlCreateInfoAMD::operator const VkPipelineCompilerControlCreateInfoAMD *() const noexcept {
  return reinterpret_cast<const VkPipelineCompilerControlCreateInfoAMD *>(this);
}

PipelineCompilerControlCreateInfoAMD::operator VkPipelineCompilerControlCreateInfoAMD *() noexcept {
  return reinterpret_cast<VkPipelineCompilerControlCreateInfoAMD *>(this);
}

PhysicalDeviceCoherentMemoryFeaturesAMD::operator const VkPhysicalDeviceCoherentMemoryFeaturesAMD &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceCoherentMemoryFeaturesAMD *>(this);
}

PhysicalDeviceCoherentMemoryFeaturesAMD::operator VkPhysicalDeviceCoherentMemoryFeaturesAMD &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceCoherentMemoryFeaturesAMD *>(this);
}

PhysicalDeviceCoherentMemoryFeaturesAMD::operator const VkPhysicalDeviceCoherentMemoryFeaturesAMD *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceCoherentMemoryFeaturesAMD *>(this);
}

PhysicalDeviceCoherentMemoryFeaturesAMD::operator VkPhysicalDeviceCoherentMemoryFeaturesAMD *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceCoherentMemoryFeaturesAMD *>(this);
}

PhysicalDeviceToolProperties::operator const VkPhysicalDeviceToolProperties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceToolProperties *>(this);
}

PhysicalDeviceToolProperties::operator VkPhysicalDeviceToolProperties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceToolProperties *>(this);
}

PhysicalDeviceToolProperties::operator const VkPhysicalDeviceToolProperties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceToolProperties *>(this);
}

PhysicalDeviceToolProperties::operator VkPhysicalDeviceToolProperties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceToolProperties *>(this);
}

SamplerCustomBorderColorCreateInfoEXT::operator const VkSamplerCustomBorderColorCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkSamplerCustomBorderColorCreateInfoEXT *>(this);
}

SamplerCustomBorderColorCreateInfoEXT::operator VkSamplerCustomBorderColorCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkSamplerCustomBorderColorCreateInfoEXT *>(this);
}

SamplerCustomBorderColorCreateInfoEXT::operator const VkSamplerCustomBorderColorCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkSamplerCustomBorderColorCreateInfoEXT *>(this);
}

SamplerCustomBorderColorCreateInfoEXT::operator VkSamplerCustomBorderColorCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkSamplerCustomBorderColorCreateInfoEXT *>(this);
}

PhysicalDeviceCustomBorderColorPropertiesEXT::operator const VkPhysicalDeviceCustomBorderColorPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceCustomBorderColorPropertiesEXT *>(this);
}

PhysicalDeviceCustomBorderColorPropertiesEXT::operator VkPhysicalDeviceCustomBorderColorPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceCustomBorderColorPropertiesEXT *>(this);
}

PhysicalDeviceCustomBorderColorPropertiesEXT::operator const VkPhysicalDeviceCustomBorderColorPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceCustomBorderColorPropertiesEXT *>(this);
}

PhysicalDeviceCustomBorderColorPropertiesEXT::operator VkPhysicalDeviceCustomBorderColorPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceCustomBorderColorPropertiesEXT *>(this);
}

PhysicalDeviceCustomBorderColorFeaturesEXT::operator const VkPhysicalDeviceCustomBorderColorFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceCustomBorderColorFeaturesEXT *>(this);
}

PhysicalDeviceCustomBorderColorFeaturesEXT::operator VkPhysicalDeviceCustomBorderColorFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceCustomBorderColorFeaturesEXT *>(this);
}

PhysicalDeviceCustomBorderColorFeaturesEXT::operator const VkPhysicalDeviceCustomBorderColorFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceCustomBorderColorFeaturesEXT *>(this);
}

PhysicalDeviceCustomBorderColorFeaturesEXT::operator VkPhysicalDeviceCustomBorderColorFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceCustomBorderColorFeaturesEXT *>(this);
}

SamplerBorderColorComponentMappingCreateInfoEXT::operator const VkSamplerBorderColorComponentMappingCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkSamplerBorderColorComponentMappingCreateInfoEXT *>(this);
}

SamplerBorderColorComponentMappingCreateInfoEXT::operator VkSamplerBorderColorComponentMappingCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkSamplerBorderColorComponentMappingCreateInfoEXT *>(this);
}

SamplerBorderColorComponentMappingCreateInfoEXT::operator const VkSamplerBorderColorComponentMappingCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkSamplerBorderColorComponentMappingCreateInfoEXT *>(this);
}

SamplerBorderColorComponentMappingCreateInfoEXT::operator VkSamplerBorderColorComponentMappingCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkSamplerBorderColorComponentMappingCreateInfoEXT *>(this);
}

PhysicalDeviceBorderColorSwizzleFeaturesEXT::operator const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *>(this);
}

PhysicalDeviceBorderColorSwizzleFeaturesEXT::operator VkPhysicalDeviceBorderColorSwizzleFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *>(this);
}

PhysicalDeviceBorderColorSwizzleFeaturesEXT::operator const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *>(this);
}

PhysicalDeviceBorderColorSwizzleFeaturesEXT::operator VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *>(this);
}

AccelerationStructureGeometryTrianglesDataKHR::operator const VkAccelerationStructureGeometryTrianglesDataKHR &() const noexcept {
  return *reinterpret_cast<const VkAccelerationStructureGeometryTrianglesDataKHR *>(this);
}

AccelerationStructureGeometryTrianglesDataKHR::operator VkAccelerationStructureGeometryTrianglesDataKHR &() noexcept {
  return *reinterpret_cast<VkAccelerationStructureGeometryTrianglesDataKHR *>(this);
}

AccelerationStructureGeometryTrianglesDataKHR::operator const VkAccelerationStructureGeometryTrianglesDataKHR *() const noexcept {
  return reinterpret_cast<const VkAccelerationStructureGeometryTrianglesDataKHR *>(this);
}

AccelerationStructureGeometryTrianglesDataKHR::operator VkAccelerationStructureGeometryTrianglesDataKHR *() noexcept {
  return reinterpret_cast<VkAccelerationStructureGeometryTrianglesDataKHR *>(this);
}

AccelerationStructureGeometryAabbsDataKHR::operator const VkAccelerationStructureGeometryAabbsDataKHR &() const noexcept {
  return *reinterpret_cast<const VkAccelerationStructureGeometryAabbsDataKHR *>(this);
}

AccelerationStructureGeometryAabbsDataKHR::operator VkAccelerationStructureGeometryAabbsDataKHR &() noexcept {
  return *reinterpret_cast<VkAccelerationStructureGeometryAabbsDataKHR *>(this);
}

AccelerationStructureGeometryAabbsDataKHR::operator const VkAccelerationStructureGeometryAabbsDataKHR *() const noexcept {
  return reinterpret_cast<const VkAccelerationStructureGeometryAabbsDataKHR *>(this);
}

AccelerationStructureGeometryAabbsDataKHR::operator VkAccelerationStructureGeometryAabbsDataKHR *() noexcept {
  return reinterpret_cast<VkAccelerationStructureGeometryAabbsDataKHR *>(this);
}

AccelerationStructureGeometryInstancesDataKHR::operator const VkAccelerationStructureGeometryInstancesDataKHR &() const noexcept {
  return *reinterpret_cast<const VkAccelerationStructureGeometryInstancesDataKHR *>(this);
}

AccelerationStructureGeometryInstancesDataKHR::operator VkAccelerationStructureGeometryInstancesDataKHR &() noexcept {
  return *reinterpret_cast<VkAccelerationStructureGeometryInstancesDataKHR *>(this);
}

AccelerationStructureGeometryInstancesDataKHR::operator const VkAccelerationStructureGeometryInstancesDataKHR *() const noexcept {
  return reinterpret_cast<const VkAccelerationStructureGeometryInstancesDataKHR *>(this);
}

AccelerationStructureGeometryInstancesDataKHR::operator VkAccelerationStructureGeometryInstancesDataKHR *() noexcept {
  return reinterpret_cast<VkAccelerationStructureGeometryInstancesDataKHR *>(this);
}

AccelerationStructureGeometryKHR::operator const VkAccelerationStructureGeometryKHR &() const noexcept {
  return *reinterpret_cast<const VkAccelerationStructureGeometryKHR *>(this);
}

AccelerationStructureGeometryKHR::operator VkAccelerationStructureGeometryKHR &() noexcept {
  return *reinterpret_cast<VkAccelerationStructureGeometryKHR *>(this);
}

AccelerationStructureGeometryKHR::operator const VkAccelerationStructureGeometryKHR *() const noexcept {
  return reinterpret_cast<const VkAccelerationStructureGeometryKHR *>(this);
}

AccelerationStructureGeometryKHR::operator VkAccelerationStructureGeometryKHR *() noexcept {
  return reinterpret_cast<VkAccelerationStructureGeometryKHR *>(this);
}

AccelerationStructureBuildGeometryInfoKHR::operator const VkAccelerationStructureBuildGeometryInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkAccelerationStructureBuildGeometryInfoKHR *>(this);
}

AccelerationStructureBuildGeometryInfoKHR::operator VkAccelerationStructureBuildGeometryInfoKHR &() noexcept {
  return *reinterpret_cast<VkAccelerationStructureBuildGeometryInfoKHR *>(this);
}

AccelerationStructureBuildGeometryInfoKHR::operator const VkAccelerationStructureBuildGeometryInfoKHR *() const noexcept {
  return reinterpret_cast<const VkAccelerationStructureBuildGeometryInfoKHR *>(this);
}

AccelerationStructureBuildGeometryInfoKHR::operator VkAccelerationStructureBuildGeometryInfoKHR *() noexcept {
  return reinterpret_cast<VkAccelerationStructureBuildGeometryInfoKHR *>(this);
}

AccelerationStructureBuildRangeInfoKHR::operator const VkAccelerationStructureBuildRangeInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkAccelerationStructureBuildRangeInfoKHR *>(this);
}

AccelerationStructureBuildRangeInfoKHR::operator VkAccelerationStructureBuildRangeInfoKHR &() noexcept {
  return *reinterpret_cast<VkAccelerationStructureBuildRangeInfoKHR *>(this);
}

AccelerationStructureBuildRangeInfoKHR::operator const VkAccelerationStructureBuildRangeInfoKHR *() const noexcept {
  return reinterpret_cast<const VkAccelerationStructureBuildRangeInfoKHR *>(this);
}

AccelerationStructureBuildRangeInfoKHR::operator VkAccelerationStructureBuildRangeInfoKHR *() noexcept {
  return reinterpret_cast<VkAccelerationStructureBuildRangeInfoKHR *>(this);
}

AccelerationStructureCreateInfoKHR::operator const VkAccelerationStructureCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkAccelerationStructureCreateInfoKHR *>(this);
}

AccelerationStructureCreateInfoKHR::operator VkAccelerationStructureCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkAccelerationStructureCreateInfoKHR *>(this);
}

AccelerationStructureCreateInfoKHR::operator const VkAccelerationStructureCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkAccelerationStructureCreateInfoKHR *>(this);
}

AccelerationStructureCreateInfoKHR::operator VkAccelerationStructureCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkAccelerationStructureCreateInfoKHR *>(this);
}

AabbPositionsKHR::operator const VkAabbPositionsKHR &() const noexcept {
  return *reinterpret_cast<const VkAabbPositionsKHR *>(this);
}

AabbPositionsKHR::operator VkAabbPositionsKHR &() noexcept {
  return *reinterpret_cast<VkAabbPositionsKHR *>(this);
}

AabbPositionsKHR::operator const VkAabbPositionsKHR *() const noexcept {
  return reinterpret_cast<const VkAabbPositionsKHR *>(this);
}

AabbPositionsKHR::operator VkAabbPositionsKHR *() noexcept {
  return reinterpret_cast<VkAabbPositionsKHR *>(this);
}

TransformMatrixKHR::operator const VkTransformMatrixKHR &() const noexcept {
  return *reinterpret_cast<const VkTransformMatrixKHR *>(this);
}

TransformMatrixKHR::operator VkTransformMatrixKHR &() noexcept {
  return *reinterpret_cast<VkTransformMatrixKHR *>(this);
}

TransformMatrixKHR::operator const VkTransformMatrixKHR *() const noexcept {
  return reinterpret_cast<const VkTransformMatrixKHR *>(this);
}

TransformMatrixKHR::operator VkTransformMatrixKHR *() noexcept {
  return reinterpret_cast<VkTransformMatrixKHR *>(this);
}

AccelerationStructureInstanceKHR::operator const VkAccelerationStructureInstanceKHR &() const noexcept {
  return *reinterpret_cast<const VkAccelerationStructureInstanceKHR *>(this);
}

AccelerationStructureInstanceKHR::operator VkAccelerationStructureInstanceKHR &() noexcept {
  return *reinterpret_cast<VkAccelerationStructureInstanceKHR *>(this);
}

AccelerationStructureInstanceKHR::operator const VkAccelerationStructureInstanceKHR *() const noexcept {
  return reinterpret_cast<const VkAccelerationStructureInstanceKHR *>(this);
}

AccelerationStructureInstanceKHR::operator VkAccelerationStructureInstanceKHR *() noexcept {
  return reinterpret_cast<VkAccelerationStructureInstanceKHR *>(this);
}

AccelerationStructureDeviceAddressInfoKHR::operator const VkAccelerationStructureDeviceAddressInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkAccelerationStructureDeviceAddressInfoKHR *>(this);
}

AccelerationStructureDeviceAddressInfoKHR::operator VkAccelerationStructureDeviceAddressInfoKHR &() noexcept {
  return *reinterpret_cast<VkAccelerationStructureDeviceAddressInfoKHR *>(this);
}

AccelerationStructureDeviceAddressInfoKHR::operator const VkAccelerationStructureDeviceAddressInfoKHR *() const noexcept {
  return reinterpret_cast<const VkAccelerationStructureDeviceAddressInfoKHR *>(this);
}

AccelerationStructureDeviceAddressInfoKHR::operator VkAccelerationStructureDeviceAddressInfoKHR *() noexcept {
  return reinterpret_cast<VkAccelerationStructureDeviceAddressInfoKHR *>(this);
}

AccelerationStructureVersionInfoKHR::operator const VkAccelerationStructureVersionInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkAccelerationStructureVersionInfoKHR *>(this);
}

AccelerationStructureVersionInfoKHR::operator VkAccelerationStructureVersionInfoKHR &() noexcept {
  return *reinterpret_cast<VkAccelerationStructureVersionInfoKHR *>(this);
}

AccelerationStructureVersionInfoKHR::operator const VkAccelerationStructureVersionInfoKHR *() const noexcept {
  return reinterpret_cast<const VkAccelerationStructureVersionInfoKHR *>(this);
}

AccelerationStructureVersionInfoKHR::operator VkAccelerationStructureVersionInfoKHR *() noexcept {
  return reinterpret_cast<VkAccelerationStructureVersionInfoKHR *>(this);
}

CopyAccelerationStructureInfoKHR::operator const VkCopyAccelerationStructureInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkCopyAccelerationStructureInfoKHR *>(this);
}

CopyAccelerationStructureInfoKHR::operator VkCopyAccelerationStructureInfoKHR &() noexcept {
  return *reinterpret_cast<VkCopyAccelerationStructureInfoKHR *>(this);
}

CopyAccelerationStructureInfoKHR::operator const VkCopyAccelerationStructureInfoKHR *() const noexcept {
  return reinterpret_cast<const VkCopyAccelerationStructureInfoKHR *>(this);
}

CopyAccelerationStructureInfoKHR::operator VkCopyAccelerationStructureInfoKHR *() noexcept {
  return reinterpret_cast<VkCopyAccelerationStructureInfoKHR *>(this);
}

CopyAccelerationStructureToMemoryInfoKHR::operator const VkCopyAccelerationStructureToMemoryInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkCopyAccelerationStructureToMemoryInfoKHR *>(this);
}

CopyAccelerationStructureToMemoryInfoKHR::operator VkCopyAccelerationStructureToMemoryInfoKHR &() noexcept {
  return *reinterpret_cast<VkCopyAccelerationStructureToMemoryInfoKHR *>(this);
}

CopyAccelerationStructureToMemoryInfoKHR::operator const VkCopyAccelerationStructureToMemoryInfoKHR *() const noexcept {
  return reinterpret_cast<const VkCopyAccelerationStructureToMemoryInfoKHR *>(this);
}

CopyAccelerationStructureToMemoryInfoKHR::operator VkCopyAccelerationStructureToMemoryInfoKHR *() noexcept {
  return reinterpret_cast<VkCopyAccelerationStructureToMemoryInfoKHR *>(this);
}

CopyMemoryToAccelerationStructureInfoKHR::operator const VkCopyMemoryToAccelerationStructureInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkCopyMemoryToAccelerationStructureInfoKHR *>(this);
}

CopyMemoryToAccelerationStructureInfoKHR::operator VkCopyMemoryToAccelerationStructureInfoKHR &() noexcept {
  return *reinterpret_cast<VkCopyMemoryToAccelerationStructureInfoKHR *>(this);
}

CopyMemoryToAccelerationStructureInfoKHR::operator const VkCopyMemoryToAccelerationStructureInfoKHR *() const noexcept {
  return reinterpret_cast<const VkCopyMemoryToAccelerationStructureInfoKHR *>(this);
}

CopyMemoryToAccelerationStructureInfoKHR::operator VkCopyMemoryToAccelerationStructureInfoKHR *() noexcept {
  return reinterpret_cast<VkCopyMemoryToAccelerationStructureInfoKHR *>(this);
}

PhysicalDeviceExtendedDynamicStateFeaturesEXT::operator const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *>(this);
}

PhysicalDeviceExtendedDynamicStateFeaturesEXT::operator VkPhysicalDeviceExtendedDynamicStateFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *>(this);
}

PhysicalDeviceExtendedDynamicStateFeaturesEXT::operator const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *>(this);
}

PhysicalDeviceExtendedDynamicStateFeaturesEXT::operator VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *>(this);
}

PhysicalDeviceExtendedDynamicState2FeaturesEXT::operator const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *>(this);
}

PhysicalDeviceExtendedDynamicState2FeaturesEXT::operator VkPhysicalDeviceExtendedDynamicState2FeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *>(this);
}

PhysicalDeviceExtendedDynamicState2FeaturesEXT::operator const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *>(this);
}

PhysicalDeviceExtendedDynamicState2FeaturesEXT::operator VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *>(this);
}

PhysicalDeviceExtendedDynamicState3FeaturesEXT::operator const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *>(this);
}

PhysicalDeviceExtendedDynamicState3FeaturesEXT::operator VkPhysicalDeviceExtendedDynamicState3FeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *>(this);
}

PhysicalDeviceExtendedDynamicState3FeaturesEXT::operator const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *>(this);
}

PhysicalDeviceExtendedDynamicState3FeaturesEXT::operator VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *>(this);
}

PhysicalDeviceExtendedDynamicState3PropertiesEXT::operator const VkPhysicalDeviceExtendedDynamicState3PropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceExtendedDynamicState3PropertiesEXT *>(this);
}

PhysicalDeviceExtendedDynamicState3PropertiesEXT::operator VkPhysicalDeviceExtendedDynamicState3PropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceExtendedDynamicState3PropertiesEXT *>(this);
}

PhysicalDeviceExtendedDynamicState3PropertiesEXT::operator const VkPhysicalDeviceExtendedDynamicState3PropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceExtendedDynamicState3PropertiesEXT *>(this);
}

PhysicalDeviceExtendedDynamicState3PropertiesEXT::operator VkPhysicalDeviceExtendedDynamicState3PropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceExtendedDynamicState3PropertiesEXT *>(this);
}

ColorBlendEquationEXT::operator const VkColorBlendEquationEXT &() const noexcept {
  return *reinterpret_cast<const VkColorBlendEquationEXT *>(this);
}

ColorBlendEquationEXT::operator VkColorBlendEquationEXT &() noexcept {
  return *reinterpret_cast<VkColorBlendEquationEXT *>(this);
}

ColorBlendEquationEXT::operator const VkColorBlendEquationEXT *() const noexcept {
  return reinterpret_cast<const VkColorBlendEquationEXT *>(this);
}

ColorBlendEquationEXT::operator VkColorBlendEquationEXT *() noexcept {
  return reinterpret_cast<VkColorBlendEquationEXT *>(this);
}

ColorBlendAdvancedEXT::operator const VkColorBlendAdvancedEXT &() const noexcept {
  return *reinterpret_cast<const VkColorBlendAdvancedEXT *>(this);
}

ColorBlendAdvancedEXT::operator VkColorBlendAdvancedEXT &() noexcept {
  return *reinterpret_cast<VkColorBlendAdvancedEXT *>(this);
}

ColorBlendAdvancedEXT::operator const VkColorBlendAdvancedEXT *() const noexcept {
  return reinterpret_cast<const VkColorBlendAdvancedEXT *>(this);
}

ColorBlendAdvancedEXT::operator VkColorBlendAdvancedEXT *() noexcept {
  return reinterpret_cast<VkColorBlendAdvancedEXT *>(this);
}

RenderPassTransformBeginInfoQCOM::operator const VkRenderPassTransformBeginInfoQCOM &() const noexcept {
  return *reinterpret_cast<const VkRenderPassTransformBeginInfoQCOM *>(this);
}

RenderPassTransformBeginInfoQCOM::operator VkRenderPassTransformBeginInfoQCOM &() noexcept {
  return *reinterpret_cast<VkRenderPassTransformBeginInfoQCOM *>(this);
}

RenderPassTransformBeginInfoQCOM::operator const VkRenderPassTransformBeginInfoQCOM *() const noexcept {
  return reinterpret_cast<const VkRenderPassTransformBeginInfoQCOM *>(this);
}

RenderPassTransformBeginInfoQCOM::operator VkRenderPassTransformBeginInfoQCOM *() noexcept {
  return reinterpret_cast<VkRenderPassTransformBeginInfoQCOM *>(this);
}

CopyCommandTransformInfoQCOM::operator const VkCopyCommandTransformInfoQCOM &() const noexcept {
  return *reinterpret_cast<const VkCopyCommandTransformInfoQCOM *>(this);
}

CopyCommandTransformInfoQCOM::operator VkCopyCommandTransformInfoQCOM &() noexcept {
  return *reinterpret_cast<VkCopyCommandTransformInfoQCOM *>(this);
}

CopyCommandTransformInfoQCOM::operator const VkCopyCommandTransformInfoQCOM *() const noexcept {
  return reinterpret_cast<const VkCopyCommandTransformInfoQCOM *>(this);
}

CopyCommandTransformInfoQCOM::operator VkCopyCommandTransformInfoQCOM *() noexcept {
  return reinterpret_cast<VkCopyCommandTransformInfoQCOM *>(this);
}

CommandBufferInheritanceRenderPassTransformInfoQCOM::operator const VkCommandBufferInheritanceRenderPassTransformInfoQCOM &()
  const noexcept {
  return *reinterpret_cast<const VkCommandBufferInheritanceRenderPassTransformInfoQCOM *>(this);
}

CommandBufferInheritanceRenderPassTransformInfoQCOM::operator VkCommandBufferInheritanceRenderPassTransformInfoQCOM &() noexcept {
  return *reinterpret_cast<VkCommandBufferInheritanceRenderPassTransformInfoQCOM *>(this);
}

CommandBufferInheritanceRenderPassTransformInfoQCOM::operator const VkCommandBufferInheritanceRenderPassTransformInfoQCOM *()
  const noexcept {
  return reinterpret_cast<const VkCommandBufferInheritanceRenderPassTransformInfoQCOM *>(this);
}

CommandBufferInheritanceRenderPassTransformInfoQCOM::operator VkCommandBufferInheritanceRenderPassTransformInfoQCOM *() noexcept {
  return reinterpret_cast<VkCommandBufferInheritanceRenderPassTransformInfoQCOM *>(this);
}

PhysicalDeviceDiagnosticsConfigFeaturesNV::operator const VkPhysicalDeviceDiagnosticsConfigFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDiagnosticsConfigFeaturesNV *>(this);
}

PhysicalDeviceDiagnosticsConfigFeaturesNV::operator VkPhysicalDeviceDiagnosticsConfigFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDiagnosticsConfigFeaturesNV *>(this);
}

PhysicalDeviceDiagnosticsConfigFeaturesNV::operator const VkPhysicalDeviceDiagnosticsConfigFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDiagnosticsConfigFeaturesNV *>(this);
}

PhysicalDeviceDiagnosticsConfigFeaturesNV::operator VkPhysicalDeviceDiagnosticsConfigFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDiagnosticsConfigFeaturesNV *>(this);
}

DeviceDiagnosticsConfigCreateInfoNV::operator const VkDeviceDiagnosticsConfigCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkDeviceDiagnosticsConfigCreateInfoNV *>(this);
}

DeviceDiagnosticsConfigCreateInfoNV::operator VkDeviceDiagnosticsConfigCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkDeviceDiagnosticsConfigCreateInfoNV *>(this);
}

DeviceDiagnosticsConfigCreateInfoNV::operator const VkDeviceDiagnosticsConfigCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkDeviceDiagnosticsConfigCreateInfoNV *>(this);
}

DeviceDiagnosticsConfigCreateInfoNV::operator VkDeviceDiagnosticsConfigCreateInfoNV *() noexcept {
  return reinterpret_cast<VkDeviceDiagnosticsConfigCreateInfoNV *>(this);
}

PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures::operator const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *>(this);
}

PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures::operator VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *>(this);
}

PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures::operator const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *>(this);
}

PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures::operator VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *>(this);
}

PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR::operator const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *>(this);
}

PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR::
operator VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *>(this);
}

PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR::operator const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *>(this);
}

PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR::
operator VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *>(this);
}

PhysicalDeviceRobustness2FeaturesEXT::operator const VkPhysicalDeviceRobustness2FeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceRobustness2FeaturesEXT *>(this);
}

PhysicalDeviceRobustness2FeaturesEXT::operator VkPhysicalDeviceRobustness2FeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceRobustness2FeaturesEXT *>(this);
}

PhysicalDeviceRobustness2FeaturesEXT::operator const VkPhysicalDeviceRobustness2FeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceRobustness2FeaturesEXT *>(this);
}

PhysicalDeviceRobustness2FeaturesEXT::operator VkPhysicalDeviceRobustness2FeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceRobustness2FeaturesEXT *>(this);
}

PhysicalDeviceRobustness2PropertiesEXT::operator const VkPhysicalDeviceRobustness2PropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceRobustness2PropertiesEXT *>(this);
}

PhysicalDeviceRobustness2PropertiesEXT::operator VkPhysicalDeviceRobustness2PropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceRobustness2PropertiesEXT *>(this);
}

PhysicalDeviceRobustness2PropertiesEXT::operator const VkPhysicalDeviceRobustness2PropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceRobustness2PropertiesEXT *>(this);
}

PhysicalDeviceRobustness2PropertiesEXT::operator VkPhysicalDeviceRobustness2PropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceRobustness2PropertiesEXT *>(this);
}

PhysicalDeviceImageRobustnessFeatures::operator const VkPhysicalDeviceImageRobustnessFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceImageRobustnessFeatures *>(this);
}

PhysicalDeviceImageRobustnessFeatures::operator VkPhysicalDeviceImageRobustnessFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceImageRobustnessFeatures *>(this);
}

PhysicalDeviceImageRobustnessFeatures::operator const VkPhysicalDeviceImageRobustnessFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceImageRobustnessFeatures *>(this);
}

PhysicalDeviceImageRobustnessFeatures::operator VkPhysicalDeviceImageRobustnessFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceImageRobustnessFeatures *>(this);
}

PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR::operator const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *>(this);
}

PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR::operator VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *>(this);
}

PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR::operator const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *>(this);
}

PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR::operator VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *>(this);
}

PhysicalDevice4444FormatsFeaturesEXT::operator const VkPhysicalDevice4444FormatsFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDevice4444FormatsFeaturesEXT *>(this);
}

PhysicalDevice4444FormatsFeaturesEXT::operator VkPhysicalDevice4444FormatsFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDevice4444FormatsFeaturesEXT *>(this);
}

PhysicalDevice4444FormatsFeaturesEXT::operator const VkPhysicalDevice4444FormatsFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDevice4444FormatsFeaturesEXT *>(this);
}

PhysicalDevice4444FormatsFeaturesEXT::operator VkPhysicalDevice4444FormatsFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDevice4444FormatsFeaturesEXT *>(this);
}

PhysicalDeviceSubpassShadingFeaturesHUAWEI::operator const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *>(this);
}

PhysicalDeviceSubpassShadingFeaturesHUAWEI::operator VkPhysicalDeviceSubpassShadingFeaturesHUAWEI &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *>(this);
}

PhysicalDeviceSubpassShadingFeaturesHUAWEI::operator const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *>(this);
}

PhysicalDeviceSubpassShadingFeaturesHUAWEI::operator VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *>(this);
}

PhysicalDeviceClusterCullingShaderFeaturesHUAWEI::operator const VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI *>(this);
}

PhysicalDeviceClusterCullingShaderFeaturesHUAWEI::operator VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI *>(this);
}

PhysicalDeviceClusterCullingShaderFeaturesHUAWEI::operator const VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI *>(this);
}

PhysicalDeviceClusterCullingShaderFeaturesHUAWEI::operator VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI *>(this);
}

PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI::operator const VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI *>(this);
}

PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI::operator VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI *>(this);
}

PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI::operator const VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI *>(this);
}

PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI::operator VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI *>(this);
}

BufferCopy2::operator const VkBufferCopy2 &() const noexcept {
  return *reinterpret_cast<const VkBufferCopy2 *>(this);
}

BufferCopy2::operator VkBufferCopy2 &() noexcept {
  return *reinterpret_cast<VkBufferCopy2 *>(this);
}

BufferCopy2::operator const VkBufferCopy2 *() const noexcept {
  return reinterpret_cast<const VkBufferCopy2 *>(this);
}

BufferCopy2::operator VkBufferCopy2 *() noexcept {
  return reinterpret_cast<VkBufferCopy2 *>(this);
}

ImageCopy2::operator const VkImageCopy2 &() const noexcept {
  return *reinterpret_cast<const VkImageCopy2 *>(this);
}

ImageCopy2::operator VkImageCopy2 &() noexcept {
  return *reinterpret_cast<VkImageCopy2 *>(this);
}

ImageCopy2::operator const VkImageCopy2 *() const noexcept {
  return reinterpret_cast<const VkImageCopy2 *>(this);
}

ImageCopy2::operator VkImageCopy2 *() noexcept {
  return reinterpret_cast<VkImageCopy2 *>(this);
}

ImageBlit2::operator const VkImageBlit2 &() const noexcept {
  return *reinterpret_cast<const VkImageBlit2 *>(this);
}

ImageBlit2::operator VkImageBlit2 &() noexcept {
  return *reinterpret_cast<VkImageBlit2 *>(this);
}

ImageBlit2::operator const VkImageBlit2 *() const noexcept {
  return reinterpret_cast<const VkImageBlit2 *>(this);
}

ImageBlit2::operator VkImageBlit2 *() noexcept {
  return reinterpret_cast<VkImageBlit2 *>(this);
}

BufferImageCopy2::operator const VkBufferImageCopy2 &() const noexcept {
  return *reinterpret_cast<const VkBufferImageCopy2 *>(this);
}

BufferImageCopy2::operator VkBufferImageCopy2 &() noexcept {
  return *reinterpret_cast<VkBufferImageCopy2 *>(this);
}

BufferImageCopy2::operator const VkBufferImageCopy2 *() const noexcept {
  return reinterpret_cast<const VkBufferImageCopy2 *>(this);
}

BufferImageCopy2::operator VkBufferImageCopy2 *() noexcept {
  return reinterpret_cast<VkBufferImageCopy2 *>(this);
}

ImageResolve2::operator const VkImageResolve2 &() const noexcept {
  return *reinterpret_cast<const VkImageResolve2 *>(this);
}

ImageResolve2::operator VkImageResolve2 &() noexcept {
  return *reinterpret_cast<VkImageResolve2 *>(this);
}

ImageResolve2::operator const VkImageResolve2 *() const noexcept {
  return reinterpret_cast<const VkImageResolve2 *>(this);
}

ImageResolve2::operator VkImageResolve2 *() noexcept {
  return reinterpret_cast<VkImageResolve2 *>(this);
}

CopyBufferInfo2::operator const VkCopyBufferInfo2 &() const noexcept {
  return *reinterpret_cast<const VkCopyBufferInfo2 *>(this);
}

CopyBufferInfo2::operator VkCopyBufferInfo2 &() noexcept {
  return *reinterpret_cast<VkCopyBufferInfo2 *>(this);
}

CopyBufferInfo2::operator const VkCopyBufferInfo2 *() const noexcept {
  return reinterpret_cast<const VkCopyBufferInfo2 *>(this);
}

CopyBufferInfo2::operator VkCopyBufferInfo2 *() noexcept {
  return reinterpret_cast<VkCopyBufferInfo2 *>(this);
}

CopyImageInfo2::operator const VkCopyImageInfo2 &() const noexcept {
  return *reinterpret_cast<const VkCopyImageInfo2 *>(this);
}

CopyImageInfo2::operator VkCopyImageInfo2 &() noexcept {
  return *reinterpret_cast<VkCopyImageInfo2 *>(this);
}

CopyImageInfo2::operator const VkCopyImageInfo2 *() const noexcept {
  return reinterpret_cast<const VkCopyImageInfo2 *>(this);
}

CopyImageInfo2::operator VkCopyImageInfo2 *() noexcept {
  return reinterpret_cast<VkCopyImageInfo2 *>(this);
}

BlitImageInfo2::operator const VkBlitImageInfo2 &() const noexcept {
  return *reinterpret_cast<const VkBlitImageInfo2 *>(this);
}

BlitImageInfo2::operator VkBlitImageInfo2 &() noexcept {
  return *reinterpret_cast<VkBlitImageInfo2 *>(this);
}

BlitImageInfo2::operator const VkBlitImageInfo2 *() const noexcept {
  return reinterpret_cast<const VkBlitImageInfo2 *>(this);
}

BlitImageInfo2::operator VkBlitImageInfo2 *() noexcept {
  return reinterpret_cast<VkBlitImageInfo2 *>(this);
}

CopyBufferToImageInfo2::operator const VkCopyBufferToImageInfo2 &() const noexcept {
  return *reinterpret_cast<const VkCopyBufferToImageInfo2 *>(this);
}

CopyBufferToImageInfo2::operator VkCopyBufferToImageInfo2 &() noexcept {
  return *reinterpret_cast<VkCopyBufferToImageInfo2 *>(this);
}

CopyBufferToImageInfo2::operator const VkCopyBufferToImageInfo2 *() const noexcept {
  return reinterpret_cast<const VkCopyBufferToImageInfo2 *>(this);
}

CopyBufferToImageInfo2::operator VkCopyBufferToImageInfo2 *() noexcept {
  return reinterpret_cast<VkCopyBufferToImageInfo2 *>(this);
}

CopyImageToBufferInfo2::operator const VkCopyImageToBufferInfo2 &() const noexcept {
  return *reinterpret_cast<const VkCopyImageToBufferInfo2 *>(this);
}

CopyImageToBufferInfo2::operator VkCopyImageToBufferInfo2 &() noexcept {
  return *reinterpret_cast<VkCopyImageToBufferInfo2 *>(this);
}

CopyImageToBufferInfo2::operator const VkCopyImageToBufferInfo2 *() const noexcept {
  return reinterpret_cast<const VkCopyImageToBufferInfo2 *>(this);
}

CopyImageToBufferInfo2::operator VkCopyImageToBufferInfo2 *() noexcept {
  return reinterpret_cast<VkCopyImageToBufferInfo2 *>(this);
}

ResolveImageInfo2::operator const VkResolveImageInfo2 &() const noexcept {
  return *reinterpret_cast<const VkResolveImageInfo2 *>(this);
}

ResolveImageInfo2::operator VkResolveImageInfo2 &() noexcept {
  return *reinterpret_cast<VkResolveImageInfo2 *>(this);
}

ResolveImageInfo2::operator const VkResolveImageInfo2 *() const noexcept {
  return reinterpret_cast<const VkResolveImageInfo2 *>(this);
}

ResolveImageInfo2::operator VkResolveImageInfo2 *() noexcept {
  return reinterpret_cast<VkResolveImageInfo2 *>(this);
}

PhysicalDeviceShaderImageAtomicInt64FeaturesEXT::operator const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *>(this);
}

PhysicalDeviceShaderImageAtomicInt64FeaturesEXT::operator VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *>(this);
}

PhysicalDeviceShaderImageAtomicInt64FeaturesEXT::operator const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *>(this);
}

PhysicalDeviceShaderImageAtomicInt64FeaturesEXT::operator VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *>(this);
}

FragmentShadingRateAttachmentInfoKHR::operator const VkFragmentShadingRateAttachmentInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkFragmentShadingRateAttachmentInfoKHR *>(this);
}

FragmentShadingRateAttachmentInfoKHR::operator VkFragmentShadingRateAttachmentInfoKHR &() noexcept {
  return *reinterpret_cast<VkFragmentShadingRateAttachmentInfoKHR *>(this);
}

FragmentShadingRateAttachmentInfoKHR::operator const VkFragmentShadingRateAttachmentInfoKHR *() const noexcept {
  return reinterpret_cast<const VkFragmentShadingRateAttachmentInfoKHR *>(this);
}

FragmentShadingRateAttachmentInfoKHR::operator VkFragmentShadingRateAttachmentInfoKHR *() noexcept {
  return reinterpret_cast<VkFragmentShadingRateAttachmentInfoKHR *>(this);
}

PipelineFragmentShadingRateStateCreateInfoKHR::operator const VkPipelineFragmentShadingRateStateCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkPipelineFragmentShadingRateStateCreateInfoKHR *>(this);
}

PipelineFragmentShadingRateStateCreateInfoKHR::operator VkPipelineFragmentShadingRateStateCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkPipelineFragmentShadingRateStateCreateInfoKHR *>(this);
}

PipelineFragmentShadingRateStateCreateInfoKHR::operator const VkPipelineFragmentShadingRateStateCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkPipelineFragmentShadingRateStateCreateInfoKHR *>(this);
}

PipelineFragmentShadingRateStateCreateInfoKHR::operator VkPipelineFragmentShadingRateStateCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkPipelineFragmentShadingRateStateCreateInfoKHR *>(this);
}

PhysicalDeviceFragmentShadingRateFeaturesKHR::operator const VkPhysicalDeviceFragmentShadingRateFeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateFeaturesKHR *>(this);
}

PhysicalDeviceFragmentShadingRateFeaturesKHR::operator VkPhysicalDeviceFragmentShadingRateFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceFragmentShadingRateFeaturesKHR *>(this);
}

PhysicalDeviceFragmentShadingRateFeaturesKHR::operator const VkPhysicalDeviceFragmentShadingRateFeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateFeaturesKHR *>(this);
}

PhysicalDeviceFragmentShadingRateFeaturesKHR::operator VkPhysicalDeviceFragmentShadingRateFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceFragmentShadingRateFeaturesKHR *>(this);
}

PhysicalDeviceFragmentShadingRatePropertiesKHR::operator const VkPhysicalDeviceFragmentShadingRatePropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceFragmentShadingRatePropertiesKHR *>(this);
}

PhysicalDeviceFragmentShadingRatePropertiesKHR::operator VkPhysicalDeviceFragmentShadingRatePropertiesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceFragmentShadingRatePropertiesKHR *>(this);
}

PhysicalDeviceFragmentShadingRatePropertiesKHR::operator const VkPhysicalDeviceFragmentShadingRatePropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceFragmentShadingRatePropertiesKHR *>(this);
}

PhysicalDeviceFragmentShadingRatePropertiesKHR::operator VkPhysicalDeviceFragmentShadingRatePropertiesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceFragmentShadingRatePropertiesKHR *>(this);
}

PhysicalDeviceFragmentShadingRateKHR::operator const VkPhysicalDeviceFragmentShadingRateKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateKHR *>(this);
}

PhysicalDeviceFragmentShadingRateKHR::operator VkPhysicalDeviceFragmentShadingRateKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceFragmentShadingRateKHR *>(this);
}

PhysicalDeviceFragmentShadingRateKHR::operator const VkPhysicalDeviceFragmentShadingRateKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateKHR *>(this);
}

PhysicalDeviceFragmentShadingRateKHR::operator VkPhysicalDeviceFragmentShadingRateKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceFragmentShadingRateKHR *>(this);
}

PhysicalDeviceShaderTerminateInvocationFeatures::operator const VkPhysicalDeviceShaderTerminateInvocationFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderTerminateInvocationFeatures *>(this);
}

PhysicalDeviceShaderTerminateInvocationFeatures::operator VkPhysicalDeviceShaderTerminateInvocationFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderTerminateInvocationFeatures *>(this);
}

PhysicalDeviceShaderTerminateInvocationFeatures::operator const VkPhysicalDeviceShaderTerminateInvocationFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderTerminateInvocationFeatures *>(this);
}

PhysicalDeviceShaderTerminateInvocationFeatures::operator VkPhysicalDeviceShaderTerminateInvocationFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderTerminateInvocationFeatures *>(this);
}

PhysicalDeviceFragmentShadingRateEnumsFeaturesNV::operator const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *>(this);
}

PhysicalDeviceFragmentShadingRateEnumsFeaturesNV::operator VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *>(this);
}

PhysicalDeviceFragmentShadingRateEnumsFeaturesNV::operator const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *>(this);
}

PhysicalDeviceFragmentShadingRateEnumsFeaturesNV::operator VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *>(this);
}

PhysicalDeviceFragmentShadingRateEnumsPropertiesNV::operator const VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV *>(this);
}

PhysicalDeviceFragmentShadingRateEnumsPropertiesNV::operator VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV *>(this);
}

PhysicalDeviceFragmentShadingRateEnumsPropertiesNV::operator const VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV *>(this);
}

PhysicalDeviceFragmentShadingRateEnumsPropertiesNV::operator VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV *>(this);
}

PipelineFragmentShadingRateEnumStateCreateInfoNV::operator const VkPipelineFragmentShadingRateEnumStateCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkPipelineFragmentShadingRateEnumStateCreateInfoNV *>(this);
}

PipelineFragmentShadingRateEnumStateCreateInfoNV::operator VkPipelineFragmentShadingRateEnumStateCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkPipelineFragmentShadingRateEnumStateCreateInfoNV *>(this);
}

PipelineFragmentShadingRateEnumStateCreateInfoNV::operator const VkPipelineFragmentShadingRateEnumStateCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkPipelineFragmentShadingRateEnumStateCreateInfoNV *>(this);
}

PipelineFragmentShadingRateEnumStateCreateInfoNV::operator VkPipelineFragmentShadingRateEnumStateCreateInfoNV *() noexcept {
  return reinterpret_cast<VkPipelineFragmentShadingRateEnumStateCreateInfoNV *>(this);
}

AccelerationStructureBuildSizesInfoKHR::operator const VkAccelerationStructureBuildSizesInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkAccelerationStructureBuildSizesInfoKHR *>(this);
}

AccelerationStructureBuildSizesInfoKHR::operator VkAccelerationStructureBuildSizesInfoKHR &() noexcept {
  return *reinterpret_cast<VkAccelerationStructureBuildSizesInfoKHR *>(this);
}

AccelerationStructureBuildSizesInfoKHR::operator const VkAccelerationStructureBuildSizesInfoKHR *() const noexcept {
  return reinterpret_cast<const VkAccelerationStructureBuildSizesInfoKHR *>(this);
}

AccelerationStructureBuildSizesInfoKHR::operator VkAccelerationStructureBuildSizesInfoKHR *() noexcept {
  return reinterpret_cast<VkAccelerationStructureBuildSizesInfoKHR *>(this);
}

PhysicalDeviceImage2DViewOf3DFeaturesEXT::operator const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *>(this);
}

PhysicalDeviceImage2DViewOf3DFeaturesEXT::operator VkPhysicalDeviceImage2DViewOf3DFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *>(this);
}

PhysicalDeviceImage2DViewOf3DFeaturesEXT::operator const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *>(this);
}

PhysicalDeviceImage2DViewOf3DFeaturesEXT::operator VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *>(this);
}

PhysicalDeviceImageSlicedViewOf3DFeaturesEXT::operator const VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT *>(this);
}

PhysicalDeviceImageSlicedViewOf3DFeaturesEXT::operator VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT *>(this);
}

PhysicalDeviceImageSlicedViewOf3DFeaturesEXT::operator const VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT *>(this);
}

PhysicalDeviceImageSlicedViewOf3DFeaturesEXT::operator VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT *>(this);
}

PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT::
operator const VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT *>(this);
}

PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT::
operator VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT *>(this);
}

PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT::
operator const VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT *>(this);
}

PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT::
operator VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT *>(this);
}

PhysicalDeviceLegacyVertexAttributesFeaturesEXT::operator const VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT *>(this);
}

PhysicalDeviceLegacyVertexAttributesFeaturesEXT::operator VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT *>(this);
}

PhysicalDeviceLegacyVertexAttributesFeaturesEXT::operator const VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT *>(this);
}

PhysicalDeviceLegacyVertexAttributesFeaturesEXT::operator VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT *>(this);
}

PhysicalDeviceLegacyVertexAttributesPropertiesEXT::operator const VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT *>(this);
}

PhysicalDeviceLegacyVertexAttributesPropertiesEXT::operator VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT *>(this);
}

PhysicalDeviceLegacyVertexAttributesPropertiesEXT::operator const VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT *>(this);
}

PhysicalDeviceLegacyVertexAttributesPropertiesEXT::operator VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT *>(this);
}

PhysicalDeviceMutableDescriptorTypeFeaturesEXT::operator const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *>(this);
}

PhysicalDeviceMutableDescriptorTypeFeaturesEXT::operator VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *>(this);
}

PhysicalDeviceMutableDescriptorTypeFeaturesEXT::operator const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *>(this);
}

PhysicalDeviceMutableDescriptorTypeFeaturesEXT::operator VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *>(this);
}

MutableDescriptorTypeListEXT::operator const VkMutableDescriptorTypeListEXT &() const noexcept {
  return *reinterpret_cast<const VkMutableDescriptorTypeListEXT *>(this);
}

MutableDescriptorTypeListEXT::operator VkMutableDescriptorTypeListEXT &() noexcept {
  return *reinterpret_cast<VkMutableDescriptorTypeListEXT *>(this);
}

MutableDescriptorTypeListEXT::operator const VkMutableDescriptorTypeListEXT *() const noexcept {
  return reinterpret_cast<const VkMutableDescriptorTypeListEXT *>(this);
}

MutableDescriptorTypeListEXT::operator VkMutableDescriptorTypeListEXT *() noexcept {
  return reinterpret_cast<VkMutableDescriptorTypeListEXT *>(this);
}

MutableDescriptorTypeCreateInfoEXT::operator const VkMutableDescriptorTypeCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkMutableDescriptorTypeCreateInfoEXT *>(this);
}

MutableDescriptorTypeCreateInfoEXT::operator VkMutableDescriptorTypeCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkMutableDescriptorTypeCreateInfoEXT *>(this);
}

MutableDescriptorTypeCreateInfoEXT::operator const VkMutableDescriptorTypeCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkMutableDescriptorTypeCreateInfoEXT *>(this);
}

MutableDescriptorTypeCreateInfoEXT::operator VkMutableDescriptorTypeCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkMutableDescriptorTypeCreateInfoEXT *>(this);
}

PhysicalDeviceDepthClipControlFeaturesEXT::operator const VkPhysicalDeviceDepthClipControlFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDepthClipControlFeaturesEXT *>(this);
}

PhysicalDeviceDepthClipControlFeaturesEXT::operator VkPhysicalDeviceDepthClipControlFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDepthClipControlFeaturesEXT *>(this);
}

PhysicalDeviceDepthClipControlFeaturesEXT::operator const VkPhysicalDeviceDepthClipControlFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDepthClipControlFeaturesEXT *>(this);
}

PhysicalDeviceDepthClipControlFeaturesEXT::operator VkPhysicalDeviceDepthClipControlFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDepthClipControlFeaturesEXT *>(this);
}

PipelineViewportDepthClipControlCreateInfoEXT::operator const VkPipelineViewportDepthClipControlCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkPipelineViewportDepthClipControlCreateInfoEXT *>(this);
}

PipelineViewportDepthClipControlCreateInfoEXT::operator VkPipelineViewportDepthClipControlCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkPipelineViewportDepthClipControlCreateInfoEXT *>(this);
}

PipelineViewportDepthClipControlCreateInfoEXT::operator const VkPipelineViewportDepthClipControlCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkPipelineViewportDepthClipControlCreateInfoEXT *>(this);
}

PipelineViewportDepthClipControlCreateInfoEXT::operator VkPipelineViewportDepthClipControlCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkPipelineViewportDepthClipControlCreateInfoEXT *>(this);
}

PhysicalDeviceVertexInputDynamicStateFeaturesEXT::operator const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *>(this);
}

PhysicalDeviceVertexInputDynamicStateFeaturesEXT::operator VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *>(this);
}

PhysicalDeviceVertexInputDynamicStateFeaturesEXT::operator const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *>(this);
}

PhysicalDeviceVertexInputDynamicStateFeaturesEXT::operator VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *>(this);
}

PhysicalDeviceExternalMemoryRDMAFeaturesNV::operator const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV *>(this);
}

PhysicalDeviceExternalMemoryRDMAFeaturesNV::operator VkPhysicalDeviceExternalMemoryRDMAFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceExternalMemoryRDMAFeaturesNV *>(this);
}

PhysicalDeviceExternalMemoryRDMAFeaturesNV::operator const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV *>(this);
}

PhysicalDeviceExternalMemoryRDMAFeaturesNV::operator VkPhysicalDeviceExternalMemoryRDMAFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceExternalMemoryRDMAFeaturesNV *>(this);
}

PhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR::operator const VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR *>(this);
}

PhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR::
operator VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR *>(this);
}

PhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR::operator const VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR *>(this);
}

PhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR::
operator VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR *>(this);
}

VertexInputBindingDescription2EXT::operator const VkVertexInputBindingDescription2EXT &() const noexcept {
  return *reinterpret_cast<const VkVertexInputBindingDescription2EXT *>(this);
}

VertexInputBindingDescription2EXT::operator VkVertexInputBindingDescription2EXT &() noexcept {
  return *reinterpret_cast<VkVertexInputBindingDescription2EXT *>(this);
}

VertexInputBindingDescription2EXT::operator const VkVertexInputBindingDescription2EXT *() const noexcept {
  return reinterpret_cast<const VkVertexInputBindingDescription2EXT *>(this);
}

VertexInputBindingDescription2EXT::operator VkVertexInputBindingDescription2EXT *() noexcept {
  return reinterpret_cast<VkVertexInputBindingDescription2EXT *>(this);
}

VertexInputAttributeDescription2EXT::operator const VkVertexInputAttributeDescription2EXT &() const noexcept {
  return *reinterpret_cast<const VkVertexInputAttributeDescription2EXT *>(this);
}

VertexInputAttributeDescription2EXT::operator VkVertexInputAttributeDescription2EXT &() noexcept {
  return *reinterpret_cast<VkVertexInputAttributeDescription2EXT *>(this);
}

VertexInputAttributeDescription2EXT::operator const VkVertexInputAttributeDescription2EXT *() const noexcept {
  return reinterpret_cast<const VkVertexInputAttributeDescription2EXT *>(this);
}

VertexInputAttributeDescription2EXT::operator VkVertexInputAttributeDescription2EXT *() noexcept {
  return reinterpret_cast<VkVertexInputAttributeDescription2EXT *>(this);
}

PhysicalDeviceColorWriteEnableFeaturesEXT::operator const VkPhysicalDeviceColorWriteEnableFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceColorWriteEnableFeaturesEXT *>(this);
}

PhysicalDeviceColorWriteEnableFeaturesEXT::operator VkPhysicalDeviceColorWriteEnableFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceColorWriteEnableFeaturesEXT *>(this);
}

PhysicalDeviceColorWriteEnableFeaturesEXT::operator const VkPhysicalDeviceColorWriteEnableFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceColorWriteEnableFeaturesEXT *>(this);
}

PhysicalDeviceColorWriteEnableFeaturesEXT::operator VkPhysicalDeviceColorWriteEnableFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceColorWriteEnableFeaturesEXT *>(this);
}

PipelineColorWriteCreateInfoEXT::operator const VkPipelineColorWriteCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkPipelineColorWriteCreateInfoEXT *>(this);
}

PipelineColorWriteCreateInfoEXT::operator VkPipelineColorWriteCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkPipelineColorWriteCreateInfoEXT *>(this);
}

PipelineColorWriteCreateInfoEXT::operator const VkPipelineColorWriteCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkPipelineColorWriteCreateInfoEXT *>(this);
}

PipelineColorWriteCreateInfoEXT::operator VkPipelineColorWriteCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkPipelineColorWriteCreateInfoEXT *>(this);
}

MemoryBarrier2::operator const VkMemoryBarrier2 &() const noexcept {
  return *reinterpret_cast<const VkMemoryBarrier2 *>(this);
}

MemoryBarrier2::operator VkMemoryBarrier2 &() noexcept {
  return *reinterpret_cast<VkMemoryBarrier2 *>(this);
}

MemoryBarrier2::operator const VkMemoryBarrier2 *() const noexcept {
  return reinterpret_cast<const VkMemoryBarrier2 *>(this);
}

MemoryBarrier2::operator VkMemoryBarrier2 *() noexcept {
  return reinterpret_cast<VkMemoryBarrier2 *>(this);
}

ImageMemoryBarrier2::operator const VkImageMemoryBarrier2 &() const noexcept {
  return *reinterpret_cast<const VkImageMemoryBarrier2 *>(this);
}

ImageMemoryBarrier2::operator VkImageMemoryBarrier2 &() noexcept {
  return *reinterpret_cast<VkImageMemoryBarrier2 *>(this);
}

ImageMemoryBarrier2::operator const VkImageMemoryBarrier2 *() const noexcept {
  return reinterpret_cast<const VkImageMemoryBarrier2 *>(this);
}

ImageMemoryBarrier2::operator VkImageMemoryBarrier2 *() noexcept {
  return reinterpret_cast<VkImageMemoryBarrier2 *>(this);
}

BufferMemoryBarrier2::operator const VkBufferMemoryBarrier2 &() const noexcept {
  return *reinterpret_cast<const VkBufferMemoryBarrier2 *>(this);
}

BufferMemoryBarrier2::operator VkBufferMemoryBarrier2 &() noexcept {
  return *reinterpret_cast<VkBufferMemoryBarrier2 *>(this);
}

BufferMemoryBarrier2::operator const VkBufferMemoryBarrier2 *() const noexcept {
  return reinterpret_cast<const VkBufferMemoryBarrier2 *>(this);
}

BufferMemoryBarrier2::operator VkBufferMemoryBarrier2 *() noexcept {
  return reinterpret_cast<VkBufferMemoryBarrier2 *>(this);
}

DependencyInfo::operator const VkDependencyInfo &() const noexcept {
  return *reinterpret_cast<const VkDependencyInfo *>(this);
}

DependencyInfo::operator VkDependencyInfo &() noexcept {
  return *reinterpret_cast<VkDependencyInfo *>(this);
}

DependencyInfo::operator const VkDependencyInfo *() const noexcept {
  return reinterpret_cast<const VkDependencyInfo *>(this);
}

DependencyInfo::operator VkDependencyInfo *() noexcept {
  return reinterpret_cast<VkDependencyInfo *>(this);
}

SemaphoreSubmitInfo::operator const VkSemaphoreSubmitInfo &() const noexcept {
  return *reinterpret_cast<const VkSemaphoreSubmitInfo *>(this);
}

SemaphoreSubmitInfo::operator VkSemaphoreSubmitInfo &() noexcept {
  return *reinterpret_cast<VkSemaphoreSubmitInfo *>(this);
}

SemaphoreSubmitInfo::operator const VkSemaphoreSubmitInfo *() const noexcept {
  return reinterpret_cast<const VkSemaphoreSubmitInfo *>(this);
}

SemaphoreSubmitInfo::operator VkSemaphoreSubmitInfo *() noexcept {
  return reinterpret_cast<VkSemaphoreSubmitInfo *>(this);
}

CommandBufferSubmitInfo::operator const VkCommandBufferSubmitInfo &() const noexcept {
  return *reinterpret_cast<const VkCommandBufferSubmitInfo *>(this);
}

CommandBufferSubmitInfo::operator VkCommandBufferSubmitInfo &() noexcept {
  return *reinterpret_cast<VkCommandBufferSubmitInfo *>(this);
}

CommandBufferSubmitInfo::operator const VkCommandBufferSubmitInfo *() const noexcept {
  return reinterpret_cast<const VkCommandBufferSubmitInfo *>(this);
}

CommandBufferSubmitInfo::operator VkCommandBufferSubmitInfo *() noexcept {
  return reinterpret_cast<VkCommandBufferSubmitInfo *>(this);
}

SubmitInfo2::operator const VkSubmitInfo2 &() const noexcept {
  return *reinterpret_cast<const VkSubmitInfo2 *>(this);
}

SubmitInfo2::operator VkSubmitInfo2 &() noexcept {
  return *reinterpret_cast<VkSubmitInfo2 *>(this);
}

SubmitInfo2::operator const VkSubmitInfo2 *() const noexcept {
  return reinterpret_cast<const VkSubmitInfo2 *>(this);
}

SubmitInfo2::operator VkSubmitInfo2 *() noexcept {
  return reinterpret_cast<VkSubmitInfo2 *>(this);
}

QueueFamilyCheckpointProperties2NV::operator const VkQueueFamilyCheckpointProperties2NV &() const noexcept {
  return *reinterpret_cast<const VkQueueFamilyCheckpointProperties2NV *>(this);
}

QueueFamilyCheckpointProperties2NV::operator VkQueueFamilyCheckpointProperties2NV &() noexcept {
  return *reinterpret_cast<VkQueueFamilyCheckpointProperties2NV *>(this);
}

QueueFamilyCheckpointProperties2NV::operator const VkQueueFamilyCheckpointProperties2NV *() const noexcept {
  return reinterpret_cast<const VkQueueFamilyCheckpointProperties2NV *>(this);
}

QueueFamilyCheckpointProperties2NV::operator VkQueueFamilyCheckpointProperties2NV *() noexcept {
  return reinterpret_cast<VkQueueFamilyCheckpointProperties2NV *>(this);
}

CheckpointData2NV::operator const VkCheckpointData2NV &() const noexcept {
  return *reinterpret_cast<const VkCheckpointData2NV *>(this);
}

CheckpointData2NV::operator VkCheckpointData2NV &() noexcept {
  return *reinterpret_cast<VkCheckpointData2NV *>(this);
}

CheckpointData2NV::operator const VkCheckpointData2NV *() const noexcept {
  return reinterpret_cast<const VkCheckpointData2NV *>(this);
}

CheckpointData2NV::operator VkCheckpointData2NV *() noexcept {
  return reinterpret_cast<VkCheckpointData2NV *>(this);
}

PhysicalDeviceSynchronization2Features::operator const VkPhysicalDeviceSynchronization2Features &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceSynchronization2Features *>(this);
}

PhysicalDeviceSynchronization2Features::operator VkPhysicalDeviceSynchronization2Features &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceSynchronization2Features *>(this);
}

PhysicalDeviceSynchronization2Features::operator const VkPhysicalDeviceSynchronization2Features *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceSynchronization2Features *>(this);
}

PhysicalDeviceSynchronization2Features::operator VkPhysicalDeviceSynchronization2Features *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceSynchronization2Features *>(this);
}

PhysicalDeviceHostImageCopyFeaturesEXT::operator const VkPhysicalDeviceHostImageCopyFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceHostImageCopyFeaturesEXT *>(this);
}

PhysicalDeviceHostImageCopyFeaturesEXT::operator VkPhysicalDeviceHostImageCopyFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceHostImageCopyFeaturesEXT *>(this);
}

PhysicalDeviceHostImageCopyFeaturesEXT::operator const VkPhysicalDeviceHostImageCopyFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceHostImageCopyFeaturesEXT *>(this);
}

PhysicalDeviceHostImageCopyFeaturesEXT::operator VkPhysicalDeviceHostImageCopyFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceHostImageCopyFeaturesEXT *>(this);
}

PhysicalDeviceHostImageCopyPropertiesEXT::operator const VkPhysicalDeviceHostImageCopyPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceHostImageCopyPropertiesEXT *>(this);
}

PhysicalDeviceHostImageCopyPropertiesEXT::operator VkPhysicalDeviceHostImageCopyPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceHostImageCopyPropertiesEXT *>(this);
}

PhysicalDeviceHostImageCopyPropertiesEXT::operator const VkPhysicalDeviceHostImageCopyPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceHostImageCopyPropertiesEXT *>(this);
}

PhysicalDeviceHostImageCopyPropertiesEXT::operator VkPhysicalDeviceHostImageCopyPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceHostImageCopyPropertiesEXT *>(this);
}

MemoryToImageCopyEXT::operator const VkMemoryToImageCopyEXT &() const noexcept {
  return *reinterpret_cast<const VkMemoryToImageCopyEXT *>(this);
}

MemoryToImageCopyEXT::operator VkMemoryToImageCopyEXT &() noexcept {
  return *reinterpret_cast<VkMemoryToImageCopyEXT *>(this);
}

MemoryToImageCopyEXT::operator const VkMemoryToImageCopyEXT *() const noexcept {
  return reinterpret_cast<const VkMemoryToImageCopyEXT *>(this);
}

MemoryToImageCopyEXT::operator VkMemoryToImageCopyEXT *() noexcept {
  return reinterpret_cast<VkMemoryToImageCopyEXT *>(this);
}

ImageToMemoryCopyEXT::operator const VkImageToMemoryCopyEXT &() const noexcept {
  return *reinterpret_cast<const VkImageToMemoryCopyEXT *>(this);
}

ImageToMemoryCopyEXT::operator VkImageToMemoryCopyEXT &() noexcept {
  return *reinterpret_cast<VkImageToMemoryCopyEXT *>(this);
}

ImageToMemoryCopyEXT::operator const VkImageToMemoryCopyEXT *() const noexcept {
  return reinterpret_cast<const VkImageToMemoryCopyEXT *>(this);
}

ImageToMemoryCopyEXT::operator VkImageToMemoryCopyEXT *() noexcept {
  return reinterpret_cast<VkImageToMemoryCopyEXT *>(this);
}

CopyMemoryToImageInfoEXT::operator const VkCopyMemoryToImageInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkCopyMemoryToImageInfoEXT *>(this);
}

CopyMemoryToImageInfoEXT::operator VkCopyMemoryToImageInfoEXT &() noexcept {
  return *reinterpret_cast<VkCopyMemoryToImageInfoEXT *>(this);
}

CopyMemoryToImageInfoEXT::operator const VkCopyMemoryToImageInfoEXT *() const noexcept {
  return reinterpret_cast<const VkCopyMemoryToImageInfoEXT *>(this);
}

CopyMemoryToImageInfoEXT::operator VkCopyMemoryToImageInfoEXT *() noexcept {
  return reinterpret_cast<VkCopyMemoryToImageInfoEXT *>(this);
}

CopyImageToMemoryInfoEXT::operator const VkCopyImageToMemoryInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkCopyImageToMemoryInfoEXT *>(this);
}

CopyImageToMemoryInfoEXT::operator VkCopyImageToMemoryInfoEXT &() noexcept {
  return *reinterpret_cast<VkCopyImageToMemoryInfoEXT *>(this);
}

CopyImageToMemoryInfoEXT::operator const VkCopyImageToMemoryInfoEXT *() const noexcept {
  return reinterpret_cast<const VkCopyImageToMemoryInfoEXT *>(this);
}

CopyImageToMemoryInfoEXT::operator VkCopyImageToMemoryInfoEXT *() noexcept {
  return reinterpret_cast<VkCopyImageToMemoryInfoEXT *>(this);
}

CopyImageToImageInfoEXT::operator const VkCopyImageToImageInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkCopyImageToImageInfoEXT *>(this);
}

CopyImageToImageInfoEXT::operator VkCopyImageToImageInfoEXT &() noexcept {
  return *reinterpret_cast<VkCopyImageToImageInfoEXT *>(this);
}

CopyImageToImageInfoEXT::operator const VkCopyImageToImageInfoEXT *() const noexcept {
  return reinterpret_cast<const VkCopyImageToImageInfoEXT *>(this);
}

CopyImageToImageInfoEXT::operator VkCopyImageToImageInfoEXT *() noexcept {
  return reinterpret_cast<VkCopyImageToImageInfoEXT *>(this);
}

HostImageLayoutTransitionInfoEXT::operator const VkHostImageLayoutTransitionInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkHostImageLayoutTransitionInfoEXT *>(this);
}

HostImageLayoutTransitionInfoEXT::operator VkHostImageLayoutTransitionInfoEXT &() noexcept {
  return *reinterpret_cast<VkHostImageLayoutTransitionInfoEXT *>(this);
}

HostImageLayoutTransitionInfoEXT::operator const VkHostImageLayoutTransitionInfoEXT *() const noexcept {
  return reinterpret_cast<const VkHostImageLayoutTransitionInfoEXT *>(this);
}

HostImageLayoutTransitionInfoEXT::operator VkHostImageLayoutTransitionInfoEXT *() noexcept {
  return reinterpret_cast<VkHostImageLayoutTransitionInfoEXT *>(this);
}

SubresourceHostMemcpySizeEXT::operator const VkSubresourceHostMemcpySizeEXT &() const noexcept {
  return *reinterpret_cast<const VkSubresourceHostMemcpySizeEXT *>(this);
}

SubresourceHostMemcpySizeEXT::operator VkSubresourceHostMemcpySizeEXT &() noexcept {
  return *reinterpret_cast<VkSubresourceHostMemcpySizeEXT *>(this);
}

SubresourceHostMemcpySizeEXT::operator const VkSubresourceHostMemcpySizeEXT *() const noexcept {
  return reinterpret_cast<const VkSubresourceHostMemcpySizeEXT *>(this);
}

SubresourceHostMemcpySizeEXT::operator VkSubresourceHostMemcpySizeEXT *() noexcept {
  return reinterpret_cast<VkSubresourceHostMemcpySizeEXT *>(this);
}

HostImageCopyDevicePerformanceQueryEXT::operator const VkHostImageCopyDevicePerformanceQueryEXT &() const noexcept {
  return *reinterpret_cast<const VkHostImageCopyDevicePerformanceQueryEXT *>(this);
}

HostImageCopyDevicePerformanceQueryEXT::operator VkHostImageCopyDevicePerformanceQueryEXT &() noexcept {
  return *reinterpret_cast<VkHostImageCopyDevicePerformanceQueryEXT *>(this);
}

HostImageCopyDevicePerformanceQueryEXT::operator const VkHostImageCopyDevicePerformanceQueryEXT *() const noexcept {
  return reinterpret_cast<const VkHostImageCopyDevicePerformanceQueryEXT *>(this);
}

HostImageCopyDevicePerformanceQueryEXT::operator VkHostImageCopyDevicePerformanceQueryEXT *() noexcept {
  return reinterpret_cast<VkHostImageCopyDevicePerformanceQueryEXT *>(this);
}

PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT::operator const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *>(this);
}

PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT::operator VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *>(this);
}

PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT::operator const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *>(this);
}

PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT::operator VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *>(this);
}

PhysicalDeviceLegacyDitheringFeaturesEXT::operator const VkPhysicalDeviceLegacyDitheringFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceLegacyDitheringFeaturesEXT *>(this);
}

PhysicalDeviceLegacyDitheringFeaturesEXT::operator VkPhysicalDeviceLegacyDitheringFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceLegacyDitheringFeaturesEXT *>(this);
}

PhysicalDeviceLegacyDitheringFeaturesEXT::operator const VkPhysicalDeviceLegacyDitheringFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceLegacyDitheringFeaturesEXT *>(this);
}

PhysicalDeviceLegacyDitheringFeaturesEXT::operator VkPhysicalDeviceLegacyDitheringFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceLegacyDitheringFeaturesEXT *>(this);
}

PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT::operator const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *>(this);
}

PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT::
operator VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *>(this);
}

PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT::operator const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *>(this);
}

PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT::
operator VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *>(this);
}

SubpassResolvePerformanceQueryEXT::operator const VkSubpassResolvePerformanceQueryEXT &() const noexcept {
  return *reinterpret_cast<const VkSubpassResolvePerformanceQueryEXT *>(this);
}

SubpassResolvePerformanceQueryEXT::operator VkSubpassResolvePerformanceQueryEXT &() noexcept {
  return *reinterpret_cast<VkSubpassResolvePerformanceQueryEXT *>(this);
}

SubpassResolvePerformanceQueryEXT::operator const VkSubpassResolvePerformanceQueryEXT *() const noexcept {
  return reinterpret_cast<const VkSubpassResolvePerformanceQueryEXT *>(this);
}

SubpassResolvePerformanceQueryEXT::operator VkSubpassResolvePerformanceQueryEXT *() noexcept {
  return reinterpret_cast<VkSubpassResolvePerformanceQueryEXT *>(this);
}

MultisampledRenderToSingleSampledInfoEXT::operator const VkMultisampledRenderToSingleSampledInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkMultisampledRenderToSingleSampledInfoEXT *>(this);
}

MultisampledRenderToSingleSampledInfoEXT::operator VkMultisampledRenderToSingleSampledInfoEXT &() noexcept {
  return *reinterpret_cast<VkMultisampledRenderToSingleSampledInfoEXT *>(this);
}

MultisampledRenderToSingleSampledInfoEXT::operator const VkMultisampledRenderToSingleSampledInfoEXT *() const noexcept {
  return reinterpret_cast<const VkMultisampledRenderToSingleSampledInfoEXT *>(this);
}

MultisampledRenderToSingleSampledInfoEXT::operator VkMultisampledRenderToSingleSampledInfoEXT *() noexcept {
  return reinterpret_cast<VkMultisampledRenderToSingleSampledInfoEXT *>(this);
}

PhysicalDevicePipelineProtectedAccessFeaturesEXT::operator const VkPhysicalDevicePipelineProtectedAccessFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDevicePipelineProtectedAccessFeaturesEXT *>(this);
}

PhysicalDevicePipelineProtectedAccessFeaturesEXT::operator VkPhysicalDevicePipelineProtectedAccessFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDevicePipelineProtectedAccessFeaturesEXT *>(this);
}

PhysicalDevicePipelineProtectedAccessFeaturesEXT::operator const VkPhysicalDevicePipelineProtectedAccessFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDevicePipelineProtectedAccessFeaturesEXT *>(this);
}

PhysicalDevicePipelineProtectedAccessFeaturesEXT::operator VkPhysicalDevicePipelineProtectedAccessFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDevicePipelineProtectedAccessFeaturesEXT *>(this);
}

QueueFamilyVideoPropertiesKHR::operator const VkQueueFamilyVideoPropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkQueueFamilyVideoPropertiesKHR *>(this);
}

QueueFamilyVideoPropertiesKHR::operator VkQueueFamilyVideoPropertiesKHR &() noexcept {
  return *reinterpret_cast<VkQueueFamilyVideoPropertiesKHR *>(this);
}

QueueFamilyVideoPropertiesKHR::operator const VkQueueFamilyVideoPropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkQueueFamilyVideoPropertiesKHR *>(this);
}

QueueFamilyVideoPropertiesKHR::operator VkQueueFamilyVideoPropertiesKHR *() noexcept {
  return reinterpret_cast<VkQueueFamilyVideoPropertiesKHR *>(this);
}

QueueFamilyQueryResultStatusPropertiesKHR::operator const VkQueueFamilyQueryResultStatusPropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkQueueFamilyQueryResultStatusPropertiesKHR *>(this);
}

QueueFamilyQueryResultStatusPropertiesKHR::operator VkQueueFamilyQueryResultStatusPropertiesKHR &() noexcept {
  return *reinterpret_cast<VkQueueFamilyQueryResultStatusPropertiesKHR *>(this);
}

QueueFamilyQueryResultStatusPropertiesKHR::operator const VkQueueFamilyQueryResultStatusPropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkQueueFamilyQueryResultStatusPropertiesKHR *>(this);
}

QueueFamilyQueryResultStatusPropertiesKHR::operator VkQueueFamilyQueryResultStatusPropertiesKHR *() noexcept {
  return reinterpret_cast<VkQueueFamilyQueryResultStatusPropertiesKHR *>(this);
}

VideoProfileInfoKHR::operator const VkVideoProfileInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoProfileInfoKHR *>(this);
}

VideoProfileInfoKHR::operator VkVideoProfileInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoProfileInfoKHR *>(this);
}

VideoProfileInfoKHR::operator const VkVideoProfileInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoProfileInfoKHR *>(this);
}

VideoProfileInfoKHR::operator VkVideoProfileInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoProfileInfoKHR *>(this);
}

VideoProfileListInfoKHR::operator const VkVideoProfileListInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoProfileListInfoKHR *>(this);
}

VideoProfileListInfoKHR::operator VkVideoProfileListInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoProfileListInfoKHR *>(this);
}

VideoProfileListInfoKHR::operator const VkVideoProfileListInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoProfileListInfoKHR *>(this);
}

VideoProfileListInfoKHR::operator VkVideoProfileListInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoProfileListInfoKHR *>(this);
}

PhysicalDeviceVideoFormatInfoKHR::operator const VkPhysicalDeviceVideoFormatInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceVideoFormatInfoKHR *>(this);
}

PhysicalDeviceVideoFormatInfoKHR::operator VkPhysicalDeviceVideoFormatInfoKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceVideoFormatInfoKHR *>(this);
}

PhysicalDeviceVideoFormatInfoKHR::operator const VkPhysicalDeviceVideoFormatInfoKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceVideoFormatInfoKHR *>(this);
}

PhysicalDeviceVideoFormatInfoKHR::operator VkPhysicalDeviceVideoFormatInfoKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceVideoFormatInfoKHR *>(this);
}

VideoFormatPropertiesKHR::operator const VkVideoFormatPropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoFormatPropertiesKHR *>(this);
}

VideoFormatPropertiesKHR::operator VkVideoFormatPropertiesKHR &() noexcept {
  return *reinterpret_cast<VkVideoFormatPropertiesKHR *>(this);
}

VideoFormatPropertiesKHR::operator const VkVideoFormatPropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkVideoFormatPropertiesKHR *>(this);
}

VideoFormatPropertiesKHR::operator VkVideoFormatPropertiesKHR *() noexcept {
  return reinterpret_cast<VkVideoFormatPropertiesKHR *>(this);
}

VideoCapabilitiesKHR::operator const VkVideoCapabilitiesKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoCapabilitiesKHR *>(this);
}

VideoCapabilitiesKHR::operator VkVideoCapabilitiesKHR &() noexcept {
  return *reinterpret_cast<VkVideoCapabilitiesKHR *>(this);
}

VideoCapabilitiesKHR::operator const VkVideoCapabilitiesKHR *() const noexcept {
  return reinterpret_cast<const VkVideoCapabilitiesKHR *>(this);
}

VideoCapabilitiesKHR::operator VkVideoCapabilitiesKHR *() noexcept {
  return reinterpret_cast<VkVideoCapabilitiesKHR *>(this);
}

VideoSessionMemoryRequirementsKHR::operator const VkVideoSessionMemoryRequirementsKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoSessionMemoryRequirementsKHR *>(this);
}

VideoSessionMemoryRequirementsKHR::operator VkVideoSessionMemoryRequirementsKHR &() noexcept {
  return *reinterpret_cast<VkVideoSessionMemoryRequirementsKHR *>(this);
}

VideoSessionMemoryRequirementsKHR::operator const VkVideoSessionMemoryRequirementsKHR *() const noexcept {
  return reinterpret_cast<const VkVideoSessionMemoryRequirementsKHR *>(this);
}

VideoSessionMemoryRequirementsKHR::operator VkVideoSessionMemoryRequirementsKHR *() noexcept {
  return reinterpret_cast<VkVideoSessionMemoryRequirementsKHR *>(this);
}

BindVideoSessionMemoryInfoKHR::operator const VkBindVideoSessionMemoryInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkBindVideoSessionMemoryInfoKHR *>(this);
}

BindVideoSessionMemoryInfoKHR::operator VkBindVideoSessionMemoryInfoKHR &() noexcept {
  return *reinterpret_cast<VkBindVideoSessionMemoryInfoKHR *>(this);
}

BindVideoSessionMemoryInfoKHR::operator const VkBindVideoSessionMemoryInfoKHR *() const noexcept {
  return reinterpret_cast<const VkBindVideoSessionMemoryInfoKHR *>(this);
}

BindVideoSessionMemoryInfoKHR::operator VkBindVideoSessionMemoryInfoKHR *() noexcept {
  return reinterpret_cast<VkBindVideoSessionMemoryInfoKHR *>(this);
}

VideoPictureResourceInfoKHR::operator const VkVideoPictureResourceInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoPictureResourceInfoKHR *>(this);
}

VideoPictureResourceInfoKHR::operator VkVideoPictureResourceInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoPictureResourceInfoKHR *>(this);
}

VideoPictureResourceInfoKHR::operator const VkVideoPictureResourceInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoPictureResourceInfoKHR *>(this);
}

VideoPictureResourceInfoKHR::operator VkVideoPictureResourceInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoPictureResourceInfoKHR *>(this);
}

VideoReferenceSlotInfoKHR::operator const VkVideoReferenceSlotInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoReferenceSlotInfoKHR *>(this);
}

VideoReferenceSlotInfoKHR::operator VkVideoReferenceSlotInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoReferenceSlotInfoKHR *>(this);
}

VideoReferenceSlotInfoKHR::operator const VkVideoReferenceSlotInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoReferenceSlotInfoKHR *>(this);
}

VideoReferenceSlotInfoKHR::operator VkVideoReferenceSlotInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoReferenceSlotInfoKHR *>(this);
}

VideoDecodeCapabilitiesKHR::operator const VkVideoDecodeCapabilitiesKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoDecodeCapabilitiesKHR *>(this);
}

VideoDecodeCapabilitiesKHR::operator VkVideoDecodeCapabilitiesKHR &() noexcept {
  return *reinterpret_cast<VkVideoDecodeCapabilitiesKHR *>(this);
}

VideoDecodeCapabilitiesKHR::operator const VkVideoDecodeCapabilitiesKHR *() const noexcept {
  return reinterpret_cast<const VkVideoDecodeCapabilitiesKHR *>(this);
}

VideoDecodeCapabilitiesKHR::operator VkVideoDecodeCapabilitiesKHR *() noexcept {
  return reinterpret_cast<VkVideoDecodeCapabilitiesKHR *>(this);
}

VideoDecodeUsageInfoKHR::operator const VkVideoDecodeUsageInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoDecodeUsageInfoKHR *>(this);
}

VideoDecodeUsageInfoKHR::operator VkVideoDecodeUsageInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoDecodeUsageInfoKHR *>(this);
}

VideoDecodeUsageInfoKHR::operator const VkVideoDecodeUsageInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoDecodeUsageInfoKHR *>(this);
}

VideoDecodeUsageInfoKHR::operator VkVideoDecodeUsageInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoDecodeUsageInfoKHR *>(this);
}

VideoDecodeInfoKHR::operator const VkVideoDecodeInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoDecodeInfoKHR *>(this);
}

VideoDecodeInfoKHR::operator VkVideoDecodeInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoDecodeInfoKHR *>(this);
}

VideoDecodeInfoKHR::operator const VkVideoDecodeInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoDecodeInfoKHR *>(this);
}

VideoDecodeInfoKHR::operator VkVideoDecodeInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoDecodeInfoKHR *>(this);
}

PhysicalDeviceVideoMaintenance1FeaturesKHR::operator const VkPhysicalDeviceVideoMaintenance1FeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceVideoMaintenance1FeaturesKHR *>(this);
}

PhysicalDeviceVideoMaintenance1FeaturesKHR::operator VkPhysicalDeviceVideoMaintenance1FeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceVideoMaintenance1FeaturesKHR *>(this);
}

PhysicalDeviceVideoMaintenance1FeaturesKHR::operator const VkPhysicalDeviceVideoMaintenance1FeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceVideoMaintenance1FeaturesKHR *>(this);
}

PhysicalDeviceVideoMaintenance1FeaturesKHR::operator VkPhysicalDeviceVideoMaintenance1FeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceVideoMaintenance1FeaturesKHR *>(this);
}

VideoInlineQueryInfoKHR::operator const VkVideoInlineQueryInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoInlineQueryInfoKHR *>(this);
}

VideoInlineQueryInfoKHR::operator VkVideoInlineQueryInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoInlineQueryInfoKHR *>(this);
}

VideoInlineQueryInfoKHR::operator const VkVideoInlineQueryInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoInlineQueryInfoKHR *>(this);
}

VideoInlineQueryInfoKHR::operator VkVideoInlineQueryInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoInlineQueryInfoKHR *>(this);
}

VideoDecodeH264ProfileInfoKHR::operator const VkVideoDecodeH264ProfileInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoDecodeH264ProfileInfoKHR *>(this);
}

VideoDecodeH264ProfileInfoKHR::operator VkVideoDecodeH264ProfileInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoDecodeH264ProfileInfoKHR *>(this);
}

VideoDecodeH264ProfileInfoKHR::operator const VkVideoDecodeH264ProfileInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoDecodeH264ProfileInfoKHR *>(this);
}

VideoDecodeH264ProfileInfoKHR::operator VkVideoDecodeH264ProfileInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoDecodeH264ProfileInfoKHR *>(this);
}

VideoDecodeH264CapabilitiesKHR::operator const VkVideoDecodeH264CapabilitiesKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoDecodeH264CapabilitiesKHR *>(this);
}

VideoDecodeH264CapabilitiesKHR::operator VkVideoDecodeH264CapabilitiesKHR &() noexcept {
  return *reinterpret_cast<VkVideoDecodeH264CapabilitiesKHR *>(this);
}

VideoDecodeH264CapabilitiesKHR::operator const VkVideoDecodeH264CapabilitiesKHR *() const noexcept {
  return reinterpret_cast<const VkVideoDecodeH264CapabilitiesKHR *>(this);
}

VideoDecodeH264CapabilitiesKHR::operator VkVideoDecodeH264CapabilitiesKHR *() noexcept {
  return reinterpret_cast<VkVideoDecodeH264CapabilitiesKHR *>(this);
}

VideoDecodeH264SessionParametersAddInfoKHR::operator const VkVideoDecodeH264SessionParametersAddInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoDecodeH264SessionParametersAddInfoKHR *>(this);
}

VideoDecodeH264SessionParametersAddInfoKHR::operator VkVideoDecodeH264SessionParametersAddInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoDecodeH264SessionParametersAddInfoKHR *>(this);
}

VideoDecodeH264SessionParametersAddInfoKHR::operator const VkVideoDecodeH264SessionParametersAddInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoDecodeH264SessionParametersAddInfoKHR *>(this);
}

VideoDecodeH264SessionParametersAddInfoKHR::operator VkVideoDecodeH264SessionParametersAddInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoDecodeH264SessionParametersAddInfoKHR *>(this);
}

VideoDecodeH264SessionParametersCreateInfoKHR::operator const VkVideoDecodeH264SessionParametersCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoDecodeH264SessionParametersCreateInfoKHR *>(this);
}

VideoDecodeH264SessionParametersCreateInfoKHR::operator VkVideoDecodeH264SessionParametersCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoDecodeH264SessionParametersCreateInfoKHR *>(this);
}

VideoDecodeH264SessionParametersCreateInfoKHR::operator const VkVideoDecodeH264SessionParametersCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoDecodeH264SessionParametersCreateInfoKHR *>(this);
}

VideoDecodeH264SessionParametersCreateInfoKHR::operator VkVideoDecodeH264SessionParametersCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoDecodeH264SessionParametersCreateInfoKHR *>(this);
}

VideoDecodeH264PictureInfoKHR::operator const VkVideoDecodeH264PictureInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoDecodeH264PictureInfoKHR *>(this);
}

VideoDecodeH264PictureInfoKHR::operator VkVideoDecodeH264PictureInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoDecodeH264PictureInfoKHR *>(this);
}

VideoDecodeH264PictureInfoKHR::operator const VkVideoDecodeH264PictureInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoDecodeH264PictureInfoKHR *>(this);
}

VideoDecodeH264PictureInfoKHR::operator VkVideoDecodeH264PictureInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoDecodeH264PictureInfoKHR *>(this);
}

VideoDecodeH264DpbSlotInfoKHR::operator const VkVideoDecodeH264DpbSlotInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoDecodeH264DpbSlotInfoKHR *>(this);
}

VideoDecodeH264DpbSlotInfoKHR::operator VkVideoDecodeH264DpbSlotInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoDecodeH264DpbSlotInfoKHR *>(this);
}

VideoDecodeH264DpbSlotInfoKHR::operator const VkVideoDecodeH264DpbSlotInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoDecodeH264DpbSlotInfoKHR *>(this);
}

VideoDecodeH264DpbSlotInfoKHR::operator VkVideoDecodeH264DpbSlotInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoDecodeH264DpbSlotInfoKHR *>(this);
}

VideoDecodeH265ProfileInfoKHR::operator const VkVideoDecodeH265ProfileInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoDecodeH265ProfileInfoKHR *>(this);
}

VideoDecodeH265ProfileInfoKHR::operator VkVideoDecodeH265ProfileInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoDecodeH265ProfileInfoKHR *>(this);
}

VideoDecodeH265ProfileInfoKHR::operator const VkVideoDecodeH265ProfileInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoDecodeH265ProfileInfoKHR *>(this);
}

VideoDecodeH265ProfileInfoKHR::operator VkVideoDecodeH265ProfileInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoDecodeH265ProfileInfoKHR *>(this);
}

VideoDecodeH265CapabilitiesKHR::operator const VkVideoDecodeH265CapabilitiesKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoDecodeH265CapabilitiesKHR *>(this);
}

VideoDecodeH265CapabilitiesKHR::operator VkVideoDecodeH265CapabilitiesKHR &() noexcept {
  return *reinterpret_cast<VkVideoDecodeH265CapabilitiesKHR *>(this);
}

VideoDecodeH265CapabilitiesKHR::operator const VkVideoDecodeH265CapabilitiesKHR *() const noexcept {
  return reinterpret_cast<const VkVideoDecodeH265CapabilitiesKHR *>(this);
}

VideoDecodeH265CapabilitiesKHR::operator VkVideoDecodeH265CapabilitiesKHR *() noexcept {
  return reinterpret_cast<VkVideoDecodeH265CapabilitiesKHR *>(this);
}

VideoDecodeH265SessionParametersAddInfoKHR::operator const VkVideoDecodeH265SessionParametersAddInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoDecodeH265SessionParametersAddInfoKHR *>(this);
}

VideoDecodeH265SessionParametersAddInfoKHR::operator VkVideoDecodeH265SessionParametersAddInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoDecodeH265SessionParametersAddInfoKHR *>(this);
}

VideoDecodeH265SessionParametersAddInfoKHR::operator const VkVideoDecodeH265SessionParametersAddInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoDecodeH265SessionParametersAddInfoKHR *>(this);
}

VideoDecodeH265SessionParametersAddInfoKHR::operator VkVideoDecodeH265SessionParametersAddInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoDecodeH265SessionParametersAddInfoKHR *>(this);
}

VideoDecodeH265SessionParametersCreateInfoKHR::operator const VkVideoDecodeH265SessionParametersCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoDecodeH265SessionParametersCreateInfoKHR *>(this);
}

VideoDecodeH265SessionParametersCreateInfoKHR::operator VkVideoDecodeH265SessionParametersCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoDecodeH265SessionParametersCreateInfoKHR *>(this);
}

VideoDecodeH265SessionParametersCreateInfoKHR::operator const VkVideoDecodeH265SessionParametersCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoDecodeH265SessionParametersCreateInfoKHR *>(this);
}

VideoDecodeH265SessionParametersCreateInfoKHR::operator VkVideoDecodeH265SessionParametersCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoDecodeH265SessionParametersCreateInfoKHR *>(this);
}

VideoDecodeH265PictureInfoKHR::operator const VkVideoDecodeH265PictureInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoDecodeH265PictureInfoKHR *>(this);
}

VideoDecodeH265PictureInfoKHR::operator VkVideoDecodeH265PictureInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoDecodeH265PictureInfoKHR *>(this);
}

VideoDecodeH265PictureInfoKHR::operator const VkVideoDecodeH265PictureInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoDecodeH265PictureInfoKHR *>(this);
}

VideoDecodeH265PictureInfoKHR::operator VkVideoDecodeH265PictureInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoDecodeH265PictureInfoKHR *>(this);
}

VideoDecodeH265DpbSlotInfoKHR::operator const VkVideoDecodeH265DpbSlotInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoDecodeH265DpbSlotInfoKHR *>(this);
}

VideoDecodeH265DpbSlotInfoKHR::operator VkVideoDecodeH265DpbSlotInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoDecodeH265DpbSlotInfoKHR *>(this);
}

VideoDecodeH265DpbSlotInfoKHR::operator const VkVideoDecodeH265DpbSlotInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoDecodeH265DpbSlotInfoKHR *>(this);
}

VideoDecodeH265DpbSlotInfoKHR::operator VkVideoDecodeH265DpbSlotInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoDecodeH265DpbSlotInfoKHR *>(this);
}

VideoDecodeAV1ProfileInfoKHR::operator const VkVideoDecodeAV1ProfileInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoDecodeAV1ProfileInfoKHR *>(this);
}

VideoDecodeAV1ProfileInfoKHR::operator VkVideoDecodeAV1ProfileInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoDecodeAV1ProfileInfoKHR *>(this);
}

VideoDecodeAV1ProfileInfoKHR::operator const VkVideoDecodeAV1ProfileInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoDecodeAV1ProfileInfoKHR *>(this);
}

VideoDecodeAV1ProfileInfoKHR::operator VkVideoDecodeAV1ProfileInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoDecodeAV1ProfileInfoKHR *>(this);
}

VideoDecodeAV1CapabilitiesKHR::operator const VkVideoDecodeAV1CapabilitiesKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoDecodeAV1CapabilitiesKHR *>(this);
}

VideoDecodeAV1CapabilitiesKHR::operator VkVideoDecodeAV1CapabilitiesKHR &() noexcept {
  return *reinterpret_cast<VkVideoDecodeAV1CapabilitiesKHR *>(this);
}

VideoDecodeAV1CapabilitiesKHR::operator const VkVideoDecodeAV1CapabilitiesKHR *() const noexcept {
  return reinterpret_cast<const VkVideoDecodeAV1CapabilitiesKHR *>(this);
}

VideoDecodeAV1CapabilitiesKHR::operator VkVideoDecodeAV1CapabilitiesKHR *() noexcept {
  return reinterpret_cast<VkVideoDecodeAV1CapabilitiesKHR *>(this);
}

VideoDecodeAV1SessionParametersCreateInfoKHR::operator const VkVideoDecodeAV1SessionParametersCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoDecodeAV1SessionParametersCreateInfoKHR *>(this);
}

VideoDecodeAV1SessionParametersCreateInfoKHR::operator VkVideoDecodeAV1SessionParametersCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoDecodeAV1SessionParametersCreateInfoKHR *>(this);
}

VideoDecodeAV1SessionParametersCreateInfoKHR::operator const VkVideoDecodeAV1SessionParametersCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoDecodeAV1SessionParametersCreateInfoKHR *>(this);
}

VideoDecodeAV1SessionParametersCreateInfoKHR::operator VkVideoDecodeAV1SessionParametersCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoDecodeAV1SessionParametersCreateInfoKHR *>(this);
}

VideoDecodeAV1PictureInfoKHR::operator const VkVideoDecodeAV1PictureInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoDecodeAV1PictureInfoKHR *>(this);
}

VideoDecodeAV1PictureInfoKHR::operator VkVideoDecodeAV1PictureInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoDecodeAV1PictureInfoKHR *>(this);
}

VideoDecodeAV1PictureInfoKHR::operator const VkVideoDecodeAV1PictureInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoDecodeAV1PictureInfoKHR *>(this);
}

VideoDecodeAV1PictureInfoKHR::operator VkVideoDecodeAV1PictureInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoDecodeAV1PictureInfoKHR *>(this);
}

VideoDecodeAV1DpbSlotInfoKHR::operator const VkVideoDecodeAV1DpbSlotInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoDecodeAV1DpbSlotInfoKHR *>(this);
}

VideoDecodeAV1DpbSlotInfoKHR::operator VkVideoDecodeAV1DpbSlotInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoDecodeAV1DpbSlotInfoKHR *>(this);
}

VideoDecodeAV1DpbSlotInfoKHR::operator const VkVideoDecodeAV1DpbSlotInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoDecodeAV1DpbSlotInfoKHR *>(this);
}

VideoDecodeAV1DpbSlotInfoKHR::operator VkVideoDecodeAV1DpbSlotInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoDecodeAV1DpbSlotInfoKHR *>(this);
}

VideoSessionCreateInfoKHR::operator const VkVideoSessionCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoSessionCreateInfoKHR *>(this);
}

VideoSessionCreateInfoKHR::operator VkVideoSessionCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoSessionCreateInfoKHR *>(this);
}

VideoSessionCreateInfoKHR::operator const VkVideoSessionCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoSessionCreateInfoKHR *>(this);
}

VideoSessionCreateInfoKHR::operator VkVideoSessionCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoSessionCreateInfoKHR *>(this);
}

VideoSessionParametersCreateInfoKHR::operator const VkVideoSessionParametersCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoSessionParametersCreateInfoKHR *>(this);
}

VideoSessionParametersCreateInfoKHR::operator VkVideoSessionParametersCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoSessionParametersCreateInfoKHR *>(this);
}

VideoSessionParametersCreateInfoKHR::operator const VkVideoSessionParametersCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoSessionParametersCreateInfoKHR *>(this);
}

VideoSessionParametersCreateInfoKHR::operator VkVideoSessionParametersCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoSessionParametersCreateInfoKHR *>(this);
}

VideoSessionParametersUpdateInfoKHR::operator const VkVideoSessionParametersUpdateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoSessionParametersUpdateInfoKHR *>(this);
}

VideoSessionParametersUpdateInfoKHR::operator VkVideoSessionParametersUpdateInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoSessionParametersUpdateInfoKHR *>(this);
}

VideoSessionParametersUpdateInfoKHR::operator const VkVideoSessionParametersUpdateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoSessionParametersUpdateInfoKHR *>(this);
}

VideoSessionParametersUpdateInfoKHR::operator VkVideoSessionParametersUpdateInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoSessionParametersUpdateInfoKHR *>(this);
}

VideoEncodeSessionParametersGetInfoKHR::operator const VkVideoEncodeSessionParametersGetInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeSessionParametersGetInfoKHR *>(this);
}

VideoEncodeSessionParametersGetInfoKHR::operator VkVideoEncodeSessionParametersGetInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeSessionParametersGetInfoKHR *>(this);
}

VideoEncodeSessionParametersGetInfoKHR::operator const VkVideoEncodeSessionParametersGetInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeSessionParametersGetInfoKHR *>(this);
}

VideoEncodeSessionParametersGetInfoKHR::operator VkVideoEncodeSessionParametersGetInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeSessionParametersGetInfoKHR *>(this);
}

VideoEncodeSessionParametersFeedbackInfoKHR::operator const VkVideoEncodeSessionParametersFeedbackInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeSessionParametersFeedbackInfoKHR *>(this);
}

VideoEncodeSessionParametersFeedbackInfoKHR::operator VkVideoEncodeSessionParametersFeedbackInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeSessionParametersFeedbackInfoKHR *>(this);
}

VideoEncodeSessionParametersFeedbackInfoKHR::operator const VkVideoEncodeSessionParametersFeedbackInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeSessionParametersFeedbackInfoKHR *>(this);
}

VideoEncodeSessionParametersFeedbackInfoKHR::operator VkVideoEncodeSessionParametersFeedbackInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeSessionParametersFeedbackInfoKHR *>(this);
}

VideoBeginCodingInfoKHR::operator const VkVideoBeginCodingInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoBeginCodingInfoKHR *>(this);
}

VideoBeginCodingInfoKHR::operator VkVideoBeginCodingInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoBeginCodingInfoKHR *>(this);
}

VideoBeginCodingInfoKHR::operator const VkVideoBeginCodingInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoBeginCodingInfoKHR *>(this);
}

VideoBeginCodingInfoKHR::operator VkVideoBeginCodingInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoBeginCodingInfoKHR *>(this);
}

VideoEndCodingInfoKHR::operator const VkVideoEndCodingInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEndCodingInfoKHR *>(this);
}

VideoEndCodingInfoKHR::operator VkVideoEndCodingInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEndCodingInfoKHR *>(this);
}

VideoEndCodingInfoKHR::operator const VkVideoEndCodingInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEndCodingInfoKHR *>(this);
}

VideoEndCodingInfoKHR::operator VkVideoEndCodingInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEndCodingInfoKHR *>(this);
}

VideoCodingControlInfoKHR::operator const VkVideoCodingControlInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoCodingControlInfoKHR *>(this);
}

VideoCodingControlInfoKHR::operator VkVideoCodingControlInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoCodingControlInfoKHR *>(this);
}

VideoCodingControlInfoKHR::operator const VkVideoCodingControlInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoCodingControlInfoKHR *>(this);
}

VideoCodingControlInfoKHR::operator VkVideoCodingControlInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoCodingControlInfoKHR *>(this);
}

VideoEncodeUsageInfoKHR::operator const VkVideoEncodeUsageInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeUsageInfoKHR *>(this);
}

VideoEncodeUsageInfoKHR::operator VkVideoEncodeUsageInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeUsageInfoKHR *>(this);
}

VideoEncodeUsageInfoKHR::operator const VkVideoEncodeUsageInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeUsageInfoKHR *>(this);
}

VideoEncodeUsageInfoKHR::operator VkVideoEncodeUsageInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeUsageInfoKHR *>(this);
}

VideoEncodeInfoKHR::operator const VkVideoEncodeInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeInfoKHR *>(this);
}

VideoEncodeInfoKHR::operator VkVideoEncodeInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeInfoKHR *>(this);
}

VideoEncodeInfoKHR::operator const VkVideoEncodeInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeInfoKHR *>(this);
}

VideoEncodeInfoKHR::operator VkVideoEncodeInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeInfoKHR *>(this);
}

QueryPoolVideoEncodeFeedbackCreateInfoKHR::operator const VkQueryPoolVideoEncodeFeedbackCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkQueryPoolVideoEncodeFeedbackCreateInfoKHR *>(this);
}

QueryPoolVideoEncodeFeedbackCreateInfoKHR::operator VkQueryPoolVideoEncodeFeedbackCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkQueryPoolVideoEncodeFeedbackCreateInfoKHR *>(this);
}

QueryPoolVideoEncodeFeedbackCreateInfoKHR::operator const VkQueryPoolVideoEncodeFeedbackCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkQueryPoolVideoEncodeFeedbackCreateInfoKHR *>(this);
}

QueryPoolVideoEncodeFeedbackCreateInfoKHR::operator VkQueryPoolVideoEncodeFeedbackCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkQueryPoolVideoEncodeFeedbackCreateInfoKHR *>(this);
}

VideoEncodeQualityLevelInfoKHR::operator const VkVideoEncodeQualityLevelInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeQualityLevelInfoKHR *>(this);
}

VideoEncodeQualityLevelInfoKHR::operator VkVideoEncodeQualityLevelInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeQualityLevelInfoKHR *>(this);
}

VideoEncodeQualityLevelInfoKHR::operator const VkVideoEncodeQualityLevelInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeQualityLevelInfoKHR *>(this);
}

VideoEncodeQualityLevelInfoKHR::operator VkVideoEncodeQualityLevelInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeQualityLevelInfoKHR *>(this);
}

PhysicalDeviceVideoEncodeQualityLevelInfoKHR::operator const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR *>(this);
}

PhysicalDeviceVideoEncodeQualityLevelInfoKHR::operator VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR *>(this);
}

PhysicalDeviceVideoEncodeQualityLevelInfoKHR::operator const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR *>(this);
}

PhysicalDeviceVideoEncodeQualityLevelInfoKHR::operator VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR *>(this);
}

VideoEncodeQualityLevelPropertiesKHR::operator const VkVideoEncodeQualityLevelPropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeQualityLevelPropertiesKHR *>(this);
}

VideoEncodeQualityLevelPropertiesKHR::operator VkVideoEncodeQualityLevelPropertiesKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeQualityLevelPropertiesKHR *>(this);
}

VideoEncodeQualityLevelPropertiesKHR::operator const VkVideoEncodeQualityLevelPropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeQualityLevelPropertiesKHR *>(this);
}

VideoEncodeQualityLevelPropertiesKHR::operator VkVideoEncodeQualityLevelPropertiesKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeQualityLevelPropertiesKHR *>(this);
}

VideoEncodeRateControlLayerInfoKHR::operator const VkVideoEncodeRateControlLayerInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeRateControlLayerInfoKHR *>(this);
}

VideoEncodeRateControlLayerInfoKHR::operator VkVideoEncodeRateControlLayerInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeRateControlLayerInfoKHR *>(this);
}

VideoEncodeRateControlLayerInfoKHR::operator const VkVideoEncodeRateControlLayerInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeRateControlLayerInfoKHR *>(this);
}

VideoEncodeRateControlLayerInfoKHR::operator VkVideoEncodeRateControlLayerInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeRateControlLayerInfoKHR *>(this);
}

VideoEncodeRateControlInfoKHR::operator const VkVideoEncodeRateControlInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeRateControlInfoKHR *>(this);
}

VideoEncodeRateControlInfoKHR::operator VkVideoEncodeRateControlInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeRateControlInfoKHR *>(this);
}

VideoEncodeRateControlInfoKHR::operator const VkVideoEncodeRateControlInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeRateControlInfoKHR *>(this);
}

VideoEncodeRateControlInfoKHR::operator VkVideoEncodeRateControlInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeRateControlInfoKHR *>(this);
}

VideoEncodeCapabilitiesKHR::operator const VkVideoEncodeCapabilitiesKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeCapabilitiesKHR *>(this);
}

VideoEncodeCapabilitiesKHR::operator VkVideoEncodeCapabilitiesKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeCapabilitiesKHR *>(this);
}

VideoEncodeCapabilitiesKHR::operator const VkVideoEncodeCapabilitiesKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeCapabilitiesKHR *>(this);
}

VideoEncodeCapabilitiesKHR::operator VkVideoEncodeCapabilitiesKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeCapabilitiesKHR *>(this);
}

VideoEncodeH264CapabilitiesKHR::operator const VkVideoEncodeH264CapabilitiesKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH264CapabilitiesKHR *>(this);
}

VideoEncodeH264CapabilitiesKHR::operator VkVideoEncodeH264CapabilitiesKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH264CapabilitiesKHR *>(this);
}

VideoEncodeH264CapabilitiesKHR::operator const VkVideoEncodeH264CapabilitiesKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH264CapabilitiesKHR *>(this);
}

VideoEncodeH264CapabilitiesKHR::operator VkVideoEncodeH264CapabilitiesKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH264CapabilitiesKHR *>(this);
}

VideoEncodeH264QpKHR::operator const VkVideoEncodeH264QpKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH264QpKHR *>(this);
}

VideoEncodeH264QpKHR::operator VkVideoEncodeH264QpKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH264QpKHR *>(this);
}

VideoEncodeH264QpKHR::operator const VkVideoEncodeH264QpKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH264QpKHR *>(this);
}

VideoEncodeH264QpKHR::operator VkVideoEncodeH264QpKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH264QpKHR *>(this);
}

VideoEncodeH264QualityLevelPropertiesKHR::operator const VkVideoEncodeH264QualityLevelPropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH264QualityLevelPropertiesKHR *>(this);
}

VideoEncodeH264QualityLevelPropertiesKHR::operator VkVideoEncodeH264QualityLevelPropertiesKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH264QualityLevelPropertiesKHR *>(this);
}

VideoEncodeH264QualityLevelPropertiesKHR::operator const VkVideoEncodeH264QualityLevelPropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH264QualityLevelPropertiesKHR *>(this);
}

VideoEncodeH264QualityLevelPropertiesKHR::operator VkVideoEncodeH264QualityLevelPropertiesKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH264QualityLevelPropertiesKHR *>(this);
}

VideoEncodeH264SessionCreateInfoKHR::operator const VkVideoEncodeH264SessionCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH264SessionCreateInfoKHR *>(this);
}

VideoEncodeH264SessionCreateInfoKHR::operator VkVideoEncodeH264SessionCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH264SessionCreateInfoKHR *>(this);
}

VideoEncodeH264SessionCreateInfoKHR::operator const VkVideoEncodeH264SessionCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH264SessionCreateInfoKHR *>(this);
}

VideoEncodeH264SessionCreateInfoKHR::operator VkVideoEncodeH264SessionCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH264SessionCreateInfoKHR *>(this);
}

VideoEncodeH264SessionParametersAddInfoKHR::operator const VkVideoEncodeH264SessionParametersAddInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH264SessionParametersAddInfoKHR *>(this);
}

VideoEncodeH264SessionParametersAddInfoKHR::operator VkVideoEncodeH264SessionParametersAddInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH264SessionParametersAddInfoKHR *>(this);
}

VideoEncodeH264SessionParametersAddInfoKHR::operator const VkVideoEncodeH264SessionParametersAddInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH264SessionParametersAddInfoKHR *>(this);
}

VideoEncodeH264SessionParametersAddInfoKHR::operator VkVideoEncodeH264SessionParametersAddInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH264SessionParametersAddInfoKHR *>(this);
}

VideoEncodeH264SessionParametersCreateInfoKHR::operator const VkVideoEncodeH264SessionParametersCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH264SessionParametersCreateInfoKHR *>(this);
}

VideoEncodeH264SessionParametersCreateInfoKHR::operator VkVideoEncodeH264SessionParametersCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH264SessionParametersCreateInfoKHR *>(this);
}

VideoEncodeH264SessionParametersCreateInfoKHR::operator const VkVideoEncodeH264SessionParametersCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH264SessionParametersCreateInfoKHR *>(this);
}

VideoEncodeH264SessionParametersCreateInfoKHR::operator VkVideoEncodeH264SessionParametersCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH264SessionParametersCreateInfoKHR *>(this);
}

VideoEncodeH264SessionParametersGetInfoKHR::operator const VkVideoEncodeH264SessionParametersGetInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH264SessionParametersGetInfoKHR *>(this);
}

VideoEncodeH264SessionParametersGetInfoKHR::operator VkVideoEncodeH264SessionParametersGetInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH264SessionParametersGetInfoKHR *>(this);
}

VideoEncodeH264SessionParametersGetInfoKHR::operator const VkVideoEncodeH264SessionParametersGetInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH264SessionParametersGetInfoKHR *>(this);
}

VideoEncodeH264SessionParametersGetInfoKHR::operator VkVideoEncodeH264SessionParametersGetInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH264SessionParametersGetInfoKHR *>(this);
}

VideoEncodeH264SessionParametersFeedbackInfoKHR::operator const VkVideoEncodeH264SessionParametersFeedbackInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH264SessionParametersFeedbackInfoKHR *>(this);
}

VideoEncodeH264SessionParametersFeedbackInfoKHR::operator VkVideoEncodeH264SessionParametersFeedbackInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH264SessionParametersFeedbackInfoKHR *>(this);
}

VideoEncodeH264SessionParametersFeedbackInfoKHR::operator const VkVideoEncodeH264SessionParametersFeedbackInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH264SessionParametersFeedbackInfoKHR *>(this);
}

VideoEncodeH264SessionParametersFeedbackInfoKHR::operator VkVideoEncodeH264SessionParametersFeedbackInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH264SessionParametersFeedbackInfoKHR *>(this);
}

VideoEncodeH264DpbSlotInfoKHR::operator const VkVideoEncodeH264DpbSlotInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH264DpbSlotInfoKHR *>(this);
}

VideoEncodeH264DpbSlotInfoKHR::operator VkVideoEncodeH264DpbSlotInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH264DpbSlotInfoKHR *>(this);
}

VideoEncodeH264DpbSlotInfoKHR::operator const VkVideoEncodeH264DpbSlotInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH264DpbSlotInfoKHR *>(this);
}

VideoEncodeH264DpbSlotInfoKHR::operator VkVideoEncodeH264DpbSlotInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH264DpbSlotInfoKHR *>(this);
}

VideoEncodeH264NaluSliceInfoKHR::operator const VkVideoEncodeH264NaluSliceInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH264NaluSliceInfoKHR *>(this);
}

VideoEncodeH264NaluSliceInfoKHR::operator VkVideoEncodeH264NaluSliceInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH264NaluSliceInfoKHR *>(this);
}

VideoEncodeH264NaluSliceInfoKHR::operator const VkVideoEncodeH264NaluSliceInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH264NaluSliceInfoKHR *>(this);
}

VideoEncodeH264NaluSliceInfoKHR::operator VkVideoEncodeH264NaluSliceInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH264NaluSliceInfoKHR *>(this);
}

VideoEncodeH264PictureInfoKHR::operator const VkVideoEncodeH264PictureInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH264PictureInfoKHR *>(this);
}

VideoEncodeH264PictureInfoKHR::operator VkVideoEncodeH264PictureInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH264PictureInfoKHR *>(this);
}

VideoEncodeH264PictureInfoKHR::operator const VkVideoEncodeH264PictureInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH264PictureInfoKHR *>(this);
}

VideoEncodeH264PictureInfoKHR::operator VkVideoEncodeH264PictureInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH264PictureInfoKHR *>(this);
}

VideoEncodeH264ProfileInfoKHR::operator const VkVideoEncodeH264ProfileInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH264ProfileInfoKHR *>(this);
}

VideoEncodeH264ProfileInfoKHR::operator VkVideoEncodeH264ProfileInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH264ProfileInfoKHR *>(this);
}

VideoEncodeH264ProfileInfoKHR::operator const VkVideoEncodeH264ProfileInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH264ProfileInfoKHR *>(this);
}

VideoEncodeH264ProfileInfoKHR::operator VkVideoEncodeH264ProfileInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH264ProfileInfoKHR *>(this);
}

VideoEncodeH264RateControlInfoKHR::operator const VkVideoEncodeH264RateControlInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH264RateControlInfoKHR *>(this);
}

VideoEncodeH264RateControlInfoKHR::operator VkVideoEncodeH264RateControlInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH264RateControlInfoKHR *>(this);
}

VideoEncodeH264RateControlInfoKHR::operator const VkVideoEncodeH264RateControlInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH264RateControlInfoKHR *>(this);
}

VideoEncodeH264RateControlInfoKHR::operator VkVideoEncodeH264RateControlInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH264RateControlInfoKHR *>(this);
}

VideoEncodeH264FrameSizeKHR::operator const VkVideoEncodeH264FrameSizeKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH264FrameSizeKHR *>(this);
}

VideoEncodeH264FrameSizeKHR::operator VkVideoEncodeH264FrameSizeKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH264FrameSizeKHR *>(this);
}

VideoEncodeH264FrameSizeKHR::operator const VkVideoEncodeH264FrameSizeKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH264FrameSizeKHR *>(this);
}

VideoEncodeH264FrameSizeKHR::operator VkVideoEncodeH264FrameSizeKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH264FrameSizeKHR *>(this);
}

VideoEncodeH264GopRemainingFrameInfoKHR::operator const VkVideoEncodeH264GopRemainingFrameInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH264GopRemainingFrameInfoKHR *>(this);
}

VideoEncodeH264GopRemainingFrameInfoKHR::operator VkVideoEncodeH264GopRemainingFrameInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH264GopRemainingFrameInfoKHR *>(this);
}

VideoEncodeH264GopRemainingFrameInfoKHR::operator const VkVideoEncodeH264GopRemainingFrameInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH264GopRemainingFrameInfoKHR *>(this);
}

VideoEncodeH264GopRemainingFrameInfoKHR::operator VkVideoEncodeH264GopRemainingFrameInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH264GopRemainingFrameInfoKHR *>(this);
}

VideoEncodeH264RateControlLayerInfoKHR::operator const VkVideoEncodeH264RateControlLayerInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH264RateControlLayerInfoKHR *>(this);
}

VideoEncodeH264RateControlLayerInfoKHR::operator VkVideoEncodeH264RateControlLayerInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH264RateControlLayerInfoKHR *>(this);
}

VideoEncodeH264RateControlLayerInfoKHR::operator const VkVideoEncodeH264RateControlLayerInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH264RateControlLayerInfoKHR *>(this);
}

VideoEncodeH264RateControlLayerInfoKHR::operator VkVideoEncodeH264RateControlLayerInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH264RateControlLayerInfoKHR *>(this);
}

VideoEncodeH265CapabilitiesKHR::operator const VkVideoEncodeH265CapabilitiesKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH265CapabilitiesKHR *>(this);
}

VideoEncodeH265CapabilitiesKHR::operator VkVideoEncodeH265CapabilitiesKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH265CapabilitiesKHR *>(this);
}

VideoEncodeH265CapabilitiesKHR::operator const VkVideoEncodeH265CapabilitiesKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH265CapabilitiesKHR *>(this);
}

VideoEncodeH265CapabilitiesKHR::operator VkVideoEncodeH265CapabilitiesKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH265CapabilitiesKHR *>(this);
}

VideoEncodeH265QpKHR::operator const VkVideoEncodeH265QpKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH265QpKHR *>(this);
}

VideoEncodeH265QpKHR::operator VkVideoEncodeH265QpKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH265QpKHR *>(this);
}

VideoEncodeH265QpKHR::operator const VkVideoEncodeH265QpKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH265QpKHR *>(this);
}

VideoEncodeH265QpKHR::operator VkVideoEncodeH265QpKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH265QpKHR *>(this);
}

VideoEncodeH265QualityLevelPropertiesKHR::operator const VkVideoEncodeH265QualityLevelPropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH265QualityLevelPropertiesKHR *>(this);
}

VideoEncodeH265QualityLevelPropertiesKHR::operator VkVideoEncodeH265QualityLevelPropertiesKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH265QualityLevelPropertiesKHR *>(this);
}

VideoEncodeH265QualityLevelPropertiesKHR::operator const VkVideoEncodeH265QualityLevelPropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH265QualityLevelPropertiesKHR *>(this);
}

VideoEncodeH265QualityLevelPropertiesKHR::operator VkVideoEncodeH265QualityLevelPropertiesKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH265QualityLevelPropertiesKHR *>(this);
}

VideoEncodeH265SessionCreateInfoKHR::operator const VkVideoEncodeH265SessionCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH265SessionCreateInfoKHR *>(this);
}

VideoEncodeH265SessionCreateInfoKHR::operator VkVideoEncodeH265SessionCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH265SessionCreateInfoKHR *>(this);
}

VideoEncodeH265SessionCreateInfoKHR::operator const VkVideoEncodeH265SessionCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH265SessionCreateInfoKHR *>(this);
}

VideoEncodeH265SessionCreateInfoKHR::operator VkVideoEncodeH265SessionCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH265SessionCreateInfoKHR *>(this);
}

VideoEncodeH265SessionParametersAddInfoKHR::operator const VkVideoEncodeH265SessionParametersAddInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH265SessionParametersAddInfoKHR *>(this);
}

VideoEncodeH265SessionParametersAddInfoKHR::operator VkVideoEncodeH265SessionParametersAddInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH265SessionParametersAddInfoKHR *>(this);
}

VideoEncodeH265SessionParametersAddInfoKHR::operator const VkVideoEncodeH265SessionParametersAddInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH265SessionParametersAddInfoKHR *>(this);
}

VideoEncodeH265SessionParametersAddInfoKHR::operator VkVideoEncodeH265SessionParametersAddInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH265SessionParametersAddInfoKHR *>(this);
}

VideoEncodeH265SessionParametersCreateInfoKHR::operator const VkVideoEncodeH265SessionParametersCreateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH265SessionParametersCreateInfoKHR *>(this);
}

VideoEncodeH265SessionParametersCreateInfoKHR::operator VkVideoEncodeH265SessionParametersCreateInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH265SessionParametersCreateInfoKHR *>(this);
}

VideoEncodeH265SessionParametersCreateInfoKHR::operator const VkVideoEncodeH265SessionParametersCreateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH265SessionParametersCreateInfoKHR *>(this);
}

VideoEncodeH265SessionParametersCreateInfoKHR::operator VkVideoEncodeH265SessionParametersCreateInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH265SessionParametersCreateInfoKHR *>(this);
}

VideoEncodeH265SessionParametersGetInfoKHR::operator const VkVideoEncodeH265SessionParametersGetInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH265SessionParametersGetInfoKHR *>(this);
}

VideoEncodeH265SessionParametersGetInfoKHR::operator VkVideoEncodeH265SessionParametersGetInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH265SessionParametersGetInfoKHR *>(this);
}

VideoEncodeH265SessionParametersGetInfoKHR::operator const VkVideoEncodeH265SessionParametersGetInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH265SessionParametersGetInfoKHR *>(this);
}

VideoEncodeH265SessionParametersGetInfoKHR::operator VkVideoEncodeH265SessionParametersGetInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH265SessionParametersGetInfoKHR *>(this);
}

VideoEncodeH265SessionParametersFeedbackInfoKHR::operator const VkVideoEncodeH265SessionParametersFeedbackInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH265SessionParametersFeedbackInfoKHR *>(this);
}

VideoEncodeH265SessionParametersFeedbackInfoKHR::operator VkVideoEncodeH265SessionParametersFeedbackInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH265SessionParametersFeedbackInfoKHR *>(this);
}

VideoEncodeH265SessionParametersFeedbackInfoKHR::operator const VkVideoEncodeH265SessionParametersFeedbackInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH265SessionParametersFeedbackInfoKHR *>(this);
}

VideoEncodeH265SessionParametersFeedbackInfoKHR::operator VkVideoEncodeH265SessionParametersFeedbackInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH265SessionParametersFeedbackInfoKHR *>(this);
}

VideoEncodeH265NaluSliceSegmentInfoKHR::operator const VkVideoEncodeH265NaluSliceSegmentInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH265NaluSliceSegmentInfoKHR *>(this);
}

VideoEncodeH265NaluSliceSegmentInfoKHR::operator VkVideoEncodeH265NaluSliceSegmentInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH265NaluSliceSegmentInfoKHR *>(this);
}

VideoEncodeH265NaluSliceSegmentInfoKHR::operator const VkVideoEncodeH265NaluSliceSegmentInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH265NaluSliceSegmentInfoKHR *>(this);
}

VideoEncodeH265NaluSliceSegmentInfoKHR::operator VkVideoEncodeH265NaluSliceSegmentInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH265NaluSliceSegmentInfoKHR *>(this);
}

VideoEncodeH265PictureInfoKHR::operator const VkVideoEncodeH265PictureInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH265PictureInfoKHR *>(this);
}

VideoEncodeH265PictureInfoKHR::operator VkVideoEncodeH265PictureInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH265PictureInfoKHR *>(this);
}

VideoEncodeH265PictureInfoKHR::operator const VkVideoEncodeH265PictureInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH265PictureInfoKHR *>(this);
}

VideoEncodeH265PictureInfoKHR::operator VkVideoEncodeH265PictureInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH265PictureInfoKHR *>(this);
}

VideoEncodeH265RateControlInfoKHR::operator const VkVideoEncodeH265RateControlInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH265RateControlInfoKHR *>(this);
}

VideoEncodeH265RateControlInfoKHR::operator VkVideoEncodeH265RateControlInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH265RateControlInfoKHR *>(this);
}

VideoEncodeH265RateControlInfoKHR::operator const VkVideoEncodeH265RateControlInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH265RateControlInfoKHR *>(this);
}

VideoEncodeH265RateControlInfoKHR::operator VkVideoEncodeH265RateControlInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH265RateControlInfoKHR *>(this);
}

VideoEncodeH265FrameSizeKHR::operator const VkVideoEncodeH265FrameSizeKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH265FrameSizeKHR *>(this);
}

VideoEncodeH265FrameSizeKHR::operator VkVideoEncodeH265FrameSizeKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH265FrameSizeKHR *>(this);
}

VideoEncodeH265FrameSizeKHR::operator const VkVideoEncodeH265FrameSizeKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH265FrameSizeKHR *>(this);
}

VideoEncodeH265FrameSizeKHR::operator VkVideoEncodeH265FrameSizeKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH265FrameSizeKHR *>(this);
}

VideoEncodeH265GopRemainingFrameInfoKHR::operator const VkVideoEncodeH265GopRemainingFrameInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH265GopRemainingFrameInfoKHR *>(this);
}

VideoEncodeH265GopRemainingFrameInfoKHR::operator VkVideoEncodeH265GopRemainingFrameInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH265GopRemainingFrameInfoKHR *>(this);
}

VideoEncodeH265GopRemainingFrameInfoKHR::operator const VkVideoEncodeH265GopRemainingFrameInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH265GopRemainingFrameInfoKHR *>(this);
}

VideoEncodeH265GopRemainingFrameInfoKHR::operator VkVideoEncodeH265GopRemainingFrameInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH265GopRemainingFrameInfoKHR *>(this);
}

VideoEncodeH265RateControlLayerInfoKHR::operator const VkVideoEncodeH265RateControlLayerInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH265RateControlLayerInfoKHR *>(this);
}

VideoEncodeH265RateControlLayerInfoKHR::operator VkVideoEncodeH265RateControlLayerInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH265RateControlLayerInfoKHR *>(this);
}

VideoEncodeH265RateControlLayerInfoKHR::operator const VkVideoEncodeH265RateControlLayerInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH265RateControlLayerInfoKHR *>(this);
}

VideoEncodeH265RateControlLayerInfoKHR::operator VkVideoEncodeH265RateControlLayerInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH265RateControlLayerInfoKHR *>(this);
}

VideoEncodeH265ProfileInfoKHR::operator const VkVideoEncodeH265ProfileInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH265ProfileInfoKHR *>(this);
}

VideoEncodeH265ProfileInfoKHR::operator VkVideoEncodeH265ProfileInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH265ProfileInfoKHR *>(this);
}

VideoEncodeH265ProfileInfoKHR::operator const VkVideoEncodeH265ProfileInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH265ProfileInfoKHR *>(this);
}

VideoEncodeH265ProfileInfoKHR::operator VkVideoEncodeH265ProfileInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH265ProfileInfoKHR *>(this);
}

VideoEncodeH265DpbSlotInfoKHR::operator const VkVideoEncodeH265DpbSlotInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkVideoEncodeH265DpbSlotInfoKHR *>(this);
}

VideoEncodeH265DpbSlotInfoKHR::operator VkVideoEncodeH265DpbSlotInfoKHR &() noexcept {
  return *reinterpret_cast<VkVideoEncodeH265DpbSlotInfoKHR *>(this);
}

VideoEncodeH265DpbSlotInfoKHR::operator const VkVideoEncodeH265DpbSlotInfoKHR *() const noexcept {
  return reinterpret_cast<const VkVideoEncodeH265DpbSlotInfoKHR *>(this);
}

VideoEncodeH265DpbSlotInfoKHR::operator VkVideoEncodeH265DpbSlotInfoKHR *() noexcept {
  return reinterpret_cast<VkVideoEncodeH265DpbSlotInfoKHR *>(this);
}

PhysicalDeviceInheritedViewportScissorFeaturesNV::operator const VkPhysicalDeviceInheritedViewportScissorFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceInheritedViewportScissorFeaturesNV *>(this);
}

PhysicalDeviceInheritedViewportScissorFeaturesNV::operator VkPhysicalDeviceInheritedViewportScissorFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceInheritedViewportScissorFeaturesNV *>(this);
}

PhysicalDeviceInheritedViewportScissorFeaturesNV::operator const VkPhysicalDeviceInheritedViewportScissorFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceInheritedViewportScissorFeaturesNV *>(this);
}

PhysicalDeviceInheritedViewportScissorFeaturesNV::operator VkPhysicalDeviceInheritedViewportScissorFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceInheritedViewportScissorFeaturesNV *>(this);
}

CommandBufferInheritanceViewportScissorInfoNV::operator const VkCommandBufferInheritanceViewportScissorInfoNV &() const noexcept {
  return *reinterpret_cast<const VkCommandBufferInheritanceViewportScissorInfoNV *>(this);
}

CommandBufferInheritanceViewportScissorInfoNV::operator VkCommandBufferInheritanceViewportScissorInfoNV &() noexcept {
  return *reinterpret_cast<VkCommandBufferInheritanceViewportScissorInfoNV *>(this);
}

CommandBufferInheritanceViewportScissorInfoNV::operator const VkCommandBufferInheritanceViewportScissorInfoNV *() const noexcept {
  return reinterpret_cast<const VkCommandBufferInheritanceViewportScissorInfoNV *>(this);
}

CommandBufferInheritanceViewportScissorInfoNV::operator VkCommandBufferInheritanceViewportScissorInfoNV *() noexcept {
  return reinterpret_cast<VkCommandBufferInheritanceViewportScissorInfoNV *>(this);
}

PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT::operator const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *>(this);
}

PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT::operator VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *>(this);
}

PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT::operator const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *>(this);
}

PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT::operator VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *>(this);
}

PhysicalDeviceProvokingVertexFeaturesEXT::operator const VkPhysicalDeviceProvokingVertexFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceProvokingVertexFeaturesEXT *>(this);
}

PhysicalDeviceProvokingVertexFeaturesEXT::operator VkPhysicalDeviceProvokingVertexFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceProvokingVertexFeaturesEXT *>(this);
}

PhysicalDeviceProvokingVertexFeaturesEXT::operator const VkPhysicalDeviceProvokingVertexFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceProvokingVertexFeaturesEXT *>(this);
}

PhysicalDeviceProvokingVertexFeaturesEXT::operator VkPhysicalDeviceProvokingVertexFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceProvokingVertexFeaturesEXT *>(this);
}

PhysicalDeviceProvokingVertexPropertiesEXT::operator const VkPhysicalDeviceProvokingVertexPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceProvokingVertexPropertiesEXT *>(this);
}

PhysicalDeviceProvokingVertexPropertiesEXT::operator VkPhysicalDeviceProvokingVertexPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceProvokingVertexPropertiesEXT *>(this);
}

PhysicalDeviceProvokingVertexPropertiesEXT::operator const VkPhysicalDeviceProvokingVertexPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceProvokingVertexPropertiesEXT *>(this);
}

PhysicalDeviceProvokingVertexPropertiesEXT::operator VkPhysicalDeviceProvokingVertexPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceProvokingVertexPropertiesEXT *>(this);
}

PipelineRasterizationProvokingVertexStateCreateInfoEXT::operator const VkPipelineRasterizationProvokingVertexStateCreateInfoEXT &()
  const noexcept {
  return *reinterpret_cast<const VkPipelineRasterizationProvokingVertexStateCreateInfoEXT *>(this);
}

PipelineRasterizationProvokingVertexStateCreateInfoEXT::operator VkPipelineRasterizationProvokingVertexStateCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkPipelineRasterizationProvokingVertexStateCreateInfoEXT *>(this);
}

PipelineRasterizationProvokingVertexStateCreateInfoEXT::operator const VkPipelineRasterizationProvokingVertexStateCreateInfoEXT *()
  const noexcept {
  return reinterpret_cast<const VkPipelineRasterizationProvokingVertexStateCreateInfoEXT *>(this);
}

PipelineRasterizationProvokingVertexStateCreateInfoEXT::operator VkPipelineRasterizationProvokingVertexStateCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkPipelineRasterizationProvokingVertexStateCreateInfoEXT *>(this);
}

CuModuleCreateInfoNVX::operator const VkCuModuleCreateInfoNVX &() const noexcept {
  return *reinterpret_cast<const VkCuModuleCreateInfoNVX *>(this);
}

CuModuleCreateInfoNVX::operator VkCuModuleCreateInfoNVX &() noexcept {
  return *reinterpret_cast<VkCuModuleCreateInfoNVX *>(this);
}

CuModuleCreateInfoNVX::operator const VkCuModuleCreateInfoNVX *() const noexcept {
  return reinterpret_cast<const VkCuModuleCreateInfoNVX *>(this);
}

CuModuleCreateInfoNVX::operator VkCuModuleCreateInfoNVX *() noexcept {
  return reinterpret_cast<VkCuModuleCreateInfoNVX *>(this);
}

CuFunctionCreateInfoNVX::operator const VkCuFunctionCreateInfoNVX &() const noexcept {
  return *reinterpret_cast<const VkCuFunctionCreateInfoNVX *>(this);
}

CuFunctionCreateInfoNVX::operator VkCuFunctionCreateInfoNVX &() noexcept {
  return *reinterpret_cast<VkCuFunctionCreateInfoNVX *>(this);
}

CuFunctionCreateInfoNVX::operator const VkCuFunctionCreateInfoNVX *() const noexcept {
  return reinterpret_cast<const VkCuFunctionCreateInfoNVX *>(this);
}

CuFunctionCreateInfoNVX::operator VkCuFunctionCreateInfoNVX *() noexcept {
  return reinterpret_cast<VkCuFunctionCreateInfoNVX *>(this);
}

CuLaunchInfoNVX::operator const VkCuLaunchInfoNVX &() const noexcept {
  return *reinterpret_cast<const VkCuLaunchInfoNVX *>(this);
}

CuLaunchInfoNVX::operator VkCuLaunchInfoNVX &() noexcept {
  return *reinterpret_cast<VkCuLaunchInfoNVX *>(this);
}

CuLaunchInfoNVX::operator const VkCuLaunchInfoNVX *() const noexcept {
  return reinterpret_cast<const VkCuLaunchInfoNVX *>(this);
}

CuLaunchInfoNVX::operator VkCuLaunchInfoNVX *() noexcept {
  return reinterpret_cast<VkCuLaunchInfoNVX *>(this);
}

PhysicalDeviceDescriptorBufferFeaturesEXT::operator const VkPhysicalDeviceDescriptorBufferFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDescriptorBufferFeaturesEXT *>(this);
}

PhysicalDeviceDescriptorBufferFeaturesEXT::operator VkPhysicalDeviceDescriptorBufferFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDescriptorBufferFeaturesEXT *>(this);
}

PhysicalDeviceDescriptorBufferFeaturesEXT::operator const VkPhysicalDeviceDescriptorBufferFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDescriptorBufferFeaturesEXT *>(this);
}

PhysicalDeviceDescriptorBufferFeaturesEXT::operator VkPhysicalDeviceDescriptorBufferFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDescriptorBufferFeaturesEXT *>(this);
}

PhysicalDeviceDescriptorBufferPropertiesEXT::operator const VkPhysicalDeviceDescriptorBufferPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDescriptorBufferPropertiesEXT *>(this);
}

PhysicalDeviceDescriptorBufferPropertiesEXT::operator VkPhysicalDeviceDescriptorBufferPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDescriptorBufferPropertiesEXT *>(this);
}

PhysicalDeviceDescriptorBufferPropertiesEXT::operator const VkPhysicalDeviceDescriptorBufferPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDescriptorBufferPropertiesEXT *>(this);
}

PhysicalDeviceDescriptorBufferPropertiesEXT::operator VkPhysicalDeviceDescriptorBufferPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDescriptorBufferPropertiesEXT *>(this);
}

PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT::operator const VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT *>(this);
}

PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT::operator VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT *>(this);
}

PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT::operator const VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT *>(this);
}

PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT::operator VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT *>(this);
}

DescriptorAddressInfoEXT::operator const VkDescriptorAddressInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkDescriptorAddressInfoEXT *>(this);
}

DescriptorAddressInfoEXT::operator VkDescriptorAddressInfoEXT &() noexcept {
  return *reinterpret_cast<VkDescriptorAddressInfoEXT *>(this);
}

DescriptorAddressInfoEXT::operator const VkDescriptorAddressInfoEXT *() const noexcept {
  return reinterpret_cast<const VkDescriptorAddressInfoEXT *>(this);
}

DescriptorAddressInfoEXT::operator VkDescriptorAddressInfoEXT *() noexcept {
  return reinterpret_cast<VkDescriptorAddressInfoEXT *>(this);
}

DescriptorBufferBindingInfoEXT::operator const VkDescriptorBufferBindingInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkDescriptorBufferBindingInfoEXT *>(this);
}

DescriptorBufferBindingInfoEXT::operator VkDescriptorBufferBindingInfoEXT &() noexcept {
  return *reinterpret_cast<VkDescriptorBufferBindingInfoEXT *>(this);
}

DescriptorBufferBindingInfoEXT::operator const VkDescriptorBufferBindingInfoEXT *() const noexcept {
  return reinterpret_cast<const VkDescriptorBufferBindingInfoEXT *>(this);
}

DescriptorBufferBindingInfoEXT::operator VkDescriptorBufferBindingInfoEXT *() noexcept {
  return reinterpret_cast<VkDescriptorBufferBindingInfoEXT *>(this);
}

DescriptorBufferBindingPushDescriptorBufferHandleEXT::operator const VkDescriptorBufferBindingPushDescriptorBufferHandleEXT &()
  const noexcept {
  return *reinterpret_cast<const VkDescriptorBufferBindingPushDescriptorBufferHandleEXT *>(this);
}

DescriptorBufferBindingPushDescriptorBufferHandleEXT::operator VkDescriptorBufferBindingPushDescriptorBufferHandleEXT &() noexcept {
  return *reinterpret_cast<VkDescriptorBufferBindingPushDescriptorBufferHandleEXT *>(this);
}

DescriptorBufferBindingPushDescriptorBufferHandleEXT::operator const VkDescriptorBufferBindingPushDescriptorBufferHandleEXT *()
  const noexcept {
  return reinterpret_cast<const VkDescriptorBufferBindingPushDescriptorBufferHandleEXT *>(this);
}

DescriptorBufferBindingPushDescriptorBufferHandleEXT::operator VkDescriptorBufferBindingPushDescriptorBufferHandleEXT *() noexcept {
  return reinterpret_cast<VkDescriptorBufferBindingPushDescriptorBufferHandleEXT *>(this);
}

DescriptorGetInfoEXT::operator const VkDescriptorGetInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkDescriptorGetInfoEXT *>(this);
}

DescriptorGetInfoEXT::operator VkDescriptorGetInfoEXT &() noexcept {
  return *reinterpret_cast<VkDescriptorGetInfoEXT *>(this);
}

DescriptorGetInfoEXT::operator const VkDescriptorGetInfoEXT *() const noexcept {
  return reinterpret_cast<const VkDescriptorGetInfoEXT *>(this);
}

DescriptorGetInfoEXT::operator VkDescriptorGetInfoEXT *() noexcept {
  return reinterpret_cast<VkDescriptorGetInfoEXT *>(this);
}

BufferCaptureDescriptorDataInfoEXT::operator const VkBufferCaptureDescriptorDataInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkBufferCaptureDescriptorDataInfoEXT *>(this);
}

BufferCaptureDescriptorDataInfoEXT::operator VkBufferCaptureDescriptorDataInfoEXT &() noexcept {
  return *reinterpret_cast<VkBufferCaptureDescriptorDataInfoEXT *>(this);
}

BufferCaptureDescriptorDataInfoEXT::operator const VkBufferCaptureDescriptorDataInfoEXT *() const noexcept {
  return reinterpret_cast<const VkBufferCaptureDescriptorDataInfoEXT *>(this);
}

BufferCaptureDescriptorDataInfoEXT::operator VkBufferCaptureDescriptorDataInfoEXT *() noexcept {
  return reinterpret_cast<VkBufferCaptureDescriptorDataInfoEXT *>(this);
}

ImageCaptureDescriptorDataInfoEXT::operator const VkImageCaptureDescriptorDataInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkImageCaptureDescriptorDataInfoEXT *>(this);
}

ImageCaptureDescriptorDataInfoEXT::operator VkImageCaptureDescriptorDataInfoEXT &() noexcept {
  return *reinterpret_cast<VkImageCaptureDescriptorDataInfoEXT *>(this);
}

ImageCaptureDescriptorDataInfoEXT::operator const VkImageCaptureDescriptorDataInfoEXT *() const noexcept {
  return reinterpret_cast<const VkImageCaptureDescriptorDataInfoEXT *>(this);
}

ImageCaptureDescriptorDataInfoEXT::operator VkImageCaptureDescriptorDataInfoEXT *() noexcept {
  return reinterpret_cast<VkImageCaptureDescriptorDataInfoEXT *>(this);
}

ImageViewCaptureDescriptorDataInfoEXT::operator const VkImageViewCaptureDescriptorDataInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkImageViewCaptureDescriptorDataInfoEXT *>(this);
}

ImageViewCaptureDescriptorDataInfoEXT::operator VkImageViewCaptureDescriptorDataInfoEXT &() noexcept {
  return *reinterpret_cast<VkImageViewCaptureDescriptorDataInfoEXT *>(this);
}

ImageViewCaptureDescriptorDataInfoEXT::operator const VkImageViewCaptureDescriptorDataInfoEXT *() const noexcept {
  return reinterpret_cast<const VkImageViewCaptureDescriptorDataInfoEXT *>(this);
}

ImageViewCaptureDescriptorDataInfoEXT::operator VkImageViewCaptureDescriptorDataInfoEXT *() noexcept {
  return reinterpret_cast<VkImageViewCaptureDescriptorDataInfoEXT *>(this);
}

SamplerCaptureDescriptorDataInfoEXT::operator const VkSamplerCaptureDescriptorDataInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkSamplerCaptureDescriptorDataInfoEXT *>(this);
}

SamplerCaptureDescriptorDataInfoEXT::operator VkSamplerCaptureDescriptorDataInfoEXT &() noexcept {
  return *reinterpret_cast<VkSamplerCaptureDescriptorDataInfoEXT *>(this);
}

SamplerCaptureDescriptorDataInfoEXT::operator const VkSamplerCaptureDescriptorDataInfoEXT *() const noexcept {
  return reinterpret_cast<const VkSamplerCaptureDescriptorDataInfoEXT *>(this);
}

SamplerCaptureDescriptorDataInfoEXT::operator VkSamplerCaptureDescriptorDataInfoEXT *() noexcept {
  return reinterpret_cast<VkSamplerCaptureDescriptorDataInfoEXT *>(this);
}

AccelerationStructureCaptureDescriptorDataInfoEXT::operator const VkAccelerationStructureCaptureDescriptorDataInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkAccelerationStructureCaptureDescriptorDataInfoEXT *>(this);
}

AccelerationStructureCaptureDescriptorDataInfoEXT::operator VkAccelerationStructureCaptureDescriptorDataInfoEXT &() noexcept {
  return *reinterpret_cast<VkAccelerationStructureCaptureDescriptorDataInfoEXT *>(this);
}

AccelerationStructureCaptureDescriptorDataInfoEXT::operator const VkAccelerationStructureCaptureDescriptorDataInfoEXT *() const noexcept {
  return reinterpret_cast<const VkAccelerationStructureCaptureDescriptorDataInfoEXT *>(this);
}

AccelerationStructureCaptureDescriptorDataInfoEXT::operator VkAccelerationStructureCaptureDescriptorDataInfoEXT *() noexcept {
  return reinterpret_cast<VkAccelerationStructureCaptureDescriptorDataInfoEXT *>(this);
}

OpaqueCaptureDescriptorDataCreateInfoEXT::operator const VkOpaqueCaptureDescriptorDataCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkOpaqueCaptureDescriptorDataCreateInfoEXT *>(this);
}

OpaqueCaptureDescriptorDataCreateInfoEXT::operator VkOpaqueCaptureDescriptorDataCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkOpaqueCaptureDescriptorDataCreateInfoEXT *>(this);
}

OpaqueCaptureDescriptorDataCreateInfoEXT::operator const VkOpaqueCaptureDescriptorDataCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkOpaqueCaptureDescriptorDataCreateInfoEXT *>(this);
}

OpaqueCaptureDescriptorDataCreateInfoEXT::operator VkOpaqueCaptureDescriptorDataCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkOpaqueCaptureDescriptorDataCreateInfoEXT *>(this);
}

PhysicalDeviceShaderIntegerDotProductFeatures::operator const VkPhysicalDeviceShaderIntegerDotProductFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderIntegerDotProductFeatures *>(this);
}

PhysicalDeviceShaderIntegerDotProductFeatures::operator VkPhysicalDeviceShaderIntegerDotProductFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderIntegerDotProductFeatures *>(this);
}

PhysicalDeviceShaderIntegerDotProductFeatures::operator const VkPhysicalDeviceShaderIntegerDotProductFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderIntegerDotProductFeatures *>(this);
}

PhysicalDeviceShaderIntegerDotProductFeatures::operator VkPhysicalDeviceShaderIntegerDotProductFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderIntegerDotProductFeatures *>(this);
}

PhysicalDeviceShaderIntegerDotProductProperties::operator const VkPhysicalDeviceShaderIntegerDotProductProperties &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderIntegerDotProductProperties *>(this);
}

PhysicalDeviceShaderIntegerDotProductProperties::operator VkPhysicalDeviceShaderIntegerDotProductProperties &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderIntegerDotProductProperties *>(this);
}

PhysicalDeviceShaderIntegerDotProductProperties::operator const VkPhysicalDeviceShaderIntegerDotProductProperties *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderIntegerDotProductProperties *>(this);
}

PhysicalDeviceShaderIntegerDotProductProperties::operator VkPhysicalDeviceShaderIntegerDotProductProperties *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderIntegerDotProductProperties *>(this);
}

PhysicalDeviceDrmPropertiesEXT::operator const VkPhysicalDeviceDrmPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDrmPropertiesEXT *>(this);
}

PhysicalDeviceDrmPropertiesEXT::operator VkPhysicalDeviceDrmPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDrmPropertiesEXT *>(this);
}

PhysicalDeviceDrmPropertiesEXT::operator const VkPhysicalDeviceDrmPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDrmPropertiesEXT *>(this);
}

PhysicalDeviceDrmPropertiesEXT::operator VkPhysicalDeviceDrmPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDrmPropertiesEXT *>(this);
}

PhysicalDeviceFragmentShaderBarycentricFeaturesKHR::operator const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *>(this);
}

PhysicalDeviceFragmentShaderBarycentricFeaturesKHR::operator VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *>(this);
}

PhysicalDeviceFragmentShaderBarycentricFeaturesKHR::operator const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *>(this);
}

PhysicalDeviceFragmentShaderBarycentricFeaturesKHR::operator VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *>(this);
}

PhysicalDeviceFragmentShaderBarycentricPropertiesKHR::operator const VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR *>(this);
}

PhysicalDeviceFragmentShaderBarycentricPropertiesKHR::operator VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR *>(this);
}

PhysicalDeviceFragmentShaderBarycentricPropertiesKHR::operator const VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR *>(this);
}

PhysicalDeviceFragmentShaderBarycentricPropertiesKHR::operator VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR *>(this);
}

PhysicalDeviceRayTracingMotionBlurFeaturesNV::operator const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *>(this);
}

PhysicalDeviceRayTracingMotionBlurFeaturesNV::operator VkPhysicalDeviceRayTracingMotionBlurFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *>(this);
}

PhysicalDeviceRayTracingMotionBlurFeaturesNV::operator const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *>(this);
}

PhysicalDeviceRayTracingMotionBlurFeaturesNV::operator VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *>(this);
}

PhysicalDeviceRayTracingValidationFeaturesNV::operator const VkPhysicalDeviceRayTracingValidationFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceRayTracingValidationFeaturesNV *>(this);
}

PhysicalDeviceRayTracingValidationFeaturesNV::operator VkPhysicalDeviceRayTracingValidationFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceRayTracingValidationFeaturesNV *>(this);
}

PhysicalDeviceRayTracingValidationFeaturesNV::operator const VkPhysicalDeviceRayTracingValidationFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceRayTracingValidationFeaturesNV *>(this);
}

PhysicalDeviceRayTracingValidationFeaturesNV::operator VkPhysicalDeviceRayTracingValidationFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceRayTracingValidationFeaturesNV *>(this);
}

AccelerationStructureGeometryMotionTrianglesDataNV::operator const VkAccelerationStructureGeometryMotionTrianglesDataNV &() const noexcept {
  return *reinterpret_cast<const VkAccelerationStructureGeometryMotionTrianglesDataNV *>(this);
}

AccelerationStructureGeometryMotionTrianglesDataNV::operator VkAccelerationStructureGeometryMotionTrianglesDataNV &() noexcept {
  return *reinterpret_cast<VkAccelerationStructureGeometryMotionTrianglesDataNV *>(this);
}

AccelerationStructureGeometryMotionTrianglesDataNV::operator const VkAccelerationStructureGeometryMotionTrianglesDataNV *() const noexcept {
  return reinterpret_cast<const VkAccelerationStructureGeometryMotionTrianglesDataNV *>(this);
}

AccelerationStructureGeometryMotionTrianglesDataNV::operator VkAccelerationStructureGeometryMotionTrianglesDataNV *() noexcept {
  return reinterpret_cast<VkAccelerationStructureGeometryMotionTrianglesDataNV *>(this);
}

AccelerationStructureMotionInfoNV::operator const VkAccelerationStructureMotionInfoNV &() const noexcept {
  return *reinterpret_cast<const VkAccelerationStructureMotionInfoNV *>(this);
}

AccelerationStructureMotionInfoNV::operator VkAccelerationStructureMotionInfoNV &() noexcept {
  return *reinterpret_cast<VkAccelerationStructureMotionInfoNV *>(this);
}

AccelerationStructureMotionInfoNV::operator const VkAccelerationStructureMotionInfoNV *() const noexcept {
  return reinterpret_cast<const VkAccelerationStructureMotionInfoNV *>(this);
}

AccelerationStructureMotionInfoNV::operator VkAccelerationStructureMotionInfoNV *() noexcept {
  return reinterpret_cast<VkAccelerationStructureMotionInfoNV *>(this);
}

SRTDataNV::operator const VkSRTDataNV &() const noexcept {
  return *reinterpret_cast<const VkSRTDataNV *>(this);
}

SRTDataNV::operator VkSRTDataNV &() noexcept {
  return *reinterpret_cast<VkSRTDataNV *>(this);
}

SRTDataNV::operator const VkSRTDataNV *() const noexcept {
  return reinterpret_cast<const VkSRTDataNV *>(this);
}

SRTDataNV::operator VkSRTDataNV *() noexcept {
  return reinterpret_cast<VkSRTDataNV *>(this);
}

AccelerationStructureSRTMotionInstanceNV::operator const VkAccelerationStructureSRTMotionInstanceNV &() const noexcept {
  return *reinterpret_cast<const VkAccelerationStructureSRTMotionInstanceNV *>(this);
}

AccelerationStructureSRTMotionInstanceNV::operator VkAccelerationStructureSRTMotionInstanceNV &() noexcept {
  return *reinterpret_cast<VkAccelerationStructureSRTMotionInstanceNV *>(this);
}

AccelerationStructureSRTMotionInstanceNV::operator const VkAccelerationStructureSRTMotionInstanceNV *() const noexcept {
  return reinterpret_cast<const VkAccelerationStructureSRTMotionInstanceNV *>(this);
}

AccelerationStructureSRTMotionInstanceNV::operator VkAccelerationStructureSRTMotionInstanceNV *() noexcept {
  return reinterpret_cast<VkAccelerationStructureSRTMotionInstanceNV *>(this);
}

AccelerationStructureMatrixMotionInstanceNV::operator const VkAccelerationStructureMatrixMotionInstanceNV &() const noexcept {
  return *reinterpret_cast<const VkAccelerationStructureMatrixMotionInstanceNV *>(this);
}

AccelerationStructureMatrixMotionInstanceNV::operator VkAccelerationStructureMatrixMotionInstanceNV &() noexcept {
  return *reinterpret_cast<VkAccelerationStructureMatrixMotionInstanceNV *>(this);
}

AccelerationStructureMatrixMotionInstanceNV::operator const VkAccelerationStructureMatrixMotionInstanceNV *() const noexcept {
  return reinterpret_cast<const VkAccelerationStructureMatrixMotionInstanceNV *>(this);
}

AccelerationStructureMatrixMotionInstanceNV::operator VkAccelerationStructureMatrixMotionInstanceNV *() noexcept {
  return reinterpret_cast<VkAccelerationStructureMatrixMotionInstanceNV *>(this);
}

AccelerationStructureMotionInstanceNV::operator const VkAccelerationStructureMotionInstanceNV &() const noexcept {
  return *reinterpret_cast<const VkAccelerationStructureMotionInstanceNV *>(this);
}

AccelerationStructureMotionInstanceNV::operator VkAccelerationStructureMotionInstanceNV &() noexcept {
  return *reinterpret_cast<VkAccelerationStructureMotionInstanceNV *>(this);
}

AccelerationStructureMotionInstanceNV::operator const VkAccelerationStructureMotionInstanceNV *() const noexcept {
  return reinterpret_cast<const VkAccelerationStructureMotionInstanceNV *>(this);
}

AccelerationStructureMotionInstanceNV::operator VkAccelerationStructureMotionInstanceNV *() noexcept {
  return reinterpret_cast<VkAccelerationStructureMotionInstanceNV *>(this);
}

MemoryGetRemoteAddressInfoNV::operator const VkMemoryGetRemoteAddressInfoNV &() const noexcept {
  return *reinterpret_cast<const VkMemoryGetRemoteAddressInfoNV *>(this);
}

MemoryGetRemoteAddressInfoNV::operator VkMemoryGetRemoteAddressInfoNV &() noexcept {
  return *reinterpret_cast<VkMemoryGetRemoteAddressInfoNV *>(this);
}

MemoryGetRemoteAddressInfoNV::operator const VkMemoryGetRemoteAddressInfoNV *() const noexcept {
  return reinterpret_cast<const VkMemoryGetRemoteAddressInfoNV *>(this);
}

MemoryGetRemoteAddressInfoNV::operator VkMemoryGetRemoteAddressInfoNV *() noexcept {
  return reinterpret_cast<VkMemoryGetRemoteAddressInfoNV *>(this);
}

CudaModuleCreateInfoNV::operator const VkCudaModuleCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkCudaModuleCreateInfoNV *>(this);
}

CudaModuleCreateInfoNV::operator VkCudaModuleCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkCudaModuleCreateInfoNV *>(this);
}

CudaModuleCreateInfoNV::operator const VkCudaModuleCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkCudaModuleCreateInfoNV *>(this);
}

CudaModuleCreateInfoNV::operator VkCudaModuleCreateInfoNV *() noexcept {
  return reinterpret_cast<VkCudaModuleCreateInfoNV *>(this);
}

CudaFunctionCreateInfoNV::operator const VkCudaFunctionCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkCudaFunctionCreateInfoNV *>(this);
}

CudaFunctionCreateInfoNV::operator VkCudaFunctionCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkCudaFunctionCreateInfoNV *>(this);
}

CudaFunctionCreateInfoNV::operator const VkCudaFunctionCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkCudaFunctionCreateInfoNV *>(this);
}

CudaFunctionCreateInfoNV::operator VkCudaFunctionCreateInfoNV *() noexcept {
  return reinterpret_cast<VkCudaFunctionCreateInfoNV *>(this);
}

CudaLaunchInfoNV::operator const VkCudaLaunchInfoNV &() const noexcept {
  return *reinterpret_cast<const VkCudaLaunchInfoNV *>(this);
}

CudaLaunchInfoNV::operator VkCudaLaunchInfoNV &() noexcept {
  return *reinterpret_cast<VkCudaLaunchInfoNV *>(this);
}

CudaLaunchInfoNV::operator const VkCudaLaunchInfoNV *() const noexcept {
  return reinterpret_cast<const VkCudaLaunchInfoNV *>(this);
}

CudaLaunchInfoNV::operator VkCudaLaunchInfoNV *() noexcept {
  return reinterpret_cast<VkCudaLaunchInfoNV *>(this);
}

PhysicalDeviceRGBA10X6FormatsFeaturesEXT::operator const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *>(this);
}

PhysicalDeviceRGBA10X6FormatsFeaturesEXT::operator VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *>(this);
}

PhysicalDeviceRGBA10X6FormatsFeaturesEXT::operator const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *>(this);
}

PhysicalDeviceRGBA10X6FormatsFeaturesEXT::operator VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *>(this);
}

FormatProperties3::operator const VkFormatProperties3 &() const noexcept {
  return *reinterpret_cast<const VkFormatProperties3 *>(this);
}

FormatProperties3::operator VkFormatProperties3 &() noexcept {
  return *reinterpret_cast<VkFormatProperties3 *>(this);
}

FormatProperties3::operator const VkFormatProperties3 *() const noexcept {
  return reinterpret_cast<const VkFormatProperties3 *>(this);
}

FormatProperties3::operator VkFormatProperties3 *() noexcept {
  return reinterpret_cast<VkFormatProperties3 *>(this);
}

DrmFormatModifierProperties2EXT::operator const VkDrmFormatModifierProperties2EXT &() const noexcept {
  return *reinterpret_cast<const VkDrmFormatModifierProperties2EXT *>(this);
}

DrmFormatModifierProperties2EXT::operator VkDrmFormatModifierProperties2EXT &() noexcept {
  return *reinterpret_cast<VkDrmFormatModifierProperties2EXT *>(this);
}

DrmFormatModifierProperties2EXT::operator const VkDrmFormatModifierProperties2EXT *() const noexcept {
  return reinterpret_cast<const VkDrmFormatModifierProperties2EXT *>(this);
}

DrmFormatModifierProperties2EXT::operator VkDrmFormatModifierProperties2EXT *() noexcept {
  return reinterpret_cast<VkDrmFormatModifierProperties2EXT *>(this);
}

DrmFormatModifierPropertiesList2EXT::operator const VkDrmFormatModifierPropertiesList2EXT &() const noexcept {
  return *reinterpret_cast<const VkDrmFormatModifierPropertiesList2EXT *>(this);
}

DrmFormatModifierPropertiesList2EXT::operator VkDrmFormatModifierPropertiesList2EXT &() noexcept {
  return *reinterpret_cast<VkDrmFormatModifierPropertiesList2EXT *>(this);
}

DrmFormatModifierPropertiesList2EXT::operator const VkDrmFormatModifierPropertiesList2EXT *() const noexcept {
  return reinterpret_cast<const VkDrmFormatModifierPropertiesList2EXT *>(this);
}

DrmFormatModifierPropertiesList2EXT::operator VkDrmFormatModifierPropertiesList2EXT *() noexcept {
  return reinterpret_cast<VkDrmFormatModifierPropertiesList2EXT *>(this);
}

PipelineRenderingCreateInfo::operator const VkPipelineRenderingCreateInfo &() const noexcept {
  return *reinterpret_cast<const VkPipelineRenderingCreateInfo *>(this);
}

PipelineRenderingCreateInfo::operator VkPipelineRenderingCreateInfo &() noexcept {
  return *reinterpret_cast<VkPipelineRenderingCreateInfo *>(this);
}

PipelineRenderingCreateInfo::operator const VkPipelineRenderingCreateInfo *() const noexcept {
  return reinterpret_cast<const VkPipelineRenderingCreateInfo *>(this);
}

PipelineRenderingCreateInfo::operator VkPipelineRenderingCreateInfo *() noexcept {
  return reinterpret_cast<VkPipelineRenderingCreateInfo *>(this);
}

RenderingAttachmentInfo::operator const VkRenderingAttachmentInfo &() const noexcept {
  return *reinterpret_cast<const VkRenderingAttachmentInfo *>(this);
}

RenderingAttachmentInfo::operator VkRenderingAttachmentInfo &() noexcept {
  return *reinterpret_cast<VkRenderingAttachmentInfo *>(this);
}

RenderingAttachmentInfo::operator const VkRenderingAttachmentInfo *() const noexcept {
  return reinterpret_cast<const VkRenderingAttachmentInfo *>(this);
}

RenderingAttachmentInfo::operator VkRenderingAttachmentInfo *() noexcept {
  return reinterpret_cast<VkRenderingAttachmentInfo *>(this);
}

RenderingInfo::operator const VkRenderingInfo &() const noexcept {
  return *reinterpret_cast<const VkRenderingInfo *>(this);
}

RenderingInfo::operator VkRenderingInfo &() noexcept {
  return *reinterpret_cast<VkRenderingInfo *>(this);
}

RenderingInfo::operator const VkRenderingInfo *() const noexcept {
  return reinterpret_cast<const VkRenderingInfo *>(this);
}

RenderingInfo::operator VkRenderingInfo *() noexcept {
  return reinterpret_cast<VkRenderingInfo *>(this);
}

RenderingFragmentShadingRateAttachmentInfoKHR::operator const VkRenderingFragmentShadingRateAttachmentInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkRenderingFragmentShadingRateAttachmentInfoKHR *>(this);
}

RenderingFragmentShadingRateAttachmentInfoKHR::operator VkRenderingFragmentShadingRateAttachmentInfoKHR &() noexcept {
  return *reinterpret_cast<VkRenderingFragmentShadingRateAttachmentInfoKHR *>(this);
}

RenderingFragmentShadingRateAttachmentInfoKHR::operator const VkRenderingFragmentShadingRateAttachmentInfoKHR *() const noexcept {
  return reinterpret_cast<const VkRenderingFragmentShadingRateAttachmentInfoKHR *>(this);
}

RenderingFragmentShadingRateAttachmentInfoKHR::operator VkRenderingFragmentShadingRateAttachmentInfoKHR *() noexcept {
  return reinterpret_cast<VkRenderingFragmentShadingRateAttachmentInfoKHR *>(this);
}

RenderingFragmentDensityMapAttachmentInfoEXT::operator const VkRenderingFragmentDensityMapAttachmentInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkRenderingFragmentDensityMapAttachmentInfoEXT *>(this);
}

RenderingFragmentDensityMapAttachmentInfoEXT::operator VkRenderingFragmentDensityMapAttachmentInfoEXT &() noexcept {
  return *reinterpret_cast<VkRenderingFragmentDensityMapAttachmentInfoEXT *>(this);
}

RenderingFragmentDensityMapAttachmentInfoEXT::operator const VkRenderingFragmentDensityMapAttachmentInfoEXT *() const noexcept {
  return reinterpret_cast<const VkRenderingFragmentDensityMapAttachmentInfoEXT *>(this);
}

RenderingFragmentDensityMapAttachmentInfoEXT::operator VkRenderingFragmentDensityMapAttachmentInfoEXT *() noexcept {
  return reinterpret_cast<VkRenderingFragmentDensityMapAttachmentInfoEXT *>(this);
}

PhysicalDeviceDynamicRenderingFeatures::operator const VkPhysicalDeviceDynamicRenderingFeatures &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDynamicRenderingFeatures *>(this);
}

PhysicalDeviceDynamicRenderingFeatures::operator VkPhysicalDeviceDynamicRenderingFeatures &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDynamicRenderingFeatures *>(this);
}

PhysicalDeviceDynamicRenderingFeatures::operator const VkPhysicalDeviceDynamicRenderingFeatures *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDynamicRenderingFeatures *>(this);
}

PhysicalDeviceDynamicRenderingFeatures::operator VkPhysicalDeviceDynamicRenderingFeatures *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDynamicRenderingFeatures *>(this);
}

CommandBufferInheritanceRenderingInfo::operator const VkCommandBufferInheritanceRenderingInfo &() const noexcept {
  return *reinterpret_cast<const VkCommandBufferInheritanceRenderingInfo *>(this);
}

CommandBufferInheritanceRenderingInfo::operator VkCommandBufferInheritanceRenderingInfo &() noexcept {
  return *reinterpret_cast<VkCommandBufferInheritanceRenderingInfo *>(this);
}

CommandBufferInheritanceRenderingInfo::operator const VkCommandBufferInheritanceRenderingInfo *() const noexcept {
  return reinterpret_cast<const VkCommandBufferInheritanceRenderingInfo *>(this);
}

CommandBufferInheritanceRenderingInfo::operator VkCommandBufferInheritanceRenderingInfo *() noexcept {
  return reinterpret_cast<VkCommandBufferInheritanceRenderingInfo *>(this);
}

AttachmentSampleCountInfoAMD::operator const VkAttachmentSampleCountInfoAMD &() const noexcept {
  return *reinterpret_cast<const VkAttachmentSampleCountInfoAMD *>(this);
}

AttachmentSampleCountInfoAMD::operator VkAttachmentSampleCountInfoAMD &() noexcept {
  return *reinterpret_cast<VkAttachmentSampleCountInfoAMD *>(this);
}

AttachmentSampleCountInfoAMD::operator const VkAttachmentSampleCountInfoAMD *() const noexcept {
  return reinterpret_cast<const VkAttachmentSampleCountInfoAMD *>(this);
}

AttachmentSampleCountInfoAMD::operator VkAttachmentSampleCountInfoAMD *() noexcept {
  return reinterpret_cast<VkAttachmentSampleCountInfoAMD *>(this);
}

MultiviewPerViewAttributesInfoNVX::operator const VkMultiviewPerViewAttributesInfoNVX &() const noexcept {
  return *reinterpret_cast<const VkMultiviewPerViewAttributesInfoNVX *>(this);
}

MultiviewPerViewAttributesInfoNVX::operator VkMultiviewPerViewAttributesInfoNVX &() noexcept {
  return *reinterpret_cast<VkMultiviewPerViewAttributesInfoNVX *>(this);
}

MultiviewPerViewAttributesInfoNVX::operator const VkMultiviewPerViewAttributesInfoNVX *() const noexcept {
  return reinterpret_cast<const VkMultiviewPerViewAttributesInfoNVX *>(this);
}

MultiviewPerViewAttributesInfoNVX::operator VkMultiviewPerViewAttributesInfoNVX *() noexcept {
  return reinterpret_cast<VkMultiviewPerViewAttributesInfoNVX *>(this);
}

PhysicalDeviceImageViewMinLodFeaturesEXT::operator const VkPhysicalDeviceImageViewMinLodFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceImageViewMinLodFeaturesEXT *>(this);
}

PhysicalDeviceImageViewMinLodFeaturesEXT::operator VkPhysicalDeviceImageViewMinLodFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceImageViewMinLodFeaturesEXT *>(this);
}

PhysicalDeviceImageViewMinLodFeaturesEXT::operator const VkPhysicalDeviceImageViewMinLodFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceImageViewMinLodFeaturesEXT *>(this);
}

PhysicalDeviceImageViewMinLodFeaturesEXT::operator VkPhysicalDeviceImageViewMinLodFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceImageViewMinLodFeaturesEXT *>(this);
}

ImageViewMinLodCreateInfoEXT::operator const VkImageViewMinLodCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkImageViewMinLodCreateInfoEXT *>(this);
}

ImageViewMinLodCreateInfoEXT::operator VkImageViewMinLodCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkImageViewMinLodCreateInfoEXT *>(this);
}

ImageViewMinLodCreateInfoEXT::operator const VkImageViewMinLodCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkImageViewMinLodCreateInfoEXT *>(this);
}

ImageViewMinLodCreateInfoEXT::operator VkImageViewMinLodCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkImageViewMinLodCreateInfoEXT *>(this);
}

PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT::
operator const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *>(this);
}

PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT::
operator VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *>(this);
}

PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT::
operator const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *>(this);
}

PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT::
operator VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *>(this);
}

PhysicalDeviceLinearColorAttachmentFeaturesNV::operator const VkPhysicalDeviceLinearColorAttachmentFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceLinearColorAttachmentFeaturesNV *>(this);
}

PhysicalDeviceLinearColorAttachmentFeaturesNV::operator VkPhysicalDeviceLinearColorAttachmentFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceLinearColorAttachmentFeaturesNV *>(this);
}

PhysicalDeviceLinearColorAttachmentFeaturesNV::operator const VkPhysicalDeviceLinearColorAttachmentFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceLinearColorAttachmentFeaturesNV *>(this);
}

PhysicalDeviceLinearColorAttachmentFeaturesNV::operator VkPhysicalDeviceLinearColorAttachmentFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceLinearColorAttachmentFeaturesNV *>(this);
}

PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT::operator const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *>(this);
}

PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT::operator VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *>(this);
}

PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT::operator const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *>(this);
}

PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT::operator VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *>(this);
}

PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT::operator const VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT *>(this);
}

PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT::operator VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT *>(this);
}

PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT::operator const VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT *>(this);
}

PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT::operator VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT *>(this);
}

GraphicsPipelineLibraryCreateInfoEXT::operator const VkGraphicsPipelineLibraryCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkGraphicsPipelineLibraryCreateInfoEXT *>(this);
}

GraphicsPipelineLibraryCreateInfoEXT::operator VkGraphicsPipelineLibraryCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkGraphicsPipelineLibraryCreateInfoEXT *>(this);
}

GraphicsPipelineLibraryCreateInfoEXT::operator const VkGraphicsPipelineLibraryCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkGraphicsPipelineLibraryCreateInfoEXT *>(this);
}

GraphicsPipelineLibraryCreateInfoEXT::operator VkGraphicsPipelineLibraryCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkGraphicsPipelineLibraryCreateInfoEXT *>(this);
}

PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE::operator const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *>(this);
}

PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE::operator VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *>(this);
}

PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE::operator const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *>(this);
}

PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE::operator VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *>(this);
}

DescriptorSetBindingReferenceVALVE::operator const VkDescriptorSetBindingReferenceVALVE &() const noexcept {
  return *reinterpret_cast<const VkDescriptorSetBindingReferenceVALVE *>(this);
}

DescriptorSetBindingReferenceVALVE::operator VkDescriptorSetBindingReferenceVALVE &() noexcept {
  return *reinterpret_cast<VkDescriptorSetBindingReferenceVALVE *>(this);
}

DescriptorSetBindingReferenceVALVE::operator const VkDescriptorSetBindingReferenceVALVE *() const noexcept {
  return reinterpret_cast<const VkDescriptorSetBindingReferenceVALVE *>(this);
}

DescriptorSetBindingReferenceVALVE::operator VkDescriptorSetBindingReferenceVALVE *() noexcept {
  return reinterpret_cast<VkDescriptorSetBindingReferenceVALVE *>(this);
}

DescriptorSetLayoutHostMappingInfoVALVE::operator const VkDescriptorSetLayoutHostMappingInfoVALVE &() const noexcept {
  return *reinterpret_cast<const VkDescriptorSetLayoutHostMappingInfoVALVE *>(this);
}

DescriptorSetLayoutHostMappingInfoVALVE::operator VkDescriptorSetLayoutHostMappingInfoVALVE &() noexcept {
  return *reinterpret_cast<VkDescriptorSetLayoutHostMappingInfoVALVE *>(this);
}

DescriptorSetLayoutHostMappingInfoVALVE::operator const VkDescriptorSetLayoutHostMappingInfoVALVE *() const noexcept {
  return reinterpret_cast<const VkDescriptorSetLayoutHostMappingInfoVALVE *>(this);
}

DescriptorSetLayoutHostMappingInfoVALVE::operator VkDescriptorSetLayoutHostMappingInfoVALVE *() noexcept {
  return reinterpret_cast<VkDescriptorSetLayoutHostMappingInfoVALVE *>(this);
}

PhysicalDeviceNestedCommandBufferFeaturesEXT::operator const VkPhysicalDeviceNestedCommandBufferFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceNestedCommandBufferFeaturesEXT *>(this);
}

PhysicalDeviceNestedCommandBufferFeaturesEXT::operator VkPhysicalDeviceNestedCommandBufferFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceNestedCommandBufferFeaturesEXT *>(this);
}

PhysicalDeviceNestedCommandBufferFeaturesEXT::operator const VkPhysicalDeviceNestedCommandBufferFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceNestedCommandBufferFeaturesEXT *>(this);
}

PhysicalDeviceNestedCommandBufferFeaturesEXT::operator VkPhysicalDeviceNestedCommandBufferFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceNestedCommandBufferFeaturesEXT *>(this);
}

PhysicalDeviceNestedCommandBufferPropertiesEXT::operator const VkPhysicalDeviceNestedCommandBufferPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceNestedCommandBufferPropertiesEXT *>(this);
}

PhysicalDeviceNestedCommandBufferPropertiesEXT::operator VkPhysicalDeviceNestedCommandBufferPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceNestedCommandBufferPropertiesEXT *>(this);
}

PhysicalDeviceNestedCommandBufferPropertiesEXT::operator const VkPhysicalDeviceNestedCommandBufferPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceNestedCommandBufferPropertiesEXT *>(this);
}

PhysicalDeviceNestedCommandBufferPropertiesEXT::operator VkPhysicalDeviceNestedCommandBufferPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceNestedCommandBufferPropertiesEXT *>(this);
}

PhysicalDeviceShaderModuleIdentifierFeaturesEXT::operator const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *>(this);
}

PhysicalDeviceShaderModuleIdentifierFeaturesEXT::operator VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *>(this);
}

PhysicalDeviceShaderModuleIdentifierFeaturesEXT::operator const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *>(this);
}

PhysicalDeviceShaderModuleIdentifierFeaturesEXT::operator VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *>(this);
}

PhysicalDeviceShaderModuleIdentifierPropertiesEXT::operator const VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT *>(this);
}

PhysicalDeviceShaderModuleIdentifierPropertiesEXT::operator VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT *>(this);
}

PhysicalDeviceShaderModuleIdentifierPropertiesEXT::operator const VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT *>(this);
}

PhysicalDeviceShaderModuleIdentifierPropertiesEXT::operator VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT *>(this);
}

PipelineShaderStageModuleIdentifierCreateInfoEXT::operator const VkPipelineShaderStageModuleIdentifierCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkPipelineShaderStageModuleIdentifierCreateInfoEXT *>(this);
}

PipelineShaderStageModuleIdentifierCreateInfoEXT::operator VkPipelineShaderStageModuleIdentifierCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkPipelineShaderStageModuleIdentifierCreateInfoEXT *>(this);
}

PipelineShaderStageModuleIdentifierCreateInfoEXT::operator const VkPipelineShaderStageModuleIdentifierCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkPipelineShaderStageModuleIdentifierCreateInfoEXT *>(this);
}

PipelineShaderStageModuleIdentifierCreateInfoEXT::operator VkPipelineShaderStageModuleIdentifierCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkPipelineShaderStageModuleIdentifierCreateInfoEXT *>(this);
}

ShaderModuleIdentifierEXT::operator const VkShaderModuleIdentifierEXT &() const noexcept {
  return *reinterpret_cast<const VkShaderModuleIdentifierEXT *>(this);
}

ShaderModuleIdentifierEXT::operator VkShaderModuleIdentifierEXT &() noexcept {
  return *reinterpret_cast<VkShaderModuleIdentifierEXT *>(this);
}

ShaderModuleIdentifierEXT::operator const VkShaderModuleIdentifierEXT *() const noexcept {
  return reinterpret_cast<const VkShaderModuleIdentifierEXT *>(this);
}

ShaderModuleIdentifierEXT::operator VkShaderModuleIdentifierEXT *() noexcept {
  return reinterpret_cast<VkShaderModuleIdentifierEXT *>(this);
}

ImageCompressionControlEXT::operator const VkImageCompressionControlEXT &() const noexcept {
  return *reinterpret_cast<const VkImageCompressionControlEXT *>(this);
}

ImageCompressionControlEXT::operator VkImageCompressionControlEXT &() noexcept {
  return *reinterpret_cast<VkImageCompressionControlEXT *>(this);
}

ImageCompressionControlEXT::operator const VkImageCompressionControlEXT *() const noexcept {
  return reinterpret_cast<const VkImageCompressionControlEXT *>(this);
}

ImageCompressionControlEXT::operator VkImageCompressionControlEXT *() noexcept {
  return reinterpret_cast<VkImageCompressionControlEXT *>(this);
}

PhysicalDeviceImageCompressionControlFeaturesEXT::operator const VkPhysicalDeviceImageCompressionControlFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceImageCompressionControlFeaturesEXT *>(this);
}

PhysicalDeviceImageCompressionControlFeaturesEXT::operator VkPhysicalDeviceImageCompressionControlFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceImageCompressionControlFeaturesEXT *>(this);
}

PhysicalDeviceImageCompressionControlFeaturesEXT::operator const VkPhysicalDeviceImageCompressionControlFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceImageCompressionControlFeaturesEXT *>(this);
}

PhysicalDeviceImageCompressionControlFeaturesEXT::operator VkPhysicalDeviceImageCompressionControlFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceImageCompressionControlFeaturesEXT *>(this);
}

ImageCompressionPropertiesEXT::operator const VkImageCompressionPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkImageCompressionPropertiesEXT *>(this);
}

ImageCompressionPropertiesEXT::operator VkImageCompressionPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkImageCompressionPropertiesEXT *>(this);
}

ImageCompressionPropertiesEXT::operator const VkImageCompressionPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkImageCompressionPropertiesEXT *>(this);
}

ImageCompressionPropertiesEXT::operator VkImageCompressionPropertiesEXT *() noexcept {
  return reinterpret_cast<VkImageCompressionPropertiesEXT *>(this);
}

PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT::operator const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *>(this);
}

PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT::
operator VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *>(this);
}

PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT::operator const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *>(this);
}

PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT::
operator VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *>(this);
}

ImageSubresource2KHR::operator const VkImageSubresource2KHR &() const noexcept {
  return *reinterpret_cast<const VkImageSubresource2KHR *>(this);
}

ImageSubresource2KHR::operator VkImageSubresource2KHR &() noexcept {
  return *reinterpret_cast<VkImageSubresource2KHR *>(this);
}

ImageSubresource2KHR::operator const VkImageSubresource2KHR *() const noexcept {
  return reinterpret_cast<const VkImageSubresource2KHR *>(this);
}

ImageSubresource2KHR::operator VkImageSubresource2KHR *() noexcept {
  return reinterpret_cast<VkImageSubresource2KHR *>(this);
}

SubresourceLayout2KHR::operator const VkSubresourceLayout2KHR &() const noexcept {
  return *reinterpret_cast<const VkSubresourceLayout2KHR *>(this);
}

SubresourceLayout2KHR::operator VkSubresourceLayout2KHR &() noexcept {
  return *reinterpret_cast<VkSubresourceLayout2KHR *>(this);
}

SubresourceLayout2KHR::operator const VkSubresourceLayout2KHR *() const noexcept {
  return reinterpret_cast<const VkSubresourceLayout2KHR *>(this);
}

SubresourceLayout2KHR::operator VkSubresourceLayout2KHR *() noexcept {
  return reinterpret_cast<VkSubresourceLayout2KHR *>(this);
}

RenderPassCreationControlEXT::operator const VkRenderPassCreationControlEXT &() const noexcept {
  return *reinterpret_cast<const VkRenderPassCreationControlEXT *>(this);
}

RenderPassCreationControlEXT::operator VkRenderPassCreationControlEXT &() noexcept {
  return *reinterpret_cast<VkRenderPassCreationControlEXT *>(this);
}

RenderPassCreationControlEXT::operator const VkRenderPassCreationControlEXT *() const noexcept {
  return reinterpret_cast<const VkRenderPassCreationControlEXT *>(this);
}

RenderPassCreationControlEXT::operator VkRenderPassCreationControlEXT *() noexcept {
  return reinterpret_cast<VkRenderPassCreationControlEXT *>(this);
}

RenderPassCreationFeedbackInfoEXT::operator const VkRenderPassCreationFeedbackInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkRenderPassCreationFeedbackInfoEXT *>(this);
}

RenderPassCreationFeedbackInfoEXT::operator VkRenderPassCreationFeedbackInfoEXT &() noexcept {
  return *reinterpret_cast<VkRenderPassCreationFeedbackInfoEXT *>(this);
}

RenderPassCreationFeedbackInfoEXT::operator const VkRenderPassCreationFeedbackInfoEXT *() const noexcept {
  return reinterpret_cast<const VkRenderPassCreationFeedbackInfoEXT *>(this);
}

RenderPassCreationFeedbackInfoEXT::operator VkRenderPassCreationFeedbackInfoEXT *() noexcept {
  return reinterpret_cast<VkRenderPassCreationFeedbackInfoEXT *>(this);
}

RenderPassCreationFeedbackCreateInfoEXT::operator const VkRenderPassCreationFeedbackCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkRenderPassCreationFeedbackCreateInfoEXT *>(this);
}

RenderPassCreationFeedbackCreateInfoEXT::operator VkRenderPassCreationFeedbackCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkRenderPassCreationFeedbackCreateInfoEXT *>(this);
}

RenderPassCreationFeedbackCreateInfoEXT::operator const VkRenderPassCreationFeedbackCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkRenderPassCreationFeedbackCreateInfoEXT *>(this);
}

RenderPassCreationFeedbackCreateInfoEXT::operator VkRenderPassCreationFeedbackCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkRenderPassCreationFeedbackCreateInfoEXT *>(this);
}

RenderPassSubpassFeedbackInfoEXT::operator const VkRenderPassSubpassFeedbackInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkRenderPassSubpassFeedbackInfoEXT *>(this);
}

RenderPassSubpassFeedbackInfoEXT::operator VkRenderPassSubpassFeedbackInfoEXT &() noexcept {
  return *reinterpret_cast<VkRenderPassSubpassFeedbackInfoEXT *>(this);
}

RenderPassSubpassFeedbackInfoEXT::operator const VkRenderPassSubpassFeedbackInfoEXT *() const noexcept {
  return reinterpret_cast<const VkRenderPassSubpassFeedbackInfoEXT *>(this);
}

RenderPassSubpassFeedbackInfoEXT::operator VkRenderPassSubpassFeedbackInfoEXT *() noexcept {
  return reinterpret_cast<VkRenderPassSubpassFeedbackInfoEXT *>(this);
}

RenderPassSubpassFeedbackCreateInfoEXT::operator const VkRenderPassSubpassFeedbackCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkRenderPassSubpassFeedbackCreateInfoEXT *>(this);
}

RenderPassSubpassFeedbackCreateInfoEXT::operator VkRenderPassSubpassFeedbackCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkRenderPassSubpassFeedbackCreateInfoEXT *>(this);
}

RenderPassSubpassFeedbackCreateInfoEXT::operator const VkRenderPassSubpassFeedbackCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkRenderPassSubpassFeedbackCreateInfoEXT *>(this);
}

RenderPassSubpassFeedbackCreateInfoEXT::operator VkRenderPassSubpassFeedbackCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkRenderPassSubpassFeedbackCreateInfoEXT *>(this);
}

PhysicalDeviceSubpassMergeFeedbackFeaturesEXT::operator const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *>(this);
}

PhysicalDeviceSubpassMergeFeedbackFeaturesEXT::operator VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *>(this);
}

PhysicalDeviceSubpassMergeFeedbackFeaturesEXT::operator const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *>(this);
}

PhysicalDeviceSubpassMergeFeedbackFeaturesEXT::operator VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *>(this);
}

MicromapUsageEXT::operator const VkMicromapUsageEXT &() const noexcept {
  return *reinterpret_cast<const VkMicromapUsageEXT *>(this);
}

MicromapUsageEXT::operator VkMicromapUsageEXT &() noexcept {
  return *reinterpret_cast<VkMicromapUsageEXT *>(this);
}

MicromapUsageEXT::operator const VkMicromapUsageEXT *() const noexcept {
  return reinterpret_cast<const VkMicromapUsageEXT *>(this);
}

MicromapUsageEXT::operator VkMicromapUsageEXT *() noexcept {
  return reinterpret_cast<VkMicromapUsageEXT *>(this);
}

MicromapBuildInfoEXT::operator const VkMicromapBuildInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkMicromapBuildInfoEXT *>(this);
}

MicromapBuildInfoEXT::operator VkMicromapBuildInfoEXT &() noexcept {
  return *reinterpret_cast<VkMicromapBuildInfoEXT *>(this);
}

MicromapBuildInfoEXT::operator const VkMicromapBuildInfoEXT *() const noexcept {
  return reinterpret_cast<const VkMicromapBuildInfoEXT *>(this);
}

MicromapBuildInfoEXT::operator VkMicromapBuildInfoEXT *() noexcept {
  return reinterpret_cast<VkMicromapBuildInfoEXT *>(this);
}

MicromapCreateInfoEXT::operator const VkMicromapCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkMicromapCreateInfoEXT *>(this);
}

MicromapCreateInfoEXT::operator VkMicromapCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkMicromapCreateInfoEXT *>(this);
}

MicromapCreateInfoEXT::operator const VkMicromapCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkMicromapCreateInfoEXT *>(this);
}

MicromapCreateInfoEXT::operator VkMicromapCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkMicromapCreateInfoEXT *>(this);
}

MicromapVersionInfoEXT::operator const VkMicromapVersionInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkMicromapVersionInfoEXT *>(this);
}

MicromapVersionInfoEXT::operator VkMicromapVersionInfoEXT &() noexcept {
  return *reinterpret_cast<VkMicromapVersionInfoEXT *>(this);
}

MicromapVersionInfoEXT::operator const VkMicromapVersionInfoEXT *() const noexcept {
  return reinterpret_cast<const VkMicromapVersionInfoEXT *>(this);
}

MicromapVersionInfoEXT::operator VkMicromapVersionInfoEXT *() noexcept {
  return reinterpret_cast<VkMicromapVersionInfoEXT *>(this);
}

CopyMicromapInfoEXT::operator const VkCopyMicromapInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkCopyMicromapInfoEXT *>(this);
}

CopyMicromapInfoEXT::operator VkCopyMicromapInfoEXT &() noexcept {
  return *reinterpret_cast<VkCopyMicromapInfoEXT *>(this);
}

CopyMicromapInfoEXT::operator const VkCopyMicromapInfoEXT *() const noexcept {
  return reinterpret_cast<const VkCopyMicromapInfoEXT *>(this);
}

CopyMicromapInfoEXT::operator VkCopyMicromapInfoEXT *() noexcept {
  return reinterpret_cast<VkCopyMicromapInfoEXT *>(this);
}

CopyMicromapToMemoryInfoEXT::operator const VkCopyMicromapToMemoryInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkCopyMicromapToMemoryInfoEXT *>(this);
}

CopyMicromapToMemoryInfoEXT::operator VkCopyMicromapToMemoryInfoEXT &() noexcept {
  return *reinterpret_cast<VkCopyMicromapToMemoryInfoEXT *>(this);
}

CopyMicromapToMemoryInfoEXT::operator const VkCopyMicromapToMemoryInfoEXT *() const noexcept {
  return reinterpret_cast<const VkCopyMicromapToMemoryInfoEXT *>(this);
}

CopyMicromapToMemoryInfoEXT::operator VkCopyMicromapToMemoryInfoEXT *() noexcept {
  return reinterpret_cast<VkCopyMicromapToMemoryInfoEXT *>(this);
}

CopyMemoryToMicromapInfoEXT::operator const VkCopyMemoryToMicromapInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkCopyMemoryToMicromapInfoEXT *>(this);
}

CopyMemoryToMicromapInfoEXT::operator VkCopyMemoryToMicromapInfoEXT &() noexcept {
  return *reinterpret_cast<VkCopyMemoryToMicromapInfoEXT *>(this);
}

CopyMemoryToMicromapInfoEXT::operator const VkCopyMemoryToMicromapInfoEXT *() const noexcept {
  return reinterpret_cast<const VkCopyMemoryToMicromapInfoEXT *>(this);
}

CopyMemoryToMicromapInfoEXT::operator VkCopyMemoryToMicromapInfoEXT *() noexcept {
  return reinterpret_cast<VkCopyMemoryToMicromapInfoEXT *>(this);
}

MicromapBuildSizesInfoEXT::operator const VkMicromapBuildSizesInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkMicromapBuildSizesInfoEXT *>(this);
}

MicromapBuildSizesInfoEXT::operator VkMicromapBuildSizesInfoEXT &() noexcept {
  return *reinterpret_cast<VkMicromapBuildSizesInfoEXT *>(this);
}

MicromapBuildSizesInfoEXT::operator const VkMicromapBuildSizesInfoEXT *() const noexcept {
  return reinterpret_cast<const VkMicromapBuildSizesInfoEXT *>(this);
}

MicromapBuildSizesInfoEXT::operator VkMicromapBuildSizesInfoEXT *() noexcept {
  return reinterpret_cast<VkMicromapBuildSizesInfoEXT *>(this);
}

MicromapTriangleEXT::operator const VkMicromapTriangleEXT &() const noexcept {
  return *reinterpret_cast<const VkMicromapTriangleEXT *>(this);
}

MicromapTriangleEXT::operator VkMicromapTriangleEXT &() noexcept {
  return *reinterpret_cast<VkMicromapTriangleEXT *>(this);
}

MicromapTriangleEXT::operator const VkMicromapTriangleEXT *() const noexcept {
  return reinterpret_cast<const VkMicromapTriangleEXT *>(this);
}

MicromapTriangleEXT::operator VkMicromapTriangleEXT *() noexcept {
  return reinterpret_cast<VkMicromapTriangleEXT *>(this);
}

PhysicalDeviceOpacityMicromapFeaturesEXT::operator const VkPhysicalDeviceOpacityMicromapFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceOpacityMicromapFeaturesEXT *>(this);
}

PhysicalDeviceOpacityMicromapFeaturesEXT::operator VkPhysicalDeviceOpacityMicromapFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceOpacityMicromapFeaturesEXT *>(this);
}

PhysicalDeviceOpacityMicromapFeaturesEXT::operator const VkPhysicalDeviceOpacityMicromapFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceOpacityMicromapFeaturesEXT *>(this);
}

PhysicalDeviceOpacityMicromapFeaturesEXT::operator VkPhysicalDeviceOpacityMicromapFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceOpacityMicromapFeaturesEXT *>(this);
}

PhysicalDeviceOpacityMicromapPropertiesEXT::operator const VkPhysicalDeviceOpacityMicromapPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceOpacityMicromapPropertiesEXT *>(this);
}

PhysicalDeviceOpacityMicromapPropertiesEXT::operator VkPhysicalDeviceOpacityMicromapPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceOpacityMicromapPropertiesEXT *>(this);
}

PhysicalDeviceOpacityMicromapPropertiesEXT::operator const VkPhysicalDeviceOpacityMicromapPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceOpacityMicromapPropertiesEXT *>(this);
}

PhysicalDeviceOpacityMicromapPropertiesEXT::operator VkPhysicalDeviceOpacityMicromapPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceOpacityMicromapPropertiesEXT *>(this);
}

AccelerationStructureTrianglesOpacityMicromapEXT::operator const VkAccelerationStructureTrianglesOpacityMicromapEXT &() const noexcept {
  return *reinterpret_cast<const VkAccelerationStructureTrianglesOpacityMicromapEXT *>(this);
}

AccelerationStructureTrianglesOpacityMicromapEXT::operator VkAccelerationStructureTrianglesOpacityMicromapEXT &() noexcept {
  return *reinterpret_cast<VkAccelerationStructureTrianglesOpacityMicromapEXT *>(this);
}

AccelerationStructureTrianglesOpacityMicromapEXT::operator const VkAccelerationStructureTrianglesOpacityMicromapEXT *() const noexcept {
  return reinterpret_cast<const VkAccelerationStructureTrianglesOpacityMicromapEXT *>(this);
}

AccelerationStructureTrianglesOpacityMicromapEXT::operator VkAccelerationStructureTrianglesOpacityMicromapEXT *() noexcept {
  return reinterpret_cast<VkAccelerationStructureTrianglesOpacityMicromapEXT *>(this);
}

PipelinePropertiesIdentifierEXT::operator const VkPipelinePropertiesIdentifierEXT &() const noexcept {
  return *reinterpret_cast<const VkPipelinePropertiesIdentifierEXT *>(this);
}

PipelinePropertiesIdentifierEXT::operator VkPipelinePropertiesIdentifierEXT &() noexcept {
  return *reinterpret_cast<VkPipelinePropertiesIdentifierEXT *>(this);
}

PipelinePropertiesIdentifierEXT::operator const VkPipelinePropertiesIdentifierEXT *() const noexcept {
  return reinterpret_cast<const VkPipelinePropertiesIdentifierEXT *>(this);
}

PipelinePropertiesIdentifierEXT::operator VkPipelinePropertiesIdentifierEXT *() noexcept {
  return reinterpret_cast<VkPipelinePropertiesIdentifierEXT *>(this);
}

PhysicalDevicePipelinePropertiesFeaturesEXT::operator const VkPhysicalDevicePipelinePropertiesFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDevicePipelinePropertiesFeaturesEXT *>(this);
}

PhysicalDevicePipelinePropertiesFeaturesEXT::operator VkPhysicalDevicePipelinePropertiesFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDevicePipelinePropertiesFeaturesEXT *>(this);
}

PhysicalDevicePipelinePropertiesFeaturesEXT::operator const VkPhysicalDevicePipelinePropertiesFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDevicePipelinePropertiesFeaturesEXT *>(this);
}

PhysicalDevicePipelinePropertiesFeaturesEXT::operator VkPhysicalDevicePipelinePropertiesFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDevicePipelinePropertiesFeaturesEXT *>(this);
}

PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD::operator const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *>(this);
}

PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD::operator VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *>(this);
}

PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD::operator const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *>(this);
}

PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD::operator VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *>(this);
}

ExternalMemoryAcquireUnmodifiedEXT::operator const VkExternalMemoryAcquireUnmodifiedEXT &() const noexcept {
  return *reinterpret_cast<const VkExternalMemoryAcquireUnmodifiedEXT *>(this);
}

ExternalMemoryAcquireUnmodifiedEXT::operator VkExternalMemoryAcquireUnmodifiedEXT &() noexcept {
  return *reinterpret_cast<VkExternalMemoryAcquireUnmodifiedEXT *>(this);
}

ExternalMemoryAcquireUnmodifiedEXT::operator const VkExternalMemoryAcquireUnmodifiedEXT *() const noexcept {
  return reinterpret_cast<const VkExternalMemoryAcquireUnmodifiedEXT *>(this);
}

ExternalMemoryAcquireUnmodifiedEXT::operator VkExternalMemoryAcquireUnmodifiedEXT *() noexcept {
  return reinterpret_cast<VkExternalMemoryAcquireUnmodifiedEXT *>(this);
}

PhysicalDeviceNonSeamlessCubeMapFeaturesEXT::operator const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *>(this);
}

PhysicalDeviceNonSeamlessCubeMapFeaturesEXT::operator VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *>(this);
}

PhysicalDeviceNonSeamlessCubeMapFeaturesEXT::operator const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *>(this);
}

PhysicalDeviceNonSeamlessCubeMapFeaturesEXT::operator VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *>(this);
}

PhysicalDevicePipelineRobustnessFeaturesEXT::operator const VkPhysicalDevicePipelineRobustnessFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDevicePipelineRobustnessFeaturesEXT *>(this);
}

PhysicalDevicePipelineRobustnessFeaturesEXT::operator VkPhysicalDevicePipelineRobustnessFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDevicePipelineRobustnessFeaturesEXT *>(this);
}

PhysicalDevicePipelineRobustnessFeaturesEXT::operator const VkPhysicalDevicePipelineRobustnessFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDevicePipelineRobustnessFeaturesEXT *>(this);
}

PhysicalDevicePipelineRobustnessFeaturesEXT::operator VkPhysicalDevicePipelineRobustnessFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDevicePipelineRobustnessFeaturesEXT *>(this);
}

PipelineRobustnessCreateInfoEXT::operator const VkPipelineRobustnessCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkPipelineRobustnessCreateInfoEXT *>(this);
}

PipelineRobustnessCreateInfoEXT::operator VkPipelineRobustnessCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkPipelineRobustnessCreateInfoEXT *>(this);
}

PipelineRobustnessCreateInfoEXT::operator const VkPipelineRobustnessCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkPipelineRobustnessCreateInfoEXT *>(this);
}

PipelineRobustnessCreateInfoEXT::operator VkPipelineRobustnessCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkPipelineRobustnessCreateInfoEXT *>(this);
}

PhysicalDevicePipelineRobustnessPropertiesEXT::operator const VkPhysicalDevicePipelineRobustnessPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDevicePipelineRobustnessPropertiesEXT *>(this);
}

PhysicalDevicePipelineRobustnessPropertiesEXT::operator VkPhysicalDevicePipelineRobustnessPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDevicePipelineRobustnessPropertiesEXT *>(this);
}

PhysicalDevicePipelineRobustnessPropertiesEXT::operator const VkPhysicalDevicePipelineRobustnessPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDevicePipelineRobustnessPropertiesEXT *>(this);
}

PhysicalDevicePipelineRobustnessPropertiesEXT::operator VkPhysicalDevicePipelineRobustnessPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDevicePipelineRobustnessPropertiesEXT *>(this);
}

ImageViewSampleWeightCreateInfoQCOM::operator const VkImageViewSampleWeightCreateInfoQCOM &() const noexcept {
  return *reinterpret_cast<const VkImageViewSampleWeightCreateInfoQCOM *>(this);
}

ImageViewSampleWeightCreateInfoQCOM::operator VkImageViewSampleWeightCreateInfoQCOM &() noexcept {
  return *reinterpret_cast<VkImageViewSampleWeightCreateInfoQCOM *>(this);
}

ImageViewSampleWeightCreateInfoQCOM::operator const VkImageViewSampleWeightCreateInfoQCOM *() const noexcept {
  return reinterpret_cast<const VkImageViewSampleWeightCreateInfoQCOM *>(this);
}

ImageViewSampleWeightCreateInfoQCOM::operator VkImageViewSampleWeightCreateInfoQCOM *() noexcept {
  return reinterpret_cast<VkImageViewSampleWeightCreateInfoQCOM *>(this);
}

PhysicalDeviceImageProcessingFeaturesQCOM::operator const VkPhysicalDeviceImageProcessingFeaturesQCOM &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceImageProcessingFeaturesQCOM *>(this);
}

PhysicalDeviceImageProcessingFeaturesQCOM::operator VkPhysicalDeviceImageProcessingFeaturesQCOM &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceImageProcessingFeaturesQCOM *>(this);
}

PhysicalDeviceImageProcessingFeaturesQCOM::operator const VkPhysicalDeviceImageProcessingFeaturesQCOM *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceImageProcessingFeaturesQCOM *>(this);
}

PhysicalDeviceImageProcessingFeaturesQCOM::operator VkPhysicalDeviceImageProcessingFeaturesQCOM *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceImageProcessingFeaturesQCOM *>(this);
}

PhysicalDeviceImageProcessingPropertiesQCOM::operator const VkPhysicalDeviceImageProcessingPropertiesQCOM &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceImageProcessingPropertiesQCOM *>(this);
}

PhysicalDeviceImageProcessingPropertiesQCOM::operator VkPhysicalDeviceImageProcessingPropertiesQCOM &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceImageProcessingPropertiesQCOM *>(this);
}

PhysicalDeviceImageProcessingPropertiesQCOM::operator const VkPhysicalDeviceImageProcessingPropertiesQCOM *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceImageProcessingPropertiesQCOM *>(this);
}

PhysicalDeviceImageProcessingPropertiesQCOM::operator VkPhysicalDeviceImageProcessingPropertiesQCOM *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceImageProcessingPropertiesQCOM *>(this);
}

PhysicalDeviceTilePropertiesFeaturesQCOM::operator const VkPhysicalDeviceTilePropertiesFeaturesQCOM &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceTilePropertiesFeaturesQCOM *>(this);
}

PhysicalDeviceTilePropertiesFeaturesQCOM::operator VkPhysicalDeviceTilePropertiesFeaturesQCOM &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceTilePropertiesFeaturesQCOM *>(this);
}

PhysicalDeviceTilePropertiesFeaturesQCOM::operator const VkPhysicalDeviceTilePropertiesFeaturesQCOM *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceTilePropertiesFeaturesQCOM *>(this);
}

PhysicalDeviceTilePropertiesFeaturesQCOM::operator VkPhysicalDeviceTilePropertiesFeaturesQCOM *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceTilePropertiesFeaturesQCOM *>(this);
}

TilePropertiesQCOM::operator const VkTilePropertiesQCOM &() const noexcept {
  return *reinterpret_cast<const VkTilePropertiesQCOM *>(this);
}

TilePropertiesQCOM::operator VkTilePropertiesQCOM &() noexcept {
  return *reinterpret_cast<VkTilePropertiesQCOM *>(this);
}

TilePropertiesQCOM::operator const VkTilePropertiesQCOM *() const noexcept {
  return reinterpret_cast<const VkTilePropertiesQCOM *>(this);
}

TilePropertiesQCOM::operator VkTilePropertiesQCOM *() noexcept {
  return reinterpret_cast<VkTilePropertiesQCOM *>(this);
}

PhysicalDeviceAmigoProfilingFeaturesSEC::operator const VkPhysicalDeviceAmigoProfilingFeaturesSEC &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceAmigoProfilingFeaturesSEC *>(this);
}

PhysicalDeviceAmigoProfilingFeaturesSEC::operator VkPhysicalDeviceAmigoProfilingFeaturesSEC &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceAmigoProfilingFeaturesSEC *>(this);
}

PhysicalDeviceAmigoProfilingFeaturesSEC::operator const VkPhysicalDeviceAmigoProfilingFeaturesSEC *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceAmigoProfilingFeaturesSEC *>(this);
}

PhysicalDeviceAmigoProfilingFeaturesSEC::operator VkPhysicalDeviceAmigoProfilingFeaturesSEC *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceAmigoProfilingFeaturesSEC *>(this);
}

AmigoProfilingSubmitInfoSEC::operator const VkAmigoProfilingSubmitInfoSEC &() const noexcept {
  return *reinterpret_cast<const VkAmigoProfilingSubmitInfoSEC *>(this);
}

AmigoProfilingSubmitInfoSEC::operator VkAmigoProfilingSubmitInfoSEC &() noexcept {
  return *reinterpret_cast<VkAmigoProfilingSubmitInfoSEC *>(this);
}

AmigoProfilingSubmitInfoSEC::operator const VkAmigoProfilingSubmitInfoSEC *() const noexcept {
  return reinterpret_cast<const VkAmigoProfilingSubmitInfoSEC *>(this);
}

AmigoProfilingSubmitInfoSEC::operator VkAmigoProfilingSubmitInfoSEC *() noexcept {
  return reinterpret_cast<VkAmigoProfilingSubmitInfoSEC *>(this);
}

PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT::operator const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *>(this);
}

PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT::operator VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *>(this);
}

PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT::operator const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *>(this);
}

PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT::operator VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *>(this);
}

PhysicalDeviceDepthClampZeroOneFeaturesEXT::operator const VkPhysicalDeviceDepthClampZeroOneFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDepthClampZeroOneFeaturesEXT *>(this);
}

PhysicalDeviceDepthClampZeroOneFeaturesEXT::operator VkPhysicalDeviceDepthClampZeroOneFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDepthClampZeroOneFeaturesEXT *>(this);
}

PhysicalDeviceDepthClampZeroOneFeaturesEXT::operator const VkPhysicalDeviceDepthClampZeroOneFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDepthClampZeroOneFeaturesEXT *>(this);
}

PhysicalDeviceDepthClampZeroOneFeaturesEXT::operator VkPhysicalDeviceDepthClampZeroOneFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDepthClampZeroOneFeaturesEXT *>(this);
}

PhysicalDeviceAddressBindingReportFeaturesEXT::operator const VkPhysicalDeviceAddressBindingReportFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceAddressBindingReportFeaturesEXT *>(this);
}

PhysicalDeviceAddressBindingReportFeaturesEXT::operator VkPhysicalDeviceAddressBindingReportFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceAddressBindingReportFeaturesEXT *>(this);
}

PhysicalDeviceAddressBindingReportFeaturesEXT::operator const VkPhysicalDeviceAddressBindingReportFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceAddressBindingReportFeaturesEXT *>(this);
}

PhysicalDeviceAddressBindingReportFeaturesEXT::operator VkPhysicalDeviceAddressBindingReportFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceAddressBindingReportFeaturesEXT *>(this);
}

DeviceAddressBindingCallbackDataEXT::operator const VkDeviceAddressBindingCallbackDataEXT &() const noexcept {
  return *reinterpret_cast<const VkDeviceAddressBindingCallbackDataEXT *>(this);
}

DeviceAddressBindingCallbackDataEXT::operator VkDeviceAddressBindingCallbackDataEXT &() noexcept {
  return *reinterpret_cast<VkDeviceAddressBindingCallbackDataEXT *>(this);
}

DeviceAddressBindingCallbackDataEXT::operator const VkDeviceAddressBindingCallbackDataEXT *() const noexcept {
  return reinterpret_cast<const VkDeviceAddressBindingCallbackDataEXT *>(this);
}

DeviceAddressBindingCallbackDataEXT::operator VkDeviceAddressBindingCallbackDataEXT *() noexcept {
  return reinterpret_cast<VkDeviceAddressBindingCallbackDataEXT *>(this);
}

PhysicalDeviceOpticalFlowFeaturesNV::operator const VkPhysicalDeviceOpticalFlowFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceOpticalFlowFeaturesNV *>(this);
}

PhysicalDeviceOpticalFlowFeaturesNV::operator VkPhysicalDeviceOpticalFlowFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceOpticalFlowFeaturesNV *>(this);
}

PhysicalDeviceOpticalFlowFeaturesNV::operator const VkPhysicalDeviceOpticalFlowFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceOpticalFlowFeaturesNV *>(this);
}

PhysicalDeviceOpticalFlowFeaturesNV::operator VkPhysicalDeviceOpticalFlowFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceOpticalFlowFeaturesNV *>(this);
}

PhysicalDeviceOpticalFlowPropertiesNV::operator const VkPhysicalDeviceOpticalFlowPropertiesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceOpticalFlowPropertiesNV *>(this);
}

PhysicalDeviceOpticalFlowPropertiesNV::operator VkPhysicalDeviceOpticalFlowPropertiesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceOpticalFlowPropertiesNV *>(this);
}

PhysicalDeviceOpticalFlowPropertiesNV::operator const VkPhysicalDeviceOpticalFlowPropertiesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceOpticalFlowPropertiesNV *>(this);
}

PhysicalDeviceOpticalFlowPropertiesNV::operator VkPhysicalDeviceOpticalFlowPropertiesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceOpticalFlowPropertiesNV *>(this);
}

OpticalFlowImageFormatInfoNV::operator const VkOpticalFlowImageFormatInfoNV &() const noexcept {
  return *reinterpret_cast<const VkOpticalFlowImageFormatInfoNV *>(this);
}

OpticalFlowImageFormatInfoNV::operator VkOpticalFlowImageFormatInfoNV &() noexcept {
  return *reinterpret_cast<VkOpticalFlowImageFormatInfoNV *>(this);
}

OpticalFlowImageFormatInfoNV::operator const VkOpticalFlowImageFormatInfoNV *() const noexcept {
  return reinterpret_cast<const VkOpticalFlowImageFormatInfoNV *>(this);
}

OpticalFlowImageFormatInfoNV::operator VkOpticalFlowImageFormatInfoNV *() noexcept {
  return reinterpret_cast<VkOpticalFlowImageFormatInfoNV *>(this);
}

OpticalFlowImageFormatPropertiesNV::operator const VkOpticalFlowImageFormatPropertiesNV &() const noexcept {
  return *reinterpret_cast<const VkOpticalFlowImageFormatPropertiesNV *>(this);
}

OpticalFlowImageFormatPropertiesNV::operator VkOpticalFlowImageFormatPropertiesNV &() noexcept {
  return *reinterpret_cast<VkOpticalFlowImageFormatPropertiesNV *>(this);
}

OpticalFlowImageFormatPropertiesNV::operator const VkOpticalFlowImageFormatPropertiesNV *() const noexcept {
  return reinterpret_cast<const VkOpticalFlowImageFormatPropertiesNV *>(this);
}

OpticalFlowImageFormatPropertiesNV::operator VkOpticalFlowImageFormatPropertiesNV *() noexcept {
  return reinterpret_cast<VkOpticalFlowImageFormatPropertiesNV *>(this);
}

OpticalFlowSessionCreateInfoNV::operator const VkOpticalFlowSessionCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkOpticalFlowSessionCreateInfoNV *>(this);
}

OpticalFlowSessionCreateInfoNV::operator VkOpticalFlowSessionCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkOpticalFlowSessionCreateInfoNV *>(this);
}

OpticalFlowSessionCreateInfoNV::operator const VkOpticalFlowSessionCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkOpticalFlowSessionCreateInfoNV *>(this);
}

OpticalFlowSessionCreateInfoNV::operator VkOpticalFlowSessionCreateInfoNV *() noexcept {
  return reinterpret_cast<VkOpticalFlowSessionCreateInfoNV *>(this);
}

OpticalFlowSessionCreatePrivateDataInfoNV::operator const VkOpticalFlowSessionCreatePrivateDataInfoNV &() const noexcept {
  return *reinterpret_cast<const VkOpticalFlowSessionCreatePrivateDataInfoNV *>(this);
}

OpticalFlowSessionCreatePrivateDataInfoNV::operator VkOpticalFlowSessionCreatePrivateDataInfoNV &() noexcept {
  return *reinterpret_cast<VkOpticalFlowSessionCreatePrivateDataInfoNV *>(this);
}

OpticalFlowSessionCreatePrivateDataInfoNV::operator const VkOpticalFlowSessionCreatePrivateDataInfoNV *() const noexcept {
  return reinterpret_cast<const VkOpticalFlowSessionCreatePrivateDataInfoNV *>(this);
}

OpticalFlowSessionCreatePrivateDataInfoNV::operator VkOpticalFlowSessionCreatePrivateDataInfoNV *() noexcept {
  return reinterpret_cast<VkOpticalFlowSessionCreatePrivateDataInfoNV *>(this);
}

OpticalFlowExecuteInfoNV::operator const VkOpticalFlowExecuteInfoNV &() const noexcept {
  return *reinterpret_cast<const VkOpticalFlowExecuteInfoNV *>(this);
}

OpticalFlowExecuteInfoNV::operator VkOpticalFlowExecuteInfoNV &() noexcept {
  return *reinterpret_cast<VkOpticalFlowExecuteInfoNV *>(this);
}

OpticalFlowExecuteInfoNV::operator const VkOpticalFlowExecuteInfoNV *() const noexcept {
  return reinterpret_cast<const VkOpticalFlowExecuteInfoNV *>(this);
}

OpticalFlowExecuteInfoNV::operator VkOpticalFlowExecuteInfoNV *() noexcept {
  return reinterpret_cast<VkOpticalFlowExecuteInfoNV *>(this);
}

PhysicalDeviceFaultFeaturesEXT::operator const VkPhysicalDeviceFaultFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceFaultFeaturesEXT *>(this);
}

PhysicalDeviceFaultFeaturesEXT::operator VkPhysicalDeviceFaultFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceFaultFeaturesEXT *>(this);
}

PhysicalDeviceFaultFeaturesEXT::operator const VkPhysicalDeviceFaultFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceFaultFeaturesEXT *>(this);
}

PhysicalDeviceFaultFeaturesEXT::operator VkPhysicalDeviceFaultFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceFaultFeaturesEXT *>(this);
}

DeviceFaultAddressInfoEXT::operator const VkDeviceFaultAddressInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkDeviceFaultAddressInfoEXT *>(this);
}

DeviceFaultAddressInfoEXT::operator VkDeviceFaultAddressInfoEXT &() noexcept {
  return *reinterpret_cast<VkDeviceFaultAddressInfoEXT *>(this);
}

DeviceFaultAddressInfoEXT::operator const VkDeviceFaultAddressInfoEXT *() const noexcept {
  return reinterpret_cast<const VkDeviceFaultAddressInfoEXT *>(this);
}

DeviceFaultAddressInfoEXT::operator VkDeviceFaultAddressInfoEXT *() noexcept {
  return reinterpret_cast<VkDeviceFaultAddressInfoEXT *>(this);
}

DeviceFaultVendorInfoEXT::operator const VkDeviceFaultVendorInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkDeviceFaultVendorInfoEXT *>(this);
}

DeviceFaultVendorInfoEXT::operator VkDeviceFaultVendorInfoEXT &() noexcept {
  return *reinterpret_cast<VkDeviceFaultVendorInfoEXT *>(this);
}

DeviceFaultVendorInfoEXT::operator const VkDeviceFaultVendorInfoEXT *() const noexcept {
  return reinterpret_cast<const VkDeviceFaultVendorInfoEXT *>(this);
}

DeviceFaultVendorInfoEXT::operator VkDeviceFaultVendorInfoEXT *() noexcept {
  return reinterpret_cast<VkDeviceFaultVendorInfoEXT *>(this);
}

DeviceFaultCountsEXT::operator const VkDeviceFaultCountsEXT &() const noexcept {
  return *reinterpret_cast<const VkDeviceFaultCountsEXT *>(this);
}

DeviceFaultCountsEXT::operator VkDeviceFaultCountsEXT &() noexcept {
  return *reinterpret_cast<VkDeviceFaultCountsEXT *>(this);
}

DeviceFaultCountsEXT::operator const VkDeviceFaultCountsEXT *() const noexcept {
  return reinterpret_cast<const VkDeviceFaultCountsEXT *>(this);
}

DeviceFaultCountsEXT::operator VkDeviceFaultCountsEXT *() noexcept {
  return reinterpret_cast<VkDeviceFaultCountsEXT *>(this);
}

DeviceFaultInfoEXT::operator const VkDeviceFaultInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkDeviceFaultInfoEXT *>(this);
}

DeviceFaultInfoEXT::operator VkDeviceFaultInfoEXT &() noexcept {
  return *reinterpret_cast<VkDeviceFaultInfoEXT *>(this);
}

DeviceFaultInfoEXT::operator const VkDeviceFaultInfoEXT *() const noexcept {
  return reinterpret_cast<const VkDeviceFaultInfoEXT *>(this);
}

DeviceFaultInfoEXT::operator VkDeviceFaultInfoEXT *() noexcept {
  return reinterpret_cast<VkDeviceFaultInfoEXT *>(this);
}

DeviceFaultVendorBinaryHeaderVersionOneEXT::operator const VkDeviceFaultVendorBinaryHeaderVersionOneEXT &() const noexcept {
  return *reinterpret_cast<const VkDeviceFaultVendorBinaryHeaderVersionOneEXT *>(this);
}

DeviceFaultVendorBinaryHeaderVersionOneEXT::operator VkDeviceFaultVendorBinaryHeaderVersionOneEXT &() noexcept {
  return *reinterpret_cast<VkDeviceFaultVendorBinaryHeaderVersionOneEXT *>(this);
}

DeviceFaultVendorBinaryHeaderVersionOneEXT::operator const VkDeviceFaultVendorBinaryHeaderVersionOneEXT *() const noexcept {
  return reinterpret_cast<const VkDeviceFaultVendorBinaryHeaderVersionOneEXT *>(this);
}

DeviceFaultVendorBinaryHeaderVersionOneEXT::operator VkDeviceFaultVendorBinaryHeaderVersionOneEXT *() noexcept {
  return reinterpret_cast<VkDeviceFaultVendorBinaryHeaderVersionOneEXT *>(this);
}

PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT::operator const VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT *>(this);
}

PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT::operator VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT *>(this);
}

PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT::operator const VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT *>(this);
}

PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT::operator VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT *>(this);
}

DepthBiasInfoEXT::operator const VkDepthBiasInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkDepthBiasInfoEXT *>(this);
}

DepthBiasInfoEXT::operator VkDepthBiasInfoEXT &() noexcept {
  return *reinterpret_cast<VkDepthBiasInfoEXT *>(this);
}

DepthBiasInfoEXT::operator const VkDepthBiasInfoEXT *() const noexcept {
  return reinterpret_cast<const VkDepthBiasInfoEXT *>(this);
}

DepthBiasInfoEXT::operator VkDepthBiasInfoEXT *() noexcept {
  return reinterpret_cast<VkDepthBiasInfoEXT *>(this);
}

DepthBiasRepresentationInfoEXT::operator const VkDepthBiasRepresentationInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkDepthBiasRepresentationInfoEXT *>(this);
}

DepthBiasRepresentationInfoEXT::operator VkDepthBiasRepresentationInfoEXT &() noexcept {
  return *reinterpret_cast<VkDepthBiasRepresentationInfoEXT *>(this);
}

DepthBiasRepresentationInfoEXT::operator const VkDepthBiasRepresentationInfoEXT *() const noexcept {
  return reinterpret_cast<const VkDepthBiasRepresentationInfoEXT *>(this);
}

DepthBiasRepresentationInfoEXT::operator VkDepthBiasRepresentationInfoEXT *() noexcept {
  return reinterpret_cast<VkDepthBiasRepresentationInfoEXT *>(this);
}

DecompressMemoryRegionNV::operator const VkDecompressMemoryRegionNV &() const noexcept {
  return *reinterpret_cast<const VkDecompressMemoryRegionNV *>(this);
}

DecompressMemoryRegionNV::operator VkDecompressMemoryRegionNV &() noexcept {
  return *reinterpret_cast<VkDecompressMemoryRegionNV *>(this);
}

DecompressMemoryRegionNV::operator const VkDecompressMemoryRegionNV *() const noexcept {
  return reinterpret_cast<const VkDecompressMemoryRegionNV *>(this);
}

DecompressMemoryRegionNV::operator VkDecompressMemoryRegionNV *() noexcept {
  return reinterpret_cast<VkDecompressMemoryRegionNV *>(this);
}

PhysicalDeviceShaderCoreBuiltinsPropertiesARM::operator const VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM *>(this);
}

PhysicalDeviceShaderCoreBuiltinsPropertiesARM::operator VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM *>(this);
}

PhysicalDeviceShaderCoreBuiltinsPropertiesARM::operator const VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM *>(this);
}

PhysicalDeviceShaderCoreBuiltinsPropertiesARM::operator VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM *>(this);
}

PhysicalDeviceShaderCoreBuiltinsFeaturesARM::operator const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *>(this);
}

PhysicalDeviceShaderCoreBuiltinsFeaturesARM::operator VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *>(this);
}

PhysicalDeviceShaderCoreBuiltinsFeaturesARM::operator const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *>(this);
}

PhysicalDeviceShaderCoreBuiltinsFeaturesARM::operator VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *>(this);
}

FrameBoundaryEXT::operator const VkFrameBoundaryEXT &() const noexcept {
  return *reinterpret_cast<const VkFrameBoundaryEXT *>(this);
}

FrameBoundaryEXT::operator VkFrameBoundaryEXT &() noexcept {
  return *reinterpret_cast<VkFrameBoundaryEXT *>(this);
}

FrameBoundaryEXT::operator const VkFrameBoundaryEXT *() const noexcept {
  return reinterpret_cast<const VkFrameBoundaryEXT *>(this);
}

FrameBoundaryEXT::operator VkFrameBoundaryEXT *() noexcept {
  return reinterpret_cast<VkFrameBoundaryEXT *>(this);
}

PhysicalDeviceFrameBoundaryFeaturesEXT::operator const VkPhysicalDeviceFrameBoundaryFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceFrameBoundaryFeaturesEXT *>(this);
}

PhysicalDeviceFrameBoundaryFeaturesEXT::operator VkPhysicalDeviceFrameBoundaryFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceFrameBoundaryFeaturesEXT *>(this);
}

PhysicalDeviceFrameBoundaryFeaturesEXT::operator const VkPhysicalDeviceFrameBoundaryFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceFrameBoundaryFeaturesEXT *>(this);
}

PhysicalDeviceFrameBoundaryFeaturesEXT::operator VkPhysicalDeviceFrameBoundaryFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceFrameBoundaryFeaturesEXT *>(this);
}

PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT::operator const VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT *>(this);
}

PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT::
operator VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT *>(this);
}

PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT::operator const VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT *>(this);
}

PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT::
operator VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT *>(this);
}

SurfacePresentModeEXT::operator const VkSurfacePresentModeEXT &() const noexcept {
  return *reinterpret_cast<const VkSurfacePresentModeEXT *>(this);
}

SurfacePresentModeEXT::operator VkSurfacePresentModeEXT &() noexcept {
  return *reinterpret_cast<VkSurfacePresentModeEXT *>(this);
}

SurfacePresentModeEXT::operator const VkSurfacePresentModeEXT *() const noexcept {
  return reinterpret_cast<const VkSurfacePresentModeEXT *>(this);
}

SurfacePresentModeEXT::operator VkSurfacePresentModeEXT *() noexcept {
  return reinterpret_cast<VkSurfacePresentModeEXT *>(this);
}

SurfacePresentScalingCapabilitiesEXT::operator const VkSurfacePresentScalingCapabilitiesEXT &() const noexcept {
  return *reinterpret_cast<const VkSurfacePresentScalingCapabilitiesEXT *>(this);
}

SurfacePresentScalingCapabilitiesEXT::operator VkSurfacePresentScalingCapabilitiesEXT &() noexcept {
  return *reinterpret_cast<VkSurfacePresentScalingCapabilitiesEXT *>(this);
}

SurfacePresentScalingCapabilitiesEXT::operator const VkSurfacePresentScalingCapabilitiesEXT *() const noexcept {
  return reinterpret_cast<const VkSurfacePresentScalingCapabilitiesEXT *>(this);
}

SurfacePresentScalingCapabilitiesEXT::operator VkSurfacePresentScalingCapabilitiesEXT *() noexcept {
  return reinterpret_cast<VkSurfacePresentScalingCapabilitiesEXT *>(this);
}

SurfacePresentModeCompatibilityEXT::operator const VkSurfacePresentModeCompatibilityEXT &() const noexcept {
  return *reinterpret_cast<const VkSurfacePresentModeCompatibilityEXT *>(this);
}

SurfacePresentModeCompatibilityEXT::operator VkSurfacePresentModeCompatibilityEXT &() noexcept {
  return *reinterpret_cast<VkSurfacePresentModeCompatibilityEXT *>(this);
}

SurfacePresentModeCompatibilityEXT::operator const VkSurfacePresentModeCompatibilityEXT *() const noexcept {
  return reinterpret_cast<const VkSurfacePresentModeCompatibilityEXT *>(this);
}

SurfacePresentModeCompatibilityEXT::operator VkSurfacePresentModeCompatibilityEXT *() noexcept {
  return reinterpret_cast<VkSurfacePresentModeCompatibilityEXT *>(this);
}

PhysicalDeviceSwapchainMaintenance1FeaturesEXT::operator const VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT *>(this);
}

PhysicalDeviceSwapchainMaintenance1FeaturesEXT::operator VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT *>(this);
}

PhysicalDeviceSwapchainMaintenance1FeaturesEXT::operator const VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT *>(this);
}

PhysicalDeviceSwapchainMaintenance1FeaturesEXT::operator VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT *>(this);
}

SwapchainPresentFenceInfoEXT::operator const VkSwapchainPresentFenceInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkSwapchainPresentFenceInfoEXT *>(this);
}

SwapchainPresentFenceInfoEXT::operator VkSwapchainPresentFenceInfoEXT &() noexcept {
  return *reinterpret_cast<VkSwapchainPresentFenceInfoEXT *>(this);
}

SwapchainPresentFenceInfoEXT::operator const VkSwapchainPresentFenceInfoEXT *() const noexcept {
  return reinterpret_cast<const VkSwapchainPresentFenceInfoEXT *>(this);
}

SwapchainPresentFenceInfoEXT::operator VkSwapchainPresentFenceInfoEXT *() noexcept {
  return reinterpret_cast<VkSwapchainPresentFenceInfoEXT *>(this);
}

SwapchainPresentModesCreateInfoEXT::operator const VkSwapchainPresentModesCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkSwapchainPresentModesCreateInfoEXT *>(this);
}

SwapchainPresentModesCreateInfoEXT::operator VkSwapchainPresentModesCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkSwapchainPresentModesCreateInfoEXT *>(this);
}

SwapchainPresentModesCreateInfoEXT::operator const VkSwapchainPresentModesCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkSwapchainPresentModesCreateInfoEXT *>(this);
}

SwapchainPresentModesCreateInfoEXT::operator VkSwapchainPresentModesCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkSwapchainPresentModesCreateInfoEXT *>(this);
}

SwapchainPresentModeInfoEXT::operator const VkSwapchainPresentModeInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkSwapchainPresentModeInfoEXT *>(this);
}

SwapchainPresentModeInfoEXT::operator VkSwapchainPresentModeInfoEXT &() noexcept {
  return *reinterpret_cast<VkSwapchainPresentModeInfoEXT *>(this);
}

SwapchainPresentModeInfoEXT::operator const VkSwapchainPresentModeInfoEXT *() const noexcept {
  return reinterpret_cast<const VkSwapchainPresentModeInfoEXT *>(this);
}

SwapchainPresentModeInfoEXT::operator VkSwapchainPresentModeInfoEXT *() noexcept {
  return reinterpret_cast<VkSwapchainPresentModeInfoEXT *>(this);
}

SwapchainPresentScalingCreateInfoEXT::operator const VkSwapchainPresentScalingCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkSwapchainPresentScalingCreateInfoEXT *>(this);
}

SwapchainPresentScalingCreateInfoEXT::operator VkSwapchainPresentScalingCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkSwapchainPresentScalingCreateInfoEXT *>(this);
}

SwapchainPresentScalingCreateInfoEXT::operator const VkSwapchainPresentScalingCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkSwapchainPresentScalingCreateInfoEXT *>(this);
}

SwapchainPresentScalingCreateInfoEXT::operator VkSwapchainPresentScalingCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkSwapchainPresentScalingCreateInfoEXT *>(this);
}

ReleaseSwapchainImagesInfoEXT::operator const VkReleaseSwapchainImagesInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkReleaseSwapchainImagesInfoEXT *>(this);
}

ReleaseSwapchainImagesInfoEXT::operator VkReleaseSwapchainImagesInfoEXT &() noexcept {
  return *reinterpret_cast<VkReleaseSwapchainImagesInfoEXT *>(this);
}

ReleaseSwapchainImagesInfoEXT::operator const VkReleaseSwapchainImagesInfoEXT *() const noexcept {
  return reinterpret_cast<const VkReleaseSwapchainImagesInfoEXT *>(this);
}

ReleaseSwapchainImagesInfoEXT::operator VkReleaseSwapchainImagesInfoEXT *() noexcept {
  return reinterpret_cast<VkReleaseSwapchainImagesInfoEXT *>(this);
}

PhysicalDeviceDepthBiasControlFeaturesEXT::operator const VkPhysicalDeviceDepthBiasControlFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDepthBiasControlFeaturesEXT *>(this);
}

PhysicalDeviceDepthBiasControlFeaturesEXT::operator VkPhysicalDeviceDepthBiasControlFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDepthBiasControlFeaturesEXT *>(this);
}

PhysicalDeviceDepthBiasControlFeaturesEXT::operator const VkPhysicalDeviceDepthBiasControlFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDepthBiasControlFeaturesEXT *>(this);
}

PhysicalDeviceDepthBiasControlFeaturesEXT::operator VkPhysicalDeviceDepthBiasControlFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDepthBiasControlFeaturesEXT *>(this);
}

PhysicalDeviceRayTracingInvocationReorderFeaturesNV::operator const VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *>(this);
}

PhysicalDeviceRayTracingInvocationReorderFeaturesNV::operator VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *>(this);
}

PhysicalDeviceRayTracingInvocationReorderFeaturesNV::operator const VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *>(this);
}

PhysicalDeviceRayTracingInvocationReorderFeaturesNV::operator VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *>(this);
}

PhysicalDeviceRayTracingInvocationReorderPropertiesNV::operator const VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV *>(this);
}

PhysicalDeviceRayTracingInvocationReorderPropertiesNV::operator VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV *>(this);
}

PhysicalDeviceRayTracingInvocationReorderPropertiesNV::operator const VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV *>(this);
}

PhysicalDeviceRayTracingInvocationReorderPropertiesNV::operator VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV *>(this);
}

PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV::operator const VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV *>(this);
}

PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV::operator VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV *>(this);
}

PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV::operator const VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV *>(this);
}

PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV::operator VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV *>(this);
}

PhysicalDeviceExtendedSparseAddressSpacePropertiesNV::operator const VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV *>(this);
}

PhysicalDeviceExtendedSparseAddressSpacePropertiesNV::operator VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV *>(this);
}

PhysicalDeviceExtendedSparseAddressSpacePropertiesNV::operator const VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV *>(this);
}

PhysicalDeviceExtendedSparseAddressSpacePropertiesNV::operator VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV *>(this);
}

DirectDriverLoadingInfoLUNARG::operator const VkDirectDriverLoadingInfoLUNARG &() const noexcept {
  return *reinterpret_cast<const VkDirectDriverLoadingInfoLUNARG *>(this);
}

DirectDriverLoadingInfoLUNARG::operator VkDirectDriverLoadingInfoLUNARG &() noexcept {
  return *reinterpret_cast<VkDirectDriverLoadingInfoLUNARG *>(this);
}

DirectDriverLoadingInfoLUNARG::operator const VkDirectDriverLoadingInfoLUNARG *() const noexcept {
  return reinterpret_cast<const VkDirectDriverLoadingInfoLUNARG *>(this);
}

DirectDriverLoadingInfoLUNARG::operator VkDirectDriverLoadingInfoLUNARG *() noexcept {
  return reinterpret_cast<VkDirectDriverLoadingInfoLUNARG *>(this);
}

DirectDriverLoadingListLUNARG::operator const VkDirectDriverLoadingListLUNARG &() const noexcept {
  return *reinterpret_cast<const VkDirectDriverLoadingListLUNARG *>(this);
}

DirectDriverLoadingListLUNARG::operator VkDirectDriverLoadingListLUNARG &() noexcept {
  return *reinterpret_cast<VkDirectDriverLoadingListLUNARG *>(this);
}

DirectDriverLoadingListLUNARG::operator const VkDirectDriverLoadingListLUNARG *() const noexcept {
  return reinterpret_cast<const VkDirectDriverLoadingListLUNARG *>(this);
}

DirectDriverLoadingListLUNARG::operator VkDirectDriverLoadingListLUNARG *() noexcept {
  return reinterpret_cast<VkDirectDriverLoadingListLUNARG *>(this);
}

PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM::operator const VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM *>(this);
}

PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM::operator VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM *>(this);
}

PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM::operator const VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM *>(this);
}

PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM::operator VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM *>(this);
}

PhysicalDeviceRayTracingPositionFetchFeaturesKHR::operator const VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR *>(this);
}

PhysicalDeviceRayTracingPositionFetchFeaturesKHR::operator VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR *>(this);
}

PhysicalDeviceRayTracingPositionFetchFeaturesKHR::operator const VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR *>(this);
}

PhysicalDeviceRayTracingPositionFetchFeaturesKHR::operator VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR *>(this);
}

DeviceImageSubresourceInfoKHR::operator const VkDeviceImageSubresourceInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkDeviceImageSubresourceInfoKHR *>(this);
}

DeviceImageSubresourceInfoKHR::operator VkDeviceImageSubresourceInfoKHR &() noexcept {
  return *reinterpret_cast<VkDeviceImageSubresourceInfoKHR *>(this);
}

DeviceImageSubresourceInfoKHR::operator const VkDeviceImageSubresourceInfoKHR *() const noexcept {
  return reinterpret_cast<const VkDeviceImageSubresourceInfoKHR *>(this);
}

DeviceImageSubresourceInfoKHR::operator VkDeviceImageSubresourceInfoKHR *() noexcept {
  return reinterpret_cast<VkDeviceImageSubresourceInfoKHR *>(this);
}

PhysicalDeviceShaderCorePropertiesARM::operator const VkPhysicalDeviceShaderCorePropertiesARM &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderCorePropertiesARM *>(this);
}

PhysicalDeviceShaderCorePropertiesARM::operator VkPhysicalDeviceShaderCorePropertiesARM &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderCorePropertiesARM *>(this);
}

PhysicalDeviceShaderCorePropertiesARM::operator const VkPhysicalDeviceShaderCorePropertiesARM *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderCorePropertiesARM *>(this);
}

PhysicalDeviceShaderCorePropertiesARM::operator VkPhysicalDeviceShaderCorePropertiesARM *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderCorePropertiesARM *>(this);
}

PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM::operator const VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM *>(this);
}

PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM::operator VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM *>(this);
}

PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM::operator const VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM *>(this);
}

PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM::operator VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM *>(this);
}

MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM::operator const VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM &() const noexcept {
  return *reinterpret_cast<const VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM *>(this);
}

MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM::operator VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM &() noexcept {
  return *reinterpret_cast<VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM *>(this);
}

MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM::operator const VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM *() const noexcept {
  return reinterpret_cast<const VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM *>(this);
}

MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM::operator VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM *() noexcept {
  return reinterpret_cast<VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM *>(this);
}

QueryLowLatencySupportNV::operator const VkQueryLowLatencySupportNV &() const noexcept {
  return *reinterpret_cast<const VkQueryLowLatencySupportNV *>(this);
}

QueryLowLatencySupportNV::operator VkQueryLowLatencySupportNV &() noexcept {
  return *reinterpret_cast<VkQueryLowLatencySupportNV *>(this);
}

QueryLowLatencySupportNV::operator const VkQueryLowLatencySupportNV *() const noexcept {
  return reinterpret_cast<const VkQueryLowLatencySupportNV *>(this);
}

QueryLowLatencySupportNV::operator VkQueryLowLatencySupportNV *() noexcept {
  return reinterpret_cast<VkQueryLowLatencySupportNV *>(this);
}

MemoryMapInfoKHR::operator const VkMemoryMapInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkMemoryMapInfoKHR *>(this);
}

MemoryMapInfoKHR::operator VkMemoryMapInfoKHR &() noexcept {
  return *reinterpret_cast<VkMemoryMapInfoKHR *>(this);
}

MemoryMapInfoKHR::operator const VkMemoryMapInfoKHR *() const noexcept {
  return reinterpret_cast<const VkMemoryMapInfoKHR *>(this);
}

MemoryMapInfoKHR::operator VkMemoryMapInfoKHR *() noexcept {
  return reinterpret_cast<VkMemoryMapInfoKHR *>(this);
}

MemoryUnmapInfoKHR::operator const VkMemoryUnmapInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkMemoryUnmapInfoKHR *>(this);
}

MemoryUnmapInfoKHR::operator VkMemoryUnmapInfoKHR &() noexcept {
  return *reinterpret_cast<VkMemoryUnmapInfoKHR *>(this);
}

MemoryUnmapInfoKHR::operator const VkMemoryUnmapInfoKHR *() const noexcept {
  return reinterpret_cast<const VkMemoryUnmapInfoKHR *>(this);
}

MemoryUnmapInfoKHR::operator VkMemoryUnmapInfoKHR *() noexcept {
  return reinterpret_cast<VkMemoryUnmapInfoKHR *>(this);
}

PhysicalDeviceShaderObjectFeaturesEXT::operator const VkPhysicalDeviceShaderObjectFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderObjectFeaturesEXT *>(this);
}

PhysicalDeviceShaderObjectFeaturesEXT::operator VkPhysicalDeviceShaderObjectFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderObjectFeaturesEXT *>(this);
}

PhysicalDeviceShaderObjectFeaturesEXT::operator const VkPhysicalDeviceShaderObjectFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderObjectFeaturesEXT *>(this);
}

PhysicalDeviceShaderObjectFeaturesEXT::operator VkPhysicalDeviceShaderObjectFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderObjectFeaturesEXT *>(this);
}

PhysicalDeviceShaderObjectPropertiesEXT::operator const VkPhysicalDeviceShaderObjectPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderObjectPropertiesEXT *>(this);
}

PhysicalDeviceShaderObjectPropertiesEXT::operator VkPhysicalDeviceShaderObjectPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderObjectPropertiesEXT *>(this);
}

PhysicalDeviceShaderObjectPropertiesEXT::operator const VkPhysicalDeviceShaderObjectPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderObjectPropertiesEXT *>(this);
}

PhysicalDeviceShaderObjectPropertiesEXT::operator VkPhysicalDeviceShaderObjectPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderObjectPropertiesEXT *>(this);
}

ShaderCreateInfoEXT::operator const VkShaderCreateInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkShaderCreateInfoEXT *>(this);
}

ShaderCreateInfoEXT::operator VkShaderCreateInfoEXT &() noexcept {
  return *reinterpret_cast<VkShaderCreateInfoEXT *>(this);
}

ShaderCreateInfoEXT::operator const VkShaderCreateInfoEXT *() const noexcept {
  return reinterpret_cast<const VkShaderCreateInfoEXT *>(this);
}

ShaderCreateInfoEXT::operator VkShaderCreateInfoEXT *() noexcept {
  return reinterpret_cast<VkShaderCreateInfoEXT *>(this);
}

PhysicalDeviceShaderTileImageFeaturesEXT::operator const VkPhysicalDeviceShaderTileImageFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderTileImageFeaturesEXT *>(this);
}

PhysicalDeviceShaderTileImageFeaturesEXT::operator VkPhysicalDeviceShaderTileImageFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderTileImageFeaturesEXT *>(this);
}

PhysicalDeviceShaderTileImageFeaturesEXT::operator const VkPhysicalDeviceShaderTileImageFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderTileImageFeaturesEXT *>(this);
}

PhysicalDeviceShaderTileImageFeaturesEXT::operator VkPhysicalDeviceShaderTileImageFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderTileImageFeaturesEXT *>(this);
}

PhysicalDeviceShaderTileImagePropertiesEXT::operator const VkPhysicalDeviceShaderTileImagePropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderTileImagePropertiesEXT *>(this);
}

PhysicalDeviceShaderTileImagePropertiesEXT::operator VkPhysicalDeviceShaderTileImagePropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderTileImagePropertiesEXT *>(this);
}

PhysicalDeviceShaderTileImagePropertiesEXT::operator const VkPhysicalDeviceShaderTileImagePropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderTileImagePropertiesEXT *>(this);
}

PhysicalDeviceShaderTileImagePropertiesEXT::operator VkPhysicalDeviceShaderTileImagePropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderTileImagePropertiesEXT *>(this);
}

PhysicalDeviceCooperativeMatrixFeaturesKHR::operator const VkPhysicalDeviceCooperativeMatrixFeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixFeaturesKHR *>(this);
}

PhysicalDeviceCooperativeMatrixFeaturesKHR::operator VkPhysicalDeviceCooperativeMatrixFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceCooperativeMatrixFeaturesKHR *>(this);
}

PhysicalDeviceCooperativeMatrixFeaturesKHR::operator const VkPhysicalDeviceCooperativeMatrixFeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixFeaturesKHR *>(this);
}

PhysicalDeviceCooperativeMatrixFeaturesKHR::operator VkPhysicalDeviceCooperativeMatrixFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceCooperativeMatrixFeaturesKHR *>(this);
}

CooperativeMatrixPropertiesKHR::operator const VkCooperativeMatrixPropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkCooperativeMatrixPropertiesKHR *>(this);
}

CooperativeMatrixPropertiesKHR::operator VkCooperativeMatrixPropertiesKHR &() noexcept {
  return *reinterpret_cast<VkCooperativeMatrixPropertiesKHR *>(this);
}

CooperativeMatrixPropertiesKHR::operator const VkCooperativeMatrixPropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkCooperativeMatrixPropertiesKHR *>(this);
}

CooperativeMatrixPropertiesKHR::operator VkCooperativeMatrixPropertiesKHR *() noexcept {
  return reinterpret_cast<VkCooperativeMatrixPropertiesKHR *>(this);
}

PhysicalDeviceCooperativeMatrixPropertiesKHR::operator const VkPhysicalDeviceCooperativeMatrixPropertiesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixPropertiesKHR *>(this);
}

PhysicalDeviceCooperativeMatrixPropertiesKHR::operator VkPhysicalDeviceCooperativeMatrixPropertiesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceCooperativeMatrixPropertiesKHR *>(this);
}

PhysicalDeviceCooperativeMatrixPropertiesKHR::operator const VkPhysicalDeviceCooperativeMatrixPropertiesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceCooperativeMatrixPropertiesKHR *>(this);
}

PhysicalDeviceCooperativeMatrixPropertiesKHR::operator VkPhysicalDeviceCooperativeMatrixPropertiesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceCooperativeMatrixPropertiesKHR *>(this);
}

BindMemoryStatusKHR::operator const VkBindMemoryStatusKHR &() const noexcept {
  return *reinterpret_cast<const VkBindMemoryStatusKHR *>(this);
}

BindMemoryStatusKHR::operator VkBindMemoryStatusKHR &() noexcept {
  return *reinterpret_cast<VkBindMemoryStatusKHR *>(this);
}

BindMemoryStatusKHR::operator const VkBindMemoryStatusKHR *() const noexcept {
  return reinterpret_cast<const VkBindMemoryStatusKHR *>(this);
}

BindMemoryStatusKHR::operator VkBindMemoryStatusKHR *() noexcept {
  return reinterpret_cast<VkBindMemoryStatusKHR *>(this);
}

BindDescriptorSetsInfoKHR::operator const VkBindDescriptorSetsInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkBindDescriptorSetsInfoKHR *>(this);
}

BindDescriptorSetsInfoKHR::operator VkBindDescriptorSetsInfoKHR &() noexcept {
  return *reinterpret_cast<VkBindDescriptorSetsInfoKHR *>(this);
}

BindDescriptorSetsInfoKHR::operator const VkBindDescriptorSetsInfoKHR *() const noexcept {
  return reinterpret_cast<const VkBindDescriptorSetsInfoKHR *>(this);
}

BindDescriptorSetsInfoKHR::operator VkBindDescriptorSetsInfoKHR *() noexcept {
  return reinterpret_cast<VkBindDescriptorSetsInfoKHR *>(this);
}

PushConstantsInfoKHR::operator const VkPushConstantsInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkPushConstantsInfoKHR *>(this);
}

PushConstantsInfoKHR::operator VkPushConstantsInfoKHR &() noexcept {
  return *reinterpret_cast<VkPushConstantsInfoKHR *>(this);
}

PushConstantsInfoKHR::operator const VkPushConstantsInfoKHR *() const noexcept {
  return reinterpret_cast<const VkPushConstantsInfoKHR *>(this);
}

PushConstantsInfoKHR::operator VkPushConstantsInfoKHR *() noexcept {
  return reinterpret_cast<VkPushConstantsInfoKHR *>(this);
}

PushDescriptorSetInfoKHR::operator const VkPushDescriptorSetInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkPushDescriptorSetInfoKHR *>(this);
}

PushDescriptorSetInfoKHR::operator VkPushDescriptorSetInfoKHR &() noexcept {
  return *reinterpret_cast<VkPushDescriptorSetInfoKHR *>(this);
}

PushDescriptorSetInfoKHR::operator const VkPushDescriptorSetInfoKHR *() const noexcept {
  return reinterpret_cast<const VkPushDescriptorSetInfoKHR *>(this);
}

PushDescriptorSetInfoKHR::operator VkPushDescriptorSetInfoKHR *() noexcept {
  return reinterpret_cast<VkPushDescriptorSetInfoKHR *>(this);
}

PushDescriptorSetWithTemplateInfoKHR::operator const VkPushDescriptorSetWithTemplateInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkPushDescriptorSetWithTemplateInfoKHR *>(this);
}

PushDescriptorSetWithTemplateInfoKHR::operator VkPushDescriptorSetWithTemplateInfoKHR &() noexcept {
  return *reinterpret_cast<VkPushDescriptorSetWithTemplateInfoKHR *>(this);
}

PushDescriptorSetWithTemplateInfoKHR::operator const VkPushDescriptorSetWithTemplateInfoKHR *() const noexcept {
  return reinterpret_cast<const VkPushDescriptorSetWithTemplateInfoKHR *>(this);
}

PushDescriptorSetWithTemplateInfoKHR::operator VkPushDescriptorSetWithTemplateInfoKHR *() noexcept {
  return reinterpret_cast<VkPushDescriptorSetWithTemplateInfoKHR *>(this);
}

SetDescriptorBufferOffsetsInfoEXT::operator const VkSetDescriptorBufferOffsetsInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkSetDescriptorBufferOffsetsInfoEXT *>(this);
}

SetDescriptorBufferOffsetsInfoEXT::operator VkSetDescriptorBufferOffsetsInfoEXT &() noexcept {
  return *reinterpret_cast<VkSetDescriptorBufferOffsetsInfoEXT *>(this);
}

SetDescriptorBufferOffsetsInfoEXT::operator const VkSetDescriptorBufferOffsetsInfoEXT *() const noexcept {
  return reinterpret_cast<const VkSetDescriptorBufferOffsetsInfoEXT *>(this);
}

SetDescriptorBufferOffsetsInfoEXT::operator VkSetDescriptorBufferOffsetsInfoEXT *() noexcept {
  return reinterpret_cast<VkSetDescriptorBufferOffsetsInfoEXT *>(this);
}

BindDescriptorBufferEmbeddedSamplersInfoEXT::operator const VkBindDescriptorBufferEmbeddedSamplersInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkBindDescriptorBufferEmbeddedSamplersInfoEXT *>(this);
}

BindDescriptorBufferEmbeddedSamplersInfoEXT::operator VkBindDescriptorBufferEmbeddedSamplersInfoEXT &() noexcept {
  return *reinterpret_cast<VkBindDescriptorBufferEmbeddedSamplersInfoEXT *>(this);
}

BindDescriptorBufferEmbeddedSamplersInfoEXT::operator const VkBindDescriptorBufferEmbeddedSamplersInfoEXT *() const noexcept {
  return reinterpret_cast<const VkBindDescriptorBufferEmbeddedSamplersInfoEXT *>(this);
}

BindDescriptorBufferEmbeddedSamplersInfoEXT::operator VkBindDescriptorBufferEmbeddedSamplersInfoEXT *() noexcept {
  return reinterpret_cast<VkBindDescriptorBufferEmbeddedSamplersInfoEXT *>(this);
}

PhysicalDeviceCubicClampFeaturesQCOM::operator const VkPhysicalDeviceCubicClampFeaturesQCOM &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceCubicClampFeaturesQCOM *>(this);
}

PhysicalDeviceCubicClampFeaturesQCOM::operator VkPhysicalDeviceCubicClampFeaturesQCOM &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceCubicClampFeaturesQCOM *>(this);
}

PhysicalDeviceCubicClampFeaturesQCOM::operator const VkPhysicalDeviceCubicClampFeaturesQCOM *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceCubicClampFeaturesQCOM *>(this);
}

PhysicalDeviceCubicClampFeaturesQCOM::operator VkPhysicalDeviceCubicClampFeaturesQCOM *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceCubicClampFeaturesQCOM *>(this);
}

PhysicalDeviceYcbcrDegammaFeaturesQCOM::operator const VkPhysicalDeviceYcbcrDegammaFeaturesQCOM &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceYcbcrDegammaFeaturesQCOM *>(this);
}

PhysicalDeviceYcbcrDegammaFeaturesQCOM::operator VkPhysicalDeviceYcbcrDegammaFeaturesQCOM &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceYcbcrDegammaFeaturesQCOM *>(this);
}

PhysicalDeviceYcbcrDegammaFeaturesQCOM::operator const VkPhysicalDeviceYcbcrDegammaFeaturesQCOM *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceYcbcrDegammaFeaturesQCOM *>(this);
}

PhysicalDeviceYcbcrDegammaFeaturesQCOM::operator VkPhysicalDeviceYcbcrDegammaFeaturesQCOM *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceYcbcrDegammaFeaturesQCOM *>(this);
}

SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM::operator const VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM &() const noexcept {
  return *reinterpret_cast<const VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM *>(this);
}

SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM::operator VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM &() noexcept {
  return *reinterpret_cast<VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM *>(this);
}

SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM::operator const VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM *() const noexcept {
  return reinterpret_cast<const VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM *>(this);
}

SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM::operator VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM *() noexcept {
  return reinterpret_cast<VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM *>(this);
}

PhysicalDeviceCubicWeightsFeaturesQCOM::operator const VkPhysicalDeviceCubicWeightsFeaturesQCOM &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceCubicWeightsFeaturesQCOM *>(this);
}

PhysicalDeviceCubicWeightsFeaturesQCOM::operator VkPhysicalDeviceCubicWeightsFeaturesQCOM &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceCubicWeightsFeaturesQCOM *>(this);
}

PhysicalDeviceCubicWeightsFeaturesQCOM::operator const VkPhysicalDeviceCubicWeightsFeaturesQCOM *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceCubicWeightsFeaturesQCOM *>(this);
}

PhysicalDeviceCubicWeightsFeaturesQCOM::operator VkPhysicalDeviceCubicWeightsFeaturesQCOM *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceCubicWeightsFeaturesQCOM *>(this);
}

SamplerCubicWeightsCreateInfoQCOM::operator const VkSamplerCubicWeightsCreateInfoQCOM &() const noexcept {
  return *reinterpret_cast<const VkSamplerCubicWeightsCreateInfoQCOM *>(this);
}

SamplerCubicWeightsCreateInfoQCOM::operator VkSamplerCubicWeightsCreateInfoQCOM &() noexcept {
  return *reinterpret_cast<VkSamplerCubicWeightsCreateInfoQCOM *>(this);
}

SamplerCubicWeightsCreateInfoQCOM::operator const VkSamplerCubicWeightsCreateInfoQCOM *() const noexcept {
  return reinterpret_cast<const VkSamplerCubicWeightsCreateInfoQCOM *>(this);
}

SamplerCubicWeightsCreateInfoQCOM::operator VkSamplerCubicWeightsCreateInfoQCOM *() noexcept {
  return reinterpret_cast<VkSamplerCubicWeightsCreateInfoQCOM *>(this);
}

BlitImageCubicWeightsInfoQCOM::operator const VkBlitImageCubicWeightsInfoQCOM &() const noexcept {
  return *reinterpret_cast<const VkBlitImageCubicWeightsInfoQCOM *>(this);
}

BlitImageCubicWeightsInfoQCOM::operator VkBlitImageCubicWeightsInfoQCOM &() noexcept {
  return *reinterpret_cast<VkBlitImageCubicWeightsInfoQCOM *>(this);
}

BlitImageCubicWeightsInfoQCOM::operator const VkBlitImageCubicWeightsInfoQCOM *() const noexcept {
  return reinterpret_cast<const VkBlitImageCubicWeightsInfoQCOM *>(this);
}

BlitImageCubicWeightsInfoQCOM::operator VkBlitImageCubicWeightsInfoQCOM *() noexcept {
  return reinterpret_cast<VkBlitImageCubicWeightsInfoQCOM *>(this);
}

PhysicalDeviceImageProcessing2FeaturesQCOM::operator const VkPhysicalDeviceImageProcessing2FeaturesQCOM &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceImageProcessing2FeaturesQCOM *>(this);
}

PhysicalDeviceImageProcessing2FeaturesQCOM::operator VkPhysicalDeviceImageProcessing2FeaturesQCOM &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceImageProcessing2FeaturesQCOM *>(this);
}

PhysicalDeviceImageProcessing2FeaturesQCOM::operator const VkPhysicalDeviceImageProcessing2FeaturesQCOM *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceImageProcessing2FeaturesQCOM *>(this);
}

PhysicalDeviceImageProcessing2FeaturesQCOM::operator VkPhysicalDeviceImageProcessing2FeaturesQCOM *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceImageProcessing2FeaturesQCOM *>(this);
}

PhysicalDeviceImageProcessing2PropertiesQCOM::operator const VkPhysicalDeviceImageProcessing2PropertiesQCOM &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceImageProcessing2PropertiesQCOM *>(this);
}

PhysicalDeviceImageProcessing2PropertiesQCOM::operator VkPhysicalDeviceImageProcessing2PropertiesQCOM &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceImageProcessing2PropertiesQCOM *>(this);
}

PhysicalDeviceImageProcessing2PropertiesQCOM::operator const VkPhysicalDeviceImageProcessing2PropertiesQCOM *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceImageProcessing2PropertiesQCOM *>(this);
}

PhysicalDeviceImageProcessing2PropertiesQCOM::operator VkPhysicalDeviceImageProcessing2PropertiesQCOM *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceImageProcessing2PropertiesQCOM *>(this);
}

SamplerBlockMatchWindowCreateInfoQCOM::operator const VkSamplerBlockMatchWindowCreateInfoQCOM &() const noexcept {
  return *reinterpret_cast<const VkSamplerBlockMatchWindowCreateInfoQCOM *>(this);
}

SamplerBlockMatchWindowCreateInfoQCOM::operator VkSamplerBlockMatchWindowCreateInfoQCOM &() noexcept {
  return *reinterpret_cast<VkSamplerBlockMatchWindowCreateInfoQCOM *>(this);
}

SamplerBlockMatchWindowCreateInfoQCOM::operator const VkSamplerBlockMatchWindowCreateInfoQCOM *() const noexcept {
  return reinterpret_cast<const VkSamplerBlockMatchWindowCreateInfoQCOM *>(this);
}

SamplerBlockMatchWindowCreateInfoQCOM::operator VkSamplerBlockMatchWindowCreateInfoQCOM *() noexcept {
  return reinterpret_cast<VkSamplerBlockMatchWindowCreateInfoQCOM *>(this);
}

PhysicalDeviceDescriptorPoolOverallocationFeaturesNV::operator const VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV *>(this);
}

PhysicalDeviceDescriptorPoolOverallocationFeaturesNV::operator VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV *>(this);
}

PhysicalDeviceDescriptorPoolOverallocationFeaturesNV::operator const VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV *>(this);
}

PhysicalDeviceDescriptorPoolOverallocationFeaturesNV::operator VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV *>(this);
}

PhysicalDeviceLayeredDriverPropertiesMSFT::operator const VkPhysicalDeviceLayeredDriverPropertiesMSFT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceLayeredDriverPropertiesMSFT *>(this);
}

PhysicalDeviceLayeredDriverPropertiesMSFT::operator VkPhysicalDeviceLayeredDriverPropertiesMSFT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceLayeredDriverPropertiesMSFT *>(this);
}

PhysicalDeviceLayeredDriverPropertiesMSFT::operator const VkPhysicalDeviceLayeredDriverPropertiesMSFT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceLayeredDriverPropertiesMSFT *>(this);
}

PhysicalDeviceLayeredDriverPropertiesMSFT::operator VkPhysicalDeviceLayeredDriverPropertiesMSFT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceLayeredDriverPropertiesMSFT *>(this);
}

PhysicalDevicePerStageDescriptorSetFeaturesNV::operator const VkPhysicalDevicePerStageDescriptorSetFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDevicePerStageDescriptorSetFeaturesNV *>(this);
}

PhysicalDevicePerStageDescriptorSetFeaturesNV::operator VkPhysicalDevicePerStageDescriptorSetFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDevicePerStageDescriptorSetFeaturesNV *>(this);
}

PhysicalDevicePerStageDescriptorSetFeaturesNV::operator const VkPhysicalDevicePerStageDescriptorSetFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDevicePerStageDescriptorSetFeaturesNV *>(this);
}

PhysicalDevicePerStageDescriptorSetFeaturesNV::operator VkPhysicalDevicePerStageDescriptorSetFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDevicePerStageDescriptorSetFeaturesNV *>(this);
}

LatencySleepModeInfoNV::operator const VkLatencySleepModeInfoNV &() const noexcept {
  return *reinterpret_cast<const VkLatencySleepModeInfoNV *>(this);
}

LatencySleepModeInfoNV::operator VkLatencySleepModeInfoNV &() noexcept {
  return *reinterpret_cast<VkLatencySleepModeInfoNV *>(this);
}

LatencySleepModeInfoNV::operator const VkLatencySleepModeInfoNV *() const noexcept {
  return reinterpret_cast<const VkLatencySleepModeInfoNV *>(this);
}

LatencySleepModeInfoNV::operator VkLatencySleepModeInfoNV *() noexcept {
  return reinterpret_cast<VkLatencySleepModeInfoNV *>(this);
}

LatencySleepInfoNV::operator const VkLatencySleepInfoNV &() const noexcept {
  return *reinterpret_cast<const VkLatencySleepInfoNV *>(this);
}

LatencySleepInfoNV::operator VkLatencySleepInfoNV &() noexcept {
  return *reinterpret_cast<VkLatencySleepInfoNV *>(this);
}

LatencySleepInfoNV::operator const VkLatencySleepInfoNV *() const noexcept {
  return reinterpret_cast<const VkLatencySleepInfoNV *>(this);
}

LatencySleepInfoNV::operator VkLatencySleepInfoNV *() noexcept {
  return reinterpret_cast<VkLatencySleepInfoNV *>(this);
}

SetLatencyMarkerInfoNV::operator const VkSetLatencyMarkerInfoNV &() const noexcept {
  return *reinterpret_cast<const VkSetLatencyMarkerInfoNV *>(this);
}

SetLatencyMarkerInfoNV::operator VkSetLatencyMarkerInfoNV &() noexcept {
  return *reinterpret_cast<VkSetLatencyMarkerInfoNV *>(this);
}

SetLatencyMarkerInfoNV::operator const VkSetLatencyMarkerInfoNV *() const noexcept {
  return reinterpret_cast<const VkSetLatencyMarkerInfoNV *>(this);
}

SetLatencyMarkerInfoNV::operator VkSetLatencyMarkerInfoNV *() noexcept {
  return reinterpret_cast<VkSetLatencyMarkerInfoNV *>(this);
}

LatencyTimingsFrameReportNV::operator const VkLatencyTimingsFrameReportNV &() const noexcept {
  return *reinterpret_cast<const VkLatencyTimingsFrameReportNV *>(this);
}

LatencyTimingsFrameReportNV::operator VkLatencyTimingsFrameReportNV &() noexcept {
  return *reinterpret_cast<VkLatencyTimingsFrameReportNV *>(this);
}

LatencyTimingsFrameReportNV::operator const VkLatencyTimingsFrameReportNV *() const noexcept {
  return reinterpret_cast<const VkLatencyTimingsFrameReportNV *>(this);
}

LatencyTimingsFrameReportNV::operator VkLatencyTimingsFrameReportNV *() noexcept {
  return reinterpret_cast<VkLatencyTimingsFrameReportNV *>(this);
}

GetLatencyMarkerInfoNV::operator const VkGetLatencyMarkerInfoNV &() const noexcept {
  return *reinterpret_cast<const VkGetLatencyMarkerInfoNV *>(this);
}

GetLatencyMarkerInfoNV::operator VkGetLatencyMarkerInfoNV &() noexcept {
  return *reinterpret_cast<VkGetLatencyMarkerInfoNV *>(this);
}

GetLatencyMarkerInfoNV::operator const VkGetLatencyMarkerInfoNV *() const noexcept {
  return reinterpret_cast<const VkGetLatencyMarkerInfoNV *>(this);
}

GetLatencyMarkerInfoNV::operator VkGetLatencyMarkerInfoNV *() noexcept {
  return reinterpret_cast<VkGetLatencyMarkerInfoNV *>(this);
}

OutOfBandQueueTypeInfoNV::operator const VkOutOfBandQueueTypeInfoNV &() const noexcept {
  return *reinterpret_cast<const VkOutOfBandQueueTypeInfoNV *>(this);
}

OutOfBandQueueTypeInfoNV::operator VkOutOfBandQueueTypeInfoNV &() noexcept {
  return *reinterpret_cast<VkOutOfBandQueueTypeInfoNV *>(this);
}

OutOfBandQueueTypeInfoNV::operator const VkOutOfBandQueueTypeInfoNV *() const noexcept {
  return reinterpret_cast<const VkOutOfBandQueueTypeInfoNV *>(this);
}

OutOfBandQueueTypeInfoNV::operator VkOutOfBandQueueTypeInfoNV *() noexcept {
  return reinterpret_cast<VkOutOfBandQueueTypeInfoNV *>(this);
}

LatencySubmissionPresentIdNV::operator const VkLatencySubmissionPresentIdNV &() const noexcept {
  return *reinterpret_cast<const VkLatencySubmissionPresentIdNV *>(this);
}

LatencySubmissionPresentIdNV::operator VkLatencySubmissionPresentIdNV &() noexcept {
  return *reinterpret_cast<VkLatencySubmissionPresentIdNV *>(this);
}

LatencySubmissionPresentIdNV::operator const VkLatencySubmissionPresentIdNV *() const noexcept {
  return reinterpret_cast<const VkLatencySubmissionPresentIdNV *>(this);
}

LatencySubmissionPresentIdNV::operator VkLatencySubmissionPresentIdNV *() noexcept {
  return reinterpret_cast<VkLatencySubmissionPresentIdNV *>(this);
}

SwapchainLatencyCreateInfoNV::operator const VkSwapchainLatencyCreateInfoNV &() const noexcept {
  return *reinterpret_cast<const VkSwapchainLatencyCreateInfoNV *>(this);
}

SwapchainLatencyCreateInfoNV::operator VkSwapchainLatencyCreateInfoNV &() noexcept {
  return *reinterpret_cast<VkSwapchainLatencyCreateInfoNV *>(this);
}

SwapchainLatencyCreateInfoNV::operator const VkSwapchainLatencyCreateInfoNV *() const noexcept {
  return reinterpret_cast<const VkSwapchainLatencyCreateInfoNV *>(this);
}

SwapchainLatencyCreateInfoNV::operator VkSwapchainLatencyCreateInfoNV *() noexcept {
  return reinterpret_cast<VkSwapchainLatencyCreateInfoNV *>(this);
}

LatencySurfaceCapabilitiesNV::operator const VkLatencySurfaceCapabilitiesNV &() const noexcept {
  return *reinterpret_cast<const VkLatencySurfaceCapabilitiesNV *>(this);
}

LatencySurfaceCapabilitiesNV::operator VkLatencySurfaceCapabilitiesNV &() noexcept {
  return *reinterpret_cast<VkLatencySurfaceCapabilitiesNV *>(this);
}

LatencySurfaceCapabilitiesNV::operator const VkLatencySurfaceCapabilitiesNV *() const noexcept {
  return reinterpret_cast<const VkLatencySurfaceCapabilitiesNV *>(this);
}

LatencySurfaceCapabilitiesNV::operator VkLatencySurfaceCapabilitiesNV *() noexcept {
  return reinterpret_cast<VkLatencySurfaceCapabilitiesNV *>(this);
}

PhysicalDeviceCudaKernelLaunchFeaturesNV::operator const VkPhysicalDeviceCudaKernelLaunchFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceCudaKernelLaunchFeaturesNV *>(this);
}

PhysicalDeviceCudaKernelLaunchFeaturesNV::operator VkPhysicalDeviceCudaKernelLaunchFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceCudaKernelLaunchFeaturesNV *>(this);
}

PhysicalDeviceCudaKernelLaunchFeaturesNV::operator const VkPhysicalDeviceCudaKernelLaunchFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceCudaKernelLaunchFeaturesNV *>(this);
}

PhysicalDeviceCudaKernelLaunchFeaturesNV::operator VkPhysicalDeviceCudaKernelLaunchFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceCudaKernelLaunchFeaturesNV *>(this);
}

PhysicalDeviceCudaKernelLaunchPropertiesNV::operator const VkPhysicalDeviceCudaKernelLaunchPropertiesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceCudaKernelLaunchPropertiesNV *>(this);
}

PhysicalDeviceCudaKernelLaunchPropertiesNV::operator VkPhysicalDeviceCudaKernelLaunchPropertiesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceCudaKernelLaunchPropertiesNV *>(this);
}

PhysicalDeviceCudaKernelLaunchPropertiesNV::operator const VkPhysicalDeviceCudaKernelLaunchPropertiesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceCudaKernelLaunchPropertiesNV *>(this);
}

PhysicalDeviceCudaKernelLaunchPropertiesNV::operator VkPhysicalDeviceCudaKernelLaunchPropertiesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceCudaKernelLaunchPropertiesNV *>(this);
}

DeviceQueueShaderCoreControlCreateInfoARM::operator const VkDeviceQueueShaderCoreControlCreateInfoARM &() const noexcept {
  return *reinterpret_cast<const VkDeviceQueueShaderCoreControlCreateInfoARM *>(this);
}

DeviceQueueShaderCoreControlCreateInfoARM::operator VkDeviceQueueShaderCoreControlCreateInfoARM &() noexcept {
  return *reinterpret_cast<VkDeviceQueueShaderCoreControlCreateInfoARM *>(this);
}

DeviceQueueShaderCoreControlCreateInfoARM::operator const VkDeviceQueueShaderCoreControlCreateInfoARM *() const noexcept {
  return reinterpret_cast<const VkDeviceQueueShaderCoreControlCreateInfoARM *>(this);
}

DeviceQueueShaderCoreControlCreateInfoARM::operator VkDeviceQueueShaderCoreControlCreateInfoARM *() noexcept {
  return reinterpret_cast<VkDeviceQueueShaderCoreControlCreateInfoARM *>(this);
}

PhysicalDeviceSchedulingControlsFeaturesARM::operator const VkPhysicalDeviceSchedulingControlsFeaturesARM &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceSchedulingControlsFeaturesARM *>(this);
}

PhysicalDeviceSchedulingControlsFeaturesARM::operator VkPhysicalDeviceSchedulingControlsFeaturesARM &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceSchedulingControlsFeaturesARM *>(this);
}

PhysicalDeviceSchedulingControlsFeaturesARM::operator const VkPhysicalDeviceSchedulingControlsFeaturesARM *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceSchedulingControlsFeaturesARM *>(this);
}

PhysicalDeviceSchedulingControlsFeaturesARM::operator VkPhysicalDeviceSchedulingControlsFeaturesARM *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceSchedulingControlsFeaturesARM *>(this);
}

PhysicalDeviceSchedulingControlsPropertiesARM::operator const VkPhysicalDeviceSchedulingControlsPropertiesARM &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceSchedulingControlsPropertiesARM *>(this);
}

PhysicalDeviceSchedulingControlsPropertiesARM::operator VkPhysicalDeviceSchedulingControlsPropertiesARM &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceSchedulingControlsPropertiesARM *>(this);
}

PhysicalDeviceSchedulingControlsPropertiesARM::operator const VkPhysicalDeviceSchedulingControlsPropertiesARM *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceSchedulingControlsPropertiesARM *>(this);
}

PhysicalDeviceSchedulingControlsPropertiesARM::operator VkPhysicalDeviceSchedulingControlsPropertiesARM *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceSchedulingControlsPropertiesARM *>(this);
}

PhysicalDeviceRelaxedLineRasterizationFeaturesIMG::operator const VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG *>(this);
}

PhysicalDeviceRelaxedLineRasterizationFeaturesIMG::operator VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG *>(this);
}

PhysicalDeviceRelaxedLineRasterizationFeaturesIMG::operator const VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG *>(this);
}

PhysicalDeviceRelaxedLineRasterizationFeaturesIMG::operator VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG *>(this);
}

PhysicalDeviceRenderPassStripedFeaturesARM::operator const VkPhysicalDeviceRenderPassStripedFeaturesARM &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceRenderPassStripedFeaturesARM *>(this);
}

PhysicalDeviceRenderPassStripedFeaturesARM::operator VkPhysicalDeviceRenderPassStripedFeaturesARM &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceRenderPassStripedFeaturesARM *>(this);
}

PhysicalDeviceRenderPassStripedFeaturesARM::operator const VkPhysicalDeviceRenderPassStripedFeaturesARM *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceRenderPassStripedFeaturesARM *>(this);
}

PhysicalDeviceRenderPassStripedFeaturesARM::operator VkPhysicalDeviceRenderPassStripedFeaturesARM *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceRenderPassStripedFeaturesARM *>(this);
}

PhysicalDeviceRenderPassStripedPropertiesARM::operator const VkPhysicalDeviceRenderPassStripedPropertiesARM &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceRenderPassStripedPropertiesARM *>(this);
}

PhysicalDeviceRenderPassStripedPropertiesARM::operator VkPhysicalDeviceRenderPassStripedPropertiesARM &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceRenderPassStripedPropertiesARM *>(this);
}

PhysicalDeviceRenderPassStripedPropertiesARM::operator const VkPhysicalDeviceRenderPassStripedPropertiesARM *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceRenderPassStripedPropertiesARM *>(this);
}

PhysicalDeviceRenderPassStripedPropertiesARM::operator VkPhysicalDeviceRenderPassStripedPropertiesARM *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceRenderPassStripedPropertiesARM *>(this);
}

RenderPassStripeInfoARM::operator const VkRenderPassStripeInfoARM &() const noexcept {
  return *reinterpret_cast<const VkRenderPassStripeInfoARM *>(this);
}

RenderPassStripeInfoARM::operator VkRenderPassStripeInfoARM &() noexcept {
  return *reinterpret_cast<VkRenderPassStripeInfoARM *>(this);
}

RenderPassStripeInfoARM::operator const VkRenderPassStripeInfoARM *() const noexcept {
  return reinterpret_cast<const VkRenderPassStripeInfoARM *>(this);
}

RenderPassStripeInfoARM::operator VkRenderPassStripeInfoARM *() noexcept {
  return reinterpret_cast<VkRenderPassStripeInfoARM *>(this);
}

RenderPassStripeBeginInfoARM::operator const VkRenderPassStripeBeginInfoARM &() const noexcept {
  return *reinterpret_cast<const VkRenderPassStripeBeginInfoARM *>(this);
}

RenderPassStripeBeginInfoARM::operator VkRenderPassStripeBeginInfoARM &() noexcept {
  return *reinterpret_cast<VkRenderPassStripeBeginInfoARM *>(this);
}

RenderPassStripeBeginInfoARM::operator const VkRenderPassStripeBeginInfoARM *() const noexcept {
  return reinterpret_cast<const VkRenderPassStripeBeginInfoARM *>(this);
}

RenderPassStripeBeginInfoARM::operator VkRenderPassStripeBeginInfoARM *() noexcept {
  return reinterpret_cast<VkRenderPassStripeBeginInfoARM *>(this);
}

RenderPassStripeSubmitInfoARM::operator const VkRenderPassStripeSubmitInfoARM &() const noexcept {
  return *reinterpret_cast<const VkRenderPassStripeSubmitInfoARM *>(this);
}

RenderPassStripeSubmitInfoARM::operator VkRenderPassStripeSubmitInfoARM &() noexcept {
  return *reinterpret_cast<VkRenderPassStripeSubmitInfoARM *>(this);
}

RenderPassStripeSubmitInfoARM::operator const VkRenderPassStripeSubmitInfoARM *() const noexcept {
  return reinterpret_cast<const VkRenderPassStripeSubmitInfoARM *>(this);
}

RenderPassStripeSubmitInfoARM::operator VkRenderPassStripeSubmitInfoARM *() noexcept {
  return reinterpret_cast<VkRenderPassStripeSubmitInfoARM *>(this);
}

PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR::operator const VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR *>(this);
}

PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR::operator VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR *>(this);
}

PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR::operator const VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR *>(this);
}

PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR::operator VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR *>(this);
}

PhysicalDeviceShaderSubgroupRotateFeaturesKHR::operator const VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR *>(this);
}

PhysicalDeviceShaderSubgroupRotateFeaturesKHR::operator VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR *>(this);
}

PhysicalDeviceShaderSubgroupRotateFeaturesKHR::operator const VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR *>(this);
}

PhysicalDeviceShaderSubgroupRotateFeaturesKHR::operator VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR *>(this);
}

PhysicalDeviceShaderExpectAssumeFeaturesKHR::operator const VkPhysicalDeviceShaderExpectAssumeFeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderExpectAssumeFeaturesKHR *>(this);
}

PhysicalDeviceShaderExpectAssumeFeaturesKHR::operator VkPhysicalDeviceShaderExpectAssumeFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderExpectAssumeFeaturesKHR *>(this);
}

PhysicalDeviceShaderExpectAssumeFeaturesKHR::operator const VkPhysicalDeviceShaderExpectAssumeFeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderExpectAssumeFeaturesKHR *>(this);
}

PhysicalDeviceShaderExpectAssumeFeaturesKHR::operator VkPhysicalDeviceShaderExpectAssumeFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderExpectAssumeFeaturesKHR *>(this);
}

PhysicalDeviceShaderFloatControls2FeaturesKHR::operator const VkPhysicalDeviceShaderFloatControls2FeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderFloatControls2FeaturesKHR *>(this);
}

PhysicalDeviceShaderFloatControls2FeaturesKHR::operator VkPhysicalDeviceShaderFloatControls2FeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderFloatControls2FeaturesKHR *>(this);
}

PhysicalDeviceShaderFloatControls2FeaturesKHR::operator const VkPhysicalDeviceShaderFloatControls2FeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderFloatControls2FeaturesKHR *>(this);
}

PhysicalDeviceShaderFloatControls2FeaturesKHR::operator VkPhysicalDeviceShaderFloatControls2FeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderFloatControls2FeaturesKHR *>(this);
}

PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR::operator const VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR *>(this);
}

PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR::operator VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR *>(this);
}

PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR::operator const VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR *>(this);
}

PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR::operator VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR *>(this);
}

RenderingAttachmentLocationInfoKHR::operator const VkRenderingAttachmentLocationInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkRenderingAttachmentLocationInfoKHR *>(this);
}

RenderingAttachmentLocationInfoKHR::operator VkRenderingAttachmentLocationInfoKHR &() noexcept {
  return *reinterpret_cast<VkRenderingAttachmentLocationInfoKHR *>(this);
}

RenderingAttachmentLocationInfoKHR::operator const VkRenderingAttachmentLocationInfoKHR *() const noexcept {
  return reinterpret_cast<const VkRenderingAttachmentLocationInfoKHR *>(this);
}

RenderingAttachmentLocationInfoKHR::operator VkRenderingAttachmentLocationInfoKHR *() noexcept {
  return reinterpret_cast<VkRenderingAttachmentLocationInfoKHR *>(this);
}

RenderingInputAttachmentIndexInfoKHR::operator const VkRenderingInputAttachmentIndexInfoKHR &() const noexcept {
  return *reinterpret_cast<const VkRenderingInputAttachmentIndexInfoKHR *>(this);
}

RenderingInputAttachmentIndexInfoKHR::operator VkRenderingInputAttachmentIndexInfoKHR &() noexcept {
  return *reinterpret_cast<VkRenderingInputAttachmentIndexInfoKHR *>(this);
}

RenderingInputAttachmentIndexInfoKHR::operator const VkRenderingInputAttachmentIndexInfoKHR *() const noexcept {
  return reinterpret_cast<const VkRenderingInputAttachmentIndexInfoKHR *>(this);
}

RenderingInputAttachmentIndexInfoKHR::operator VkRenderingInputAttachmentIndexInfoKHR *() noexcept {
  return reinterpret_cast<VkRenderingInputAttachmentIndexInfoKHR *>(this);
}

PhysicalDeviceShaderQuadControlFeaturesKHR::operator const VkPhysicalDeviceShaderQuadControlFeaturesKHR &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderQuadControlFeaturesKHR *>(this);
}

PhysicalDeviceShaderQuadControlFeaturesKHR::operator VkPhysicalDeviceShaderQuadControlFeaturesKHR &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderQuadControlFeaturesKHR *>(this);
}

PhysicalDeviceShaderQuadControlFeaturesKHR::operator const VkPhysicalDeviceShaderQuadControlFeaturesKHR *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderQuadControlFeaturesKHR *>(this);
}

PhysicalDeviceShaderQuadControlFeaturesKHR::operator VkPhysicalDeviceShaderQuadControlFeaturesKHR *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderQuadControlFeaturesKHR *>(this);
}

PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV::operator const VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV *>(this);
}

PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV::operator VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV *>(this);
}

PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV::operator const VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV *>(this);
}

PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV::operator VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV *>(this);
}

PhysicalDeviceMapMemoryPlacedFeaturesEXT::operator const VkPhysicalDeviceMapMemoryPlacedFeaturesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMapMemoryPlacedFeaturesEXT *>(this);
}

PhysicalDeviceMapMemoryPlacedFeaturesEXT::operator VkPhysicalDeviceMapMemoryPlacedFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMapMemoryPlacedFeaturesEXT *>(this);
}

PhysicalDeviceMapMemoryPlacedFeaturesEXT::operator const VkPhysicalDeviceMapMemoryPlacedFeaturesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMapMemoryPlacedFeaturesEXT *>(this);
}

PhysicalDeviceMapMemoryPlacedFeaturesEXT::operator VkPhysicalDeviceMapMemoryPlacedFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMapMemoryPlacedFeaturesEXT *>(this);
}

PhysicalDeviceMapMemoryPlacedPropertiesEXT::operator const VkPhysicalDeviceMapMemoryPlacedPropertiesEXT &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceMapMemoryPlacedPropertiesEXT *>(this);
}

PhysicalDeviceMapMemoryPlacedPropertiesEXT::operator VkPhysicalDeviceMapMemoryPlacedPropertiesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceMapMemoryPlacedPropertiesEXT *>(this);
}

PhysicalDeviceMapMemoryPlacedPropertiesEXT::operator const VkPhysicalDeviceMapMemoryPlacedPropertiesEXT *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceMapMemoryPlacedPropertiesEXT *>(this);
}

PhysicalDeviceMapMemoryPlacedPropertiesEXT::operator VkPhysicalDeviceMapMemoryPlacedPropertiesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceMapMemoryPlacedPropertiesEXT *>(this);
}

MemoryMapPlacedInfoEXT::operator const VkMemoryMapPlacedInfoEXT &() const noexcept {
  return *reinterpret_cast<const VkMemoryMapPlacedInfoEXT *>(this);
}

MemoryMapPlacedInfoEXT::operator VkMemoryMapPlacedInfoEXT &() noexcept {
  return *reinterpret_cast<VkMemoryMapPlacedInfoEXT *>(this);
}

MemoryMapPlacedInfoEXT::operator const VkMemoryMapPlacedInfoEXT *() const noexcept {
  return reinterpret_cast<const VkMemoryMapPlacedInfoEXT *>(this);
}

MemoryMapPlacedInfoEXT::operator VkMemoryMapPlacedInfoEXT *() noexcept {
  return reinterpret_cast<VkMemoryMapPlacedInfoEXT *>(this);
}

PhysicalDeviceRawAccessChainsFeaturesNV::operator const VkPhysicalDeviceRawAccessChainsFeaturesNV &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceRawAccessChainsFeaturesNV *>(this);
}

PhysicalDeviceRawAccessChainsFeaturesNV::operator VkPhysicalDeviceRawAccessChainsFeaturesNV &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceRawAccessChainsFeaturesNV *>(this);
}

PhysicalDeviceRawAccessChainsFeaturesNV::operator const VkPhysicalDeviceRawAccessChainsFeaturesNV *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceRawAccessChainsFeaturesNV *>(this);
}

PhysicalDeviceRawAccessChainsFeaturesNV::operator VkPhysicalDeviceRawAccessChainsFeaturesNV *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceRawAccessChainsFeaturesNV *>(this);
}

PhysicalDeviceImageAlignmentControlFeaturesMESA::operator const VkPhysicalDeviceImageAlignmentControlFeaturesMESA &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceImageAlignmentControlFeaturesMESA *>(this);
}

PhysicalDeviceImageAlignmentControlFeaturesMESA::operator VkPhysicalDeviceImageAlignmentControlFeaturesMESA &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceImageAlignmentControlFeaturesMESA *>(this);
}

PhysicalDeviceImageAlignmentControlFeaturesMESA::operator const VkPhysicalDeviceImageAlignmentControlFeaturesMESA *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceImageAlignmentControlFeaturesMESA *>(this);
}

PhysicalDeviceImageAlignmentControlFeaturesMESA::operator VkPhysicalDeviceImageAlignmentControlFeaturesMESA *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceImageAlignmentControlFeaturesMESA *>(this);
}

PhysicalDeviceImageAlignmentControlPropertiesMESA::operator const VkPhysicalDeviceImageAlignmentControlPropertiesMESA &() const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceImageAlignmentControlPropertiesMESA *>(this);
}

PhysicalDeviceImageAlignmentControlPropertiesMESA::operator VkPhysicalDeviceImageAlignmentControlPropertiesMESA &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceImageAlignmentControlPropertiesMESA *>(this);
}

PhysicalDeviceImageAlignmentControlPropertiesMESA::operator const VkPhysicalDeviceImageAlignmentControlPropertiesMESA *() const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceImageAlignmentControlPropertiesMESA *>(this);
}

PhysicalDeviceImageAlignmentControlPropertiesMESA::operator VkPhysicalDeviceImageAlignmentControlPropertiesMESA *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceImageAlignmentControlPropertiesMESA *>(this);
}

ImageAlignmentControlCreateInfoMESA::operator const VkImageAlignmentControlCreateInfoMESA &() const noexcept {
  return *reinterpret_cast<const VkImageAlignmentControlCreateInfoMESA *>(this);
}

ImageAlignmentControlCreateInfoMESA::operator VkImageAlignmentControlCreateInfoMESA &() noexcept {
  return *reinterpret_cast<VkImageAlignmentControlCreateInfoMESA *>(this);
}

ImageAlignmentControlCreateInfoMESA::operator const VkImageAlignmentControlCreateInfoMESA *() const noexcept {
  return reinterpret_cast<const VkImageAlignmentControlCreateInfoMESA *>(this);
}

ImageAlignmentControlCreateInfoMESA::operator VkImageAlignmentControlCreateInfoMESA *() noexcept {
  return reinterpret_cast<VkImageAlignmentControlCreateInfoMESA *>(this);
}

PhysicalDeviceShaderReplicatedCompositesFeaturesEXT::operator const VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT &()
  const noexcept {
  return *reinterpret_cast<const VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT *>(this);
}

PhysicalDeviceShaderReplicatedCompositesFeaturesEXT::operator VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT &() noexcept {
  return *reinterpret_cast<VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT *>(this);
}

PhysicalDeviceShaderReplicatedCompositesFeaturesEXT::operator const VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT *()
  const noexcept {
  return reinterpret_cast<const VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT *>(this);
}

PhysicalDeviceShaderReplicatedCompositesFeaturesEXT::operator VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT *() noexcept {
  return reinterpret_cast<VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT *>(this);
}

} // end namespace Wolf
