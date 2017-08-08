/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "VideoPropertyDefinitionResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

VideoPropertyDefinitionResource::VideoPropertyDefinitionResource()
{
    m_File_type = U("");
    m_File_typeIsSet = false;
    m_Max_height = 0;
    m_Max_heightIsSet = false;
    m_Max_length = 0;
    m_Max_lengthIsSet = false;
    m_Max_width = 0;
    m_Max_widthIsSet = false;
    m_Min_height = 0;
    m_Min_heightIsSet = false;
    m_Min_length = 0;
    m_Min_lengthIsSet = false;
    m_Min_width = 0;
    m_Min_widthIsSet = false;
}

VideoPropertyDefinitionResource::~VideoPropertyDefinitionResource()
{
}

void VideoPropertyDefinitionResource::validate()
{
    // TODO: implement validation
}

web::json::value VideoPropertyDefinitionResource::toJson() const
{
    web::json::value val = this->PropertyDefinitionResource::toJson();

    if(m_File_typeIsSet)
    {
        val[U("file_type")] = ModelBase::toJson(m_File_type);
    }
    if(m_Max_heightIsSet)
    {
        val[U("max_height")] = ModelBase::toJson(m_Max_height);
    }
    if(m_Max_lengthIsSet)
    {
        val[U("max_length")] = ModelBase::toJson(m_Max_length);
    }
    if(m_Max_widthIsSet)
    {
        val[U("max_width")] = ModelBase::toJson(m_Max_width);
    }
    if(m_Min_heightIsSet)
    {
        val[U("min_height")] = ModelBase::toJson(m_Min_height);
    }
    if(m_Min_lengthIsSet)
    {
        val[U("min_length")] = ModelBase::toJson(m_Min_length);
    }
    if(m_Min_widthIsSet)
    {
        val[U("min_width")] = ModelBase::toJson(m_Min_width);
    }

    return val;
}

void VideoPropertyDefinitionResource::fromJson(web::json::value& val)
{
    this->PropertyDefinitionResource::fromJson(val);

    if(val.has_field(U("file_type")))
    {
        setFileType(ModelBase::stringFromJson(val[U("file_type")]));
    }
    if(val.has_field(U("max_height")))
    {
        setMaxHeight(ModelBase::int32_tFromJson(val[U("max_height")]));
    }
    if(val.has_field(U("max_length")))
    {
        setMaxLength(ModelBase::int32_tFromJson(val[U("max_length")]));
    }
    if(val.has_field(U("max_width")))
    {
        setMaxWidth(ModelBase::int32_tFromJson(val[U("max_width")]));
    }
    if(val.has_field(U("min_height")))
    {
        setMinHeight(ModelBase::int32_tFromJson(val[U("min_height")]));
    }
    if(val.has_field(U("min_length")))
    {
        setMinLength(ModelBase::int32_tFromJson(val[U("min_length")]));
    }
    if(val.has_field(U("min_width")))
    {
        setMinWidth(ModelBase::int32_tFromJson(val[U("min_width")]));
    }
}

void VideoPropertyDefinitionResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Field_listIsSet)
    {
        if (m_Field_list.get())
        {
            m_Field_list->toMultipart(multipart, U("field_list."));
        }
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("required"), m_Required));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
    if(m_File_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("file_type"), m_File_type));
        
    }
    if(m_Max_heightIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("max_height"), m_Max_height));
    }
    if(m_Max_lengthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("max_length"), m_Max_length));
    }
    if(m_Max_widthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("max_width"), m_Max_width));
    }
    if(m_Min_heightIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("min_height"), m_Min_height));
    }
    if(m_Min_lengthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("min_length"), m_Min_length));
    }
    if(m_Min_widthIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("min_width"), m_Min_width));
    }
}

void VideoPropertyDefinitionResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("field_list")))
    {
        if(multipart->hasContent(U("field_list")))
        {
            std::shared_ptr<PropertyFieldListResource> newItem(new PropertyFieldListResource());
            newItem->fromMultiPart(multipart, U("field_list."));
            setFieldList( newItem );
        }
    }
    setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
    setRequired(ModelBase::boolFromHttpContent(multipart->getContent(U("required"))));
    setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    if(multipart->hasContent(U("file_type")))
    {
        setFileType(ModelBase::stringFromHttpContent(multipart->getContent(U("file_type"))));
    }
    if(multipart->hasContent(U("max_height")))
    {
        setMaxHeight(ModelBase::int32_tFromHttpContent(multipart->getContent(U("max_height"))));
    }
    if(multipart->hasContent(U("max_length")))
    {
        setMaxLength(ModelBase::int32_tFromHttpContent(multipart->getContent(U("max_length"))));
    }
    if(multipart->hasContent(U("max_width")))
    {
        setMaxWidth(ModelBase::int32_tFromHttpContent(multipart->getContent(U("max_width"))));
    }
    if(multipart->hasContent(U("min_height")))
    {
        setMinHeight(ModelBase::int32_tFromHttpContent(multipart->getContent(U("min_height"))));
    }
    if(multipart->hasContent(U("min_length")))
    {
        setMinLength(ModelBase::int32_tFromHttpContent(multipart->getContent(U("min_length"))));
    }
    if(multipart->hasContent(U("min_width")))
    {
        setMinWidth(ModelBase::int32_tFromHttpContent(multipart->getContent(U("min_width"))));
    }
}

utility::string_t VideoPropertyDefinitionResource::getFileType() const
{
    return m_File_type;
}


void VideoPropertyDefinitionResource::setFileType(utility::string_t value)
{
    m_File_type = value;
    m_File_typeIsSet = true;
}
bool VideoPropertyDefinitionResource::fileTypeIsSet() const
{
    return m_File_typeIsSet;
}

void VideoPropertyDefinitionResource::unsetFile_type()
{
    m_File_typeIsSet = false;
}

int32_t VideoPropertyDefinitionResource::getMaxHeight() const
{
    return m_Max_height;
}


void VideoPropertyDefinitionResource::setMaxHeight(int32_t value)
{
    m_Max_height = value;
    m_Max_heightIsSet = true;
}
bool VideoPropertyDefinitionResource::maxHeightIsSet() const
{
    return m_Max_heightIsSet;
}

void VideoPropertyDefinitionResource::unsetMax_height()
{
    m_Max_heightIsSet = false;
}

int32_t VideoPropertyDefinitionResource::getMaxLength() const
{
    return m_Max_length;
}


void VideoPropertyDefinitionResource::setMaxLength(int32_t value)
{
    m_Max_length = value;
    m_Max_lengthIsSet = true;
}
bool VideoPropertyDefinitionResource::maxLengthIsSet() const
{
    return m_Max_lengthIsSet;
}

void VideoPropertyDefinitionResource::unsetMax_length()
{
    m_Max_lengthIsSet = false;
}

int32_t VideoPropertyDefinitionResource::getMaxWidth() const
{
    return m_Max_width;
}


void VideoPropertyDefinitionResource::setMaxWidth(int32_t value)
{
    m_Max_width = value;
    m_Max_widthIsSet = true;
}
bool VideoPropertyDefinitionResource::maxWidthIsSet() const
{
    return m_Max_widthIsSet;
}

void VideoPropertyDefinitionResource::unsetMax_width()
{
    m_Max_widthIsSet = false;
}

int32_t VideoPropertyDefinitionResource::getMinHeight() const
{
    return m_Min_height;
}


void VideoPropertyDefinitionResource::setMinHeight(int32_t value)
{
    m_Min_height = value;
    m_Min_heightIsSet = true;
}
bool VideoPropertyDefinitionResource::minHeightIsSet() const
{
    return m_Min_heightIsSet;
}

void VideoPropertyDefinitionResource::unsetMin_height()
{
    m_Min_heightIsSet = false;
}

int32_t VideoPropertyDefinitionResource::getMinLength() const
{
    return m_Min_length;
}


void VideoPropertyDefinitionResource::setMinLength(int32_t value)
{
    m_Min_length = value;
    m_Min_lengthIsSet = true;
}
bool VideoPropertyDefinitionResource::minLengthIsSet() const
{
    return m_Min_lengthIsSet;
}

void VideoPropertyDefinitionResource::unsetMin_length()
{
    m_Min_lengthIsSet = false;
}

int32_t VideoPropertyDefinitionResource::getMinWidth() const
{
    return m_Min_width;
}


void VideoPropertyDefinitionResource::setMinWidth(int32_t value)
{
    m_Min_width = value;
    m_Min_widthIsSet = true;
}
bool VideoPropertyDefinitionResource::minWidthIsSet() const
{
    return m_Min_widthIsSet;
}

void VideoPropertyDefinitionResource::unsetMin_width()
{
    m_Min_widthIsSet = false;
}

}
}
}
}

