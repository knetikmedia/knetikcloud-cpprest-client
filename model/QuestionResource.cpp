/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "QuestionResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

QuestionResource::QuestionResource()
{
    m_Additional_propertiesIsSet = false;
    m_AnswersIsSet = false;
    m_Created_date = 0;
    m_Created_dateIsSet = false;
    m_Difficulty = 0;
    m_Id = U("");
    m_IdIsSet = false;
    m_Import_id = 0;
    m_Import_idIsSet = false;
    m_Published_date = 0;
    m_Published_dateIsSet = false;
    m_Source1 = U("");
    m_Source1IsSet = false;
    m_Source2 = U("");
    m_Source2IsSet = false;
    m_TagsIsSet = false;
    m_Template = U("");
    m_TemplateIsSet = false;
    m_Updated_date = 0;
    m_Updated_dateIsSet = false;
    m_Vendor = U("");
    m_VendorIsSet = false;
    
}

QuestionResource::~QuestionResource()
{
}

void QuestionResource::validate()
{
    // TODO: implement validation
}

web::json::value QuestionResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Additional_propertiesIsSet)
    {
        val[U("additional_properties")] = ModelBase::toJson(m_Additional_properties);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Answers )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("answers")] = web::json::value::array(jsonArray);
        }
    }
    val[U("category")] = ModelBase::toJson(m_Category);
    if(m_Created_dateIsSet)
    {
        val[U("created_date")] = ModelBase::toJson(m_Created_date);
    }
    val[U("difficulty")] = ModelBase::toJson(m_Difficulty);
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_Import_idIsSet)
    {
        val[U("import_id")] = ModelBase::toJson(m_Import_id);
    }
    if(m_Published_dateIsSet)
    {
        val[U("published_date")] = ModelBase::toJson(m_Published_date);
    }
    val[U("question")] = ModelBase::toJson(m_Question);
    if(m_Source1IsSet)
    {
        val[U("source1")] = ModelBase::toJson(m_Source1);
    }
    if(m_Source2IsSet)
    {
        val[U("source2")] = ModelBase::toJson(m_Source2);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Tags )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("tags")] = web::json::value::array(jsonArray);
        }
    }
    if(m_TemplateIsSet)
    {
        val[U("template")] = ModelBase::toJson(m_Template);
    }
    if(m_Updated_dateIsSet)
    {
        val[U("updated_date")] = ModelBase::toJson(m_Updated_date);
    }
    if(m_VendorIsSet)
    {
        val[U("vendor")] = ModelBase::toJson(m_Vendor);
    }
    

    return val;
}

void QuestionResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("additional_properties")))
    {
        if(!val[U("additional_properties")].is_null())
        {
            std::map<utility::string_t, std::shared_ptr<Property>> newItem(std::map<utility::string_t, Property>());
            newItem->fromJson(val[U("additional_properties")]);
            setAdditionalProperties( newItem );
        }
        
    }
    {
        m_Answers.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("answers")))
        {
        for( auto& item : val[U("answers")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Answers.push_back( std::shared_ptr<AnswerResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<AnswerResource> newItem(new AnswerResource());
                newItem->fromJson(item);
                m_Answers.push_back( newItem );
            }
            
        }
        }
    }
    std::shared_ptr<NestedCategory> newCategory(new NestedCategory());
    newCategory->fromJson(val[U("category")]);
    setCategory( newItem );
    if(val.has_field(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromJson(val[U("created_date")]));
    }
    setDifficulty(ModelBase::int32_tFromJson(val[U("difficulty")]));
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
        
    }
    if(val.has_field(U("import_id")))
    {
        setImportId(ModelBase::int64_tFromJson(val[U("import_id")]));
    }
    if(val.has_field(U("published_date")))
    {
        setPublishedDate(ModelBase::int64_tFromJson(val[U("published_date")]));
    }
    std::shared_ptr<Property> newQuestion(new Property());
    newQuestion->fromJson(val[U("question")]);
    setQuestion( newItem );
    if(val.has_field(U("source1")))
    {
        setSource1(ModelBase::stringFromJson(val[U("source1")]));
        
    }
    if(val.has_field(U("source2")))
    {
        setSource2(ModelBase::stringFromJson(val[U("source2")]));
        
    }
    {
        m_Tags.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("tags")))
        {
        for( auto& item : val[U("tags")].as_array() )
        {
            m_Tags.push_back(ModelBase::stringFromJson(item));
            
        }
        }
    }
    if(val.has_field(U("template")))
    {
        setTemplate(ModelBase::stringFromJson(val[U("template")]));
        
    }
    if(val.has_field(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromJson(val[U("updated_date")]));
    }
    if(val.has_field(U("vendor")))
    {
        setVendor(ModelBase::stringFromJson(val[U("vendor")]));
        
    }
    
}

void QuestionResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Additional_propertiesIsSet)
    {
        if (m_Additional_properties.get())
        {
            m_Additional_properties->toMultipart(multipart, U("additional_properties."));
        }
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Answers )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("answers"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    m_Category->toMultipart(multipart, U("category."));
    if(m_Created_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_date"), m_Created_date));
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("difficulty"), m_Difficulty));
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    if(m_Import_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("import_id"), m_Import_id));
    }
    if(m_Published_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("published_date"), m_Published_date));
    }
    m_Question->toMultipart(multipart, U("question."));
    if(m_Source1IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("source1"), m_Source1));
        
    }
    if(m_Source2IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("source2"), m_Source2));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Tags )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("tags"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_TemplateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("template"), m_Template));
        
    }
    if(m_Updated_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_date"), m_Updated_date));
    }
    if(m_VendorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("vendor"), m_Vendor));
        
    }
    
}

void QuestionResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("additional_properties")))
    {
        if(multipart->hasContent(U("additional_properties")))
        {
            std::map<utility::string_t, std::shared_ptr<Property>> newItem(std::map<utility::string_t, Property>());
            newItem->fromMultiPart(multipart, U("additional_properties."));
            setAdditionalProperties( newItem );
        }
        
    }
    {
        m_Answers.clear();
        if(multipart->hasContent(U("answers")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("answers"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Answers.push_back( std::shared_ptr<AnswerResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<AnswerResource> newItem(new AnswerResource());
                newItem->fromJson(item);
                m_Answers.push_back( newItem );
            }
            
        }
        }
    }
    std::shared_ptr<NestedCategory> newCategory(new NestedCategory());
    newCategory->fromMultiPart(multipart, U("category."));
    setCategory( newCategory );
    if(multipart->hasContent(U("created_date")))
    {
        setCreatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("created_date"))));
    }
    setDifficulty(ModelBase::int32_tFromHttpContent(multipart->getContent(U("difficulty"))));
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
        
    }
    if(multipart->hasContent(U("import_id")))
    {
        setImportId(ModelBase::int64_tFromHttpContent(multipart->getContent(U("import_id"))));
    }
    if(multipart->hasContent(U("published_date")))
    {
        setPublishedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("published_date"))));
    }
    std::shared_ptr<Property> newQuestion(new Property());
    newQuestion->fromMultiPart(multipart, U("question."));
    setQuestion( newQuestion );
    if(multipart->hasContent(U("source1")))
    {
        setSource1(ModelBase::stringFromHttpContent(multipart->getContent(U("source1"))));
        
    }
    if(multipart->hasContent(U("source2")))
    {
        setSource2(ModelBase::stringFromHttpContent(multipart->getContent(U("source2"))));
        
    }
    {
        m_Tags.clear();
        if(multipart->hasContent(U("tags")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("tags"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Tags.push_back(ModelBase::stringFromJson(item));
            
        }
        }
    }
    if(multipart->hasContent(U("template")))
    {
        setTemplate(ModelBase::stringFromHttpContent(multipart->getContent(U("template"))));
        
    }
    if(multipart->hasContent(U("updated_date")))
    {
        setUpdatedDate(ModelBase::int64_tFromHttpContent(multipart->getContent(U("updated_date"))));
    }
    if(multipart->hasContent(U("vendor")))
    {
        setVendor(ModelBase::stringFromHttpContent(multipart->getContent(U("vendor"))));
        
    }
    
}


