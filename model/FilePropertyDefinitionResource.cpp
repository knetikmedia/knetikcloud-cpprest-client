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



#include "FilePropertyDefinitionResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

FilePropertyDefinitionResource::FilePropertyDefinitionResource()
{
    m_File_type = U("");
    m_File_typeIsSet = false;
    m_Max_file_size = 0L;
    m_Max_file_sizeIsSet = false;
}

FilePropertyDefinitionResource::~FilePropertyDefinitionResource()
{
}

void FilePropertyDefinitionResource::validate()
{
    // TODO: implement validation
}

web::json::value FilePropertyDefinitionResource::toJson() const
{
    web::json::value val = this->PropertyDefinitionResource::toJson();

    if(m_File_typeIsSet)
    {
        val[U("file_type")] = ModelBase::toJson(m_File_type);
    }
    if(m_Max_file_sizeIsSet)
    {
        val[U("max_file_size")] = ModelBase::toJson(m_Max_file_size);
    }

    return val;
}

void FilePropertyDefinitionResource::fromJson(web::json::value& val)
{
    this->PropertyDefinitionResource::fromJson(val);

    if(val.has_field(U("file_type")))
    {
        setFileType(ModelBase::stringFromJson(val[U("file_type")]));
    }
    if(val.has_field(U("max_file_size")))
    {
        setMaxFileSize(ModelBase::int64_tFromJson(val[U("max_file_size")]));
    }
}

void FilePropertyDefinitionResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Max_file_sizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("max_file_size"), m_Max_file_size));
    }
}

void FilePropertyDefinitionResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(U("max_file_size")))
    {
        setMaxFileSize(ModelBase::int64_tFromHttpContent(multipart->getContent(U("max_file_size"))));
    }
}

utility::string_t FilePropertyDefinitionResource::getFileType() const
{
    return m_File_type;
}


void FilePropertyDefinitionResource::setFileType(utility::string_t value)
{
    m_File_type = value;
    m_File_typeIsSet = true;
}
bool FilePropertyDefinitionResource::fileTypeIsSet() const
{
    return m_File_typeIsSet;
}

void FilePropertyDefinitionResource::unsetFile_type()
{
    m_File_typeIsSet = false;
}

int64_t FilePropertyDefinitionResource::getMaxFileSize() const
{
    return m_Max_file_size;
}


void FilePropertyDefinitionResource::setMaxFileSize(int64_t value)
{
    m_Max_file_size = value;
    m_Max_file_sizeIsSet = true;
}
bool FilePropertyDefinitionResource::maxFileSizeIsSet() const
{
    return m_Max_file_sizeIsSet;
}

void FilePropertyDefinitionResource::unsetMax_file_size()
{
    m_Max_file_sizeIsSet = false;
}

}
}
}
}
