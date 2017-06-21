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



#include "PageResource«RevenueCountryReportResource».h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

PageResource«RevenueCountryReportResource»::PageResource«RevenueCountryReportResource»()
{
    m_ContentIsSet = false;
    m_First = false;
    m_FirstIsSet = false;
    m_Last = false;
    m_LastIsSet = false;
    m_Number = 0;
    m_NumberIsSet = false;
    m_Number_of_elements = 0;
    m_Number_of_elementsIsSet = false;
    m_Size = 0;
    m_SizeIsSet = false;
    m_SortIsSet = false;
    m_Total_elements = 0;
    m_Total_elementsIsSet = false;
    m_Total_pages = 0;
    m_Total_pagesIsSet = false;
    
}

PageResource«RevenueCountryReportResource»::~PageResource«RevenueCountryReportResource»()
{
}

void PageResource«RevenueCountryReportResource»::validate()
{
    // TODO: implement validation
}

web::json::value PageResource«RevenueCountryReportResource»::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Content )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("content")] = web::json::value::array(jsonArray);
        }
    }
    if(m_FirstIsSet)
    {
        val[U("first")] = ModelBase::toJson(m_First);
    }
    if(m_LastIsSet)
    {
        val[U("last")] = ModelBase::toJson(m_Last);
    }
    if(m_NumberIsSet)
    {
        val[U("number")] = ModelBase::toJson(m_Number);
    }
    if(m_Number_of_elementsIsSet)
    {
        val[U("number_of_elements")] = ModelBase::toJson(m_Number_of_elements);
    }
    if(m_SizeIsSet)
    {
        val[U("size")] = ModelBase::toJson(m_Size);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Sort )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("sort")] = web::json::value::array(jsonArray);
        }
    }
    if(m_Total_elementsIsSet)
    {
        val[U("total_elements")] = ModelBase::toJson(m_Total_elements);
    }
    if(m_Total_pagesIsSet)
    {
        val[U("total_pages")] = ModelBase::toJson(m_Total_pages);
    }
    

    return val;
}

void PageResource«RevenueCountryReportResource»::fromJson(web::json::value& val)
{
    {
        m_Content.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("content")))
        {
        for( auto& item : val[U("content")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Content.push_back( std::shared_ptr<RevenueCountryReportResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<RevenueCountryReportResource> newItem(new RevenueCountryReportResource());
                newItem->fromJson(item);
                m_Content.push_back( newItem );
            }
            
        }
        }
    }
    if(val.has_field(U("first")))
    {
        setFirst(ModelBase::boolFromJson(val[U("first")]));
    }
    if(val.has_field(U("last")))
    {
        setLast(ModelBase::boolFromJson(val[U("last")]));
    }
    if(val.has_field(U("number")))
    {
        setNumber(ModelBase::int32_tFromJson(val[U("number")]));
    }
    if(val.has_field(U("number_of_elements")))
    {
        setNumberOfElements(ModelBase::int32_tFromJson(val[U("number_of_elements")]));
    }
    if(val.has_field(U("size")))
    {
        setSize(ModelBase::int32_tFromJson(val[U("size")]));
    }
    {
        m_Sort.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("sort")))
        {
        for( auto& item : val[U("sort")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Sort.push_back( std::shared_ptr<Order>(nullptr) );
            }
            else
            {
                std::shared_ptr<Order> newItem(new Order());
                newItem->fromJson(item);
                m_Sort.push_back( newItem );
            }
            
        }
        }
    }
    if(val.has_field(U("total_elements")))
    {
        setTotalElements(ModelBase::int64_tFromJson(val[U("total_elements")]));
    }
    if(val.has_field(U("total_pages")))
    {
        setTotalPages(ModelBase::int32_tFromJson(val[U("total_pages")]));
    }
    
}

void PageResource«RevenueCountryReportResource»::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Content )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("content"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_FirstIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("first"), m_First));
    }
    if(m_LastIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("last"), m_Last));
    }
    if(m_NumberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("number"), m_Number));
    }
    if(m_Number_of_elementsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("number_of_elements"), m_Number_of_elements));
    }
    if(m_SizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("size"), m_Size));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Sort )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("sort"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_Total_elementsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("total_elements"), m_Total_elements));
    }
    if(m_Total_pagesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("total_pages"), m_Total_pages));
    }
    
}