std::map<utility::string_t, std::shared_ptr<Property>>& QuestionResource::getAdditionalProperties()
{
    return m_Additional_properties;
}
bool QuestionResource::additional_propertiesIsSet() const
{
    return m_Additional_propertiesIsSet;
}
void QuestionResource::unsetAdditional_properties()
{
    m_Additional_propertiesIsSet = false;
}
std::vector<std::shared_ptr<AnswerResource>>& QuestionResource::getAnswers()
{
    return m_Answers;
}
bool QuestionResource::answersIsSet() const
{
    return m_AnswersIsSet;
}
void QuestionResource::unsetAnswers()
{
    m_AnswersIsSet = false;
}
std::shared_ptr<NestedCategory> QuestionResource::getCategory() const
{
    return m_Category;
}
void QuestionResource::setCategory(std::shared_ptr<NestedCategory> value)
{
    m_Category = value;
    
}
int64_t QuestionResource::getCreatedDate() const
{
    return m_Created_date;
}
void QuestionResource::setCreatedDate(int64_t value)
{
    m_Created_date = value;
    m_Created_dateIsSet = true;
}
bool QuestionResource::created_dateIsSet() const
{
    return m_Created_dateIsSet;
}
void QuestionResource::unsetCreated_date()
{
    m_Created_dateIsSet = false;
}
int32_t QuestionResource::getDifficulty() const
{
    return m_Difficulty;
}
void QuestionResource::setDifficulty(int32_t value)
{
    m_Difficulty = value;
    
}
utility::string_t QuestionResource::getId() const
{
    return m_Id;
}
void QuestionResource::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool QuestionResource::idIsSet() const
{
    return m_IdIsSet;
}
void QuestionResource::unsetId()
{
    m_IdIsSet = false;
}
int64_t QuestionResource::getImportId() const
{
    return m_Import_id;
}
void QuestionResource::setImportId(int64_t value)
{
    m_Import_id = value;
    m_Import_idIsSet = true;
}
bool QuestionResource::import_idIsSet() const
{
    return m_Import_idIsSet;
}
void QuestionResource::unsetImport_id()
{
    m_Import_idIsSet = false;
}
int64_t QuestionResource::getPublishedDate() const
{
    return m_Published_date;
}
void QuestionResource::setPublishedDate(int64_t value)
{
    m_Published_date = value;
    m_Published_dateIsSet = true;
}
bool QuestionResource::published_dateIsSet() const
{
    return m_Published_dateIsSet;
}
void QuestionResource::unsetPublished_date()
{
    m_Published_dateIsSet = false;
}
std::shared_ptr<Property> QuestionResource::getQuestion() const
{
    return m_Question;
}
void QuestionResource::setQuestion(std::shared_ptr<Property> value)
{
    m_Question = value;
    
}
utility::string_t QuestionResource::getSource1() const
{
    return m_Source1;
}
void QuestionResource::setSource1(utility::string_t value)
{
    m_Source1 = value;
    m_Source1IsSet = true;
}
bool QuestionResource::source1IsSet() const
{
    return m_Source1IsSet;
}
void QuestionResource::unsetSource1()
{
    m_Source1IsSet = false;
}
utility::string_t QuestionResource::getSource2() const
{
    return m_Source2;
}
void QuestionResource::setSource2(utility::string_t value)
{
    m_Source2 = value;
    m_Source2IsSet = true;
}
bool QuestionResource::source2IsSet() const
{
    return m_Source2IsSet;
}
void QuestionResource::unsetSource2()
{
    m_Source2IsSet = false;
}
std::vector<utility::string_t>& QuestionResource::getTags()
{
    return m_Tags;
}
bool QuestionResource::tagsIsSet() const
{
    return m_TagsIsSet;
}
void QuestionResource::unsetTags()
{
    m_TagsIsSet = false;
}
utility::string_t QuestionResource::getTemplate() const
{
    return m_Template;
}
void QuestionResource::setTemplate(utility::string_t value)
{
    m_Template = value;
    m_TemplateIsSet = true;
}
bool QuestionResource::templateIsSet() const
{
    return m_TemplateIsSet;
}
void QuestionResource::unsetTemplate()
{
    m_TemplateIsSet = false;
}
int64_t QuestionResource::getUpdatedDate() const
{
    return m_Updated_date;
}
void QuestionResource::setUpdatedDate(int64_t value)
{
    m_Updated_date = value;
    m_Updated_dateIsSet = true;
}
bool QuestionResource::updated_dateIsSet() const
{
    return m_Updated_dateIsSet;
}
void QuestionResource::unsetUpdated_date()
{
    m_Updated_dateIsSet = false;
}
utility::string_t QuestionResource::getVendor() const
{
    return m_Vendor;
}
void QuestionResource::setVendor(utility::string_t value)
{
    m_Vendor = value;
    m_VendorIsSet = true;
}
bool QuestionResource::vendorIsSet() const
{
    return m_VendorIsSet;
}
void QuestionResource::unsetVendor()
{
    m_VendorIsSet = false;
}

}
}
}
}