void PageResource«RevenueCountryReportResource»::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        m_Content.clear();
        if(multipart->hasContent(U("content")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("content"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Content.push_back( std::shared_ptr<RevenueCountryReportResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<RevenueCountryReportResource> newItem(new RevenueCountryReportResource());
                newItem->fromJson(item);
                m_Content.push_back( newItem );
            }
            
        }
        }
    }
    if(multipart->hasContent(U("first")))
    {
        setFirst(ModelBase::boolFromHttpContent(multipart->getContent(U("first"))));
    }
    if(multipart->hasContent(U("last")))
    {
        setLast(ModelBase::boolFromHttpContent(multipart->getContent(U("last"))));
    }
    if(multipart->hasContent(U("number")))
    {
        setNumber(ModelBase::int32_tFromHttpContent(multipart->getContent(U("number"))));
    }
    if(multipart->hasContent(U("number_of_elements")))
    {
        setNumberOfElements(ModelBase::int32_tFromHttpContent(multipart->getContent(U("number_of_elements"))));
    }
    if(multipart->hasContent(U("size")))
    {
        setSize(ModelBase::int32_tFromHttpContent(multipart->getContent(U("size"))));
    }
    {
        m_Sort.clear();
        if(multipart->hasContent(U("sort")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("sort"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Sort.push_back( std::shared_ptr<Order>(nullptr) );
            }
            else
            {
                std::shared_ptr<Order> newItem(new Order());
                newItem->fromJson(item);
                m_Sort.push_back( newItem );
            }
            
        }
        }
    }
    if(multipart->hasContent(U("total_elements")))
    {
        setTotalElements(ModelBase::int64_tFromHttpContent(multipart->getContent(U("total_elements"))));
    }
    if(multipart->hasContent(U("total_pages")))
    {
        setTotalPages(ModelBase::int32_tFromHttpContent(multipart->getContent(U("total_pages"))));
    }
    
}


std::vector<std::shared_ptr<RevenueCountryReportResource>>& PageResource«RevenueCountryReportResource»::getContent()
{
    return m_Content;
}
bool PageResource«RevenueCountryReportResource»::contentIsSet() const
{
    return m_ContentIsSet;
}
void PageResource«RevenueCountryReportResource»::unsetContent()
{
    m_ContentIsSet = false;
}
bool PageResource«RevenueCountryReportResource»::getFirst() const
{
    return m_First;
}
void PageResource«RevenueCountryReportResource»::setFirst(bool value)
{
    m_First = value;
    m_FirstIsSet = true;
}
bool PageResource«RevenueCountryReportResource»::firstIsSet() const
{
    return m_FirstIsSet;
}
void PageResource«RevenueCountryReportResource»::unsetFirst()
{
    m_FirstIsSet = false;
}
bool PageResource«RevenueCountryReportResource»::getLast() const
{
    return m_Last;
}
void PageResource«RevenueCountryReportResource»::setLast(bool value)
{
    m_Last = value;
    m_LastIsSet = true;
}
bool PageResource«RevenueCountryReportResource»::lastIsSet() const
{
    return m_LastIsSet;
}
void PageResource«RevenueCountryReportResource»::unsetLast()
{
    m_LastIsSet = false;
}
int32_t PageResource«RevenueCountryReportResource»::getNumber() const
{
    return m_Number;
}
void PageResource«RevenueCountryReportResource»::setNumber(int32_t value)
{
    m_Number = value;
    m_NumberIsSet = true;
}
bool PageResource«RevenueCountryReportResource»::numberIsSet() const
{
    return m_NumberIsSet;
}
void PageResource«RevenueCountryReportResource»::unsetNumber()
{
    m_NumberIsSet = false;
}
int32_t PageResource«RevenueCountryReportResource»::getNumberOfElements() const
{
    return m_Number_of_elements;
}
void PageResource«RevenueCountryReportResource»::setNumberOfElements(int32_t value)
{
    m_Number_of_elements = value;
    m_Number_of_elementsIsSet = true;
}
bool PageResource«RevenueCountryReportResource»::number_of_elementsIsSet() const
{
    return m_Number_of_elementsIsSet;
}
void PageResource«RevenueCountryReportResource»::unsetNumber_of_elements()
{
    m_Number_of_elementsIsSet = false;
}
int32_t PageResource«RevenueCountryReportResource»::getSize() const
{
    return m_Size;
}
void PageResource«RevenueCountryReportResource»::setSize(int32_t value)
{
    m_Size = value;
    m_SizeIsSet = true;
}
bool PageResource«RevenueCountryReportResource»::sizeIsSet() const
{
    return m_SizeIsSet;
}
void PageResource«RevenueCountryReportResource»::unsetSize()
{
    m_SizeIsSet = false;
}
std::vector<std::shared_ptr<Order>>& PageResource«RevenueCountryReportResource»::getSort()
{
    return m_Sort;
}
bool PageResource«RevenueCountryReportResource»::sortIsSet() const
{
    return m_SortIsSet;
}
void PageResource«RevenueCountryReportResource»::unsetSort()
{
    m_SortIsSet = false;
}
int64_t PageResource«RevenueCountryReportResource»::getTotalElements() const
{
    return m_Total_elements;
}
void PageResource«RevenueCountryReportResource»::setTotalElements(int64_t value)
{
    m_Total_elements = value;
    m_Total_elementsIsSet = true;
}
bool PageResource«RevenueCountryReportResource»::total_elementsIsSet() const
{
    return m_Total_elementsIsSet;
}
void PageResource«RevenueCountryReportResource»::unsetTotal_elements()
{
    m_Total_elementsIsSet = false;
}
int32_t PageResource«RevenueCountryReportResource»::getTotalPages() const
{
    return m_Total_pages;
}
void PageResource«RevenueCountryReportResource»::setTotalPages(int32_t value)
{
    m_Total_pages = value;
    m_Total_pagesIsSet = true;
}
bool PageResource«RevenueCountryReportResource»::total_pagesIsSet() const
{
    return m_Total_pagesIsSet;
}
void PageResource«RevenueCountryReportResource»::unsetTotal_pages()
{
    m_Total_pagesIsSet = false;
}

}
}
}
}

