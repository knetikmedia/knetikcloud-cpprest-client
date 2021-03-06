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



#include "PageResource«WalletTransactionResource».h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

PageResource«WalletTransactionResource»::PageResource«WalletTransactionResource»()
{
    m_ContentIsSet = false;
    m_First = false;
    m_FirstIsSet = false;
    m_Last = false;
    m_LastIsSet = false;
    m_number = 0;
    m_numberIsSet = false;
    m_Number_of_elements = 0;
    m_Number_of_elementsIsSet = false;
    m_Size = 0;
    m_SizeIsSet = false;
    m_SortIsSet = false;
    m_Total_elements = 0L;
    m_Total_elementsIsSet = false;
    m_Total_pages = 0;
    m_Total_pagesIsSet = false;
}

PageResource«WalletTransactionResource»::~PageResource«WalletTransactionResource»()
{
}

void PageResource«WalletTransactionResource»::validate()
{
    // TODO: implement validation
}

web::json::value PageResource«WalletTransactionResource»::toJson() const
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
    if(m_numberIsSet)
    {
        val[U("number")] = ModelBase::toJson(m_number);
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

void PageResource«WalletTransactionResource»::fromJson(web::json::value& val)
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
                m_Content.push_back( std::shared_ptr<WalletTransactionResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<WalletTransactionResource> newItem(new WalletTransactionResource());
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

void PageResource«WalletTransactionResource»::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_numberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("number"), m_number));
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

void PageResource«WalletTransactionResource»::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
                m_Content.push_back( std::shared_ptr<WalletTransactionResource>(nullptr) );
            }
            else
            {
                std::shared_ptr<WalletTransactionResource> newItem(new WalletTransactionResource());
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

std::vector<std::shared_ptr<WalletTransactionResource>>& PageResource«WalletTransactionResource»::getContent()
{
    return m_Content;
}

void PageResource«WalletTransactionResource»::setContent(std::vector<std::shared_ptr<WalletTransactionResource>> value)
{
    m_Content = value;
    m_ContentIsSet = true;
}
bool PageResource«WalletTransactionResource»::contentIsSet() const
{
    return m_ContentIsSet;
}

void PageResource«WalletTransactionResource»::unsetContent()
{
    m_ContentIsSet = false;
}

bool PageResource«WalletTransactionResource»::getFirst() const
{
    return m_First;
}


void PageResource«WalletTransactionResource»::setFirst(bool value)
{
    m_First = value;
    m_FirstIsSet = true;
}
bool PageResource«WalletTransactionResource»::firstIsSet() const
{
    return m_FirstIsSet;
}

void PageResource«WalletTransactionResource»::unsetFirst()
{
    m_FirstIsSet = false;
}

bool PageResource«WalletTransactionResource»::getLast() const
{
    return m_Last;
}


void PageResource«WalletTransactionResource»::setLast(bool value)
{
    m_Last = value;
    m_LastIsSet = true;
}
bool PageResource«WalletTransactionResource»::lastIsSet() const
{
    return m_LastIsSet;
}

void PageResource«WalletTransactionResource»::unsetLast()
{
    m_LastIsSet = false;
}

int32_t PageResource«WalletTransactionResource»::getNumber() const
{
    return m_number;
}


void PageResource«WalletTransactionResource»::setNumber(int32_t value)
{
    m_number = value;
    m_numberIsSet = true;
}
bool PageResource«WalletTransactionResource»::numberIsSet() const
{
    return m_numberIsSet;
}

void PageResource«WalletTransactionResource»::unsetnumber()
{
    m_numberIsSet = false;
}

int32_t PageResource«WalletTransactionResource»::getNumberOfElements() const
{
    return m_Number_of_elements;
}


void PageResource«WalletTransactionResource»::setNumberOfElements(int32_t value)
{
    m_Number_of_elements = value;
    m_Number_of_elementsIsSet = true;
}
bool PageResource«WalletTransactionResource»::numberOfElementsIsSet() const
{
    return m_Number_of_elementsIsSet;
}

void PageResource«WalletTransactionResource»::unsetNumber_of_elements()
{
    m_Number_of_elementsIsSet = false;
}

int32_t PageResource«WalletTransactionResource»::getSize() const
{
    return m_Size;
}


void PageResource«WalletTransactionResource»::setSize(int32_t value)
{
    m_Size = value;
    m_SizeIsSet = true;
}
bool PageResource«WalletTransactionResource»::sizeIsSet() const
{
    return m_SizeIsSet;
}

void PageResource«WalletTransactionResource»::unsetSize()
{
    m_SizeIsSet = false;
}

std::vector<std::shared_ptr<Order>>& PageResource«WalletTransactionResource»::getSort()
{
    return m_Sort;
}

void PageResource«WalletTransactionResource»::setSort(std::vector<std::shared_ptr<Order>> value)
{
    m_Sort = value;
    m_SortIsSet = true;
}
bool PageResource«WalletTransactionResource»::sortIsSet() const
{
    return m_SortIsSet;
}

void PageResource«WalletTransactionResource»::unsetSort()
{
    m_SortIsSet = false;
}

int64_t PageResource«WalletTransactionResource»::getTotalElements() const
{
    return m_Total_elements;
}


void PageResource«WalletTransactionResource»::setTotalElements(int64_t value)
{
    m_Total_elements = value;
    m_Total_elementsIsSet = true;
}
bool PageResource«WalletTransactionResource»::totalElementsIsSet() const
{
    return m_Total_elementsIsSet;
}

void PageResource«WalletTransactionResource»::unsetTotal_elements()
{
    m_Total_elementsIsSet = false;
}

int32_t PageResource«WalletTransactionResource»::getTotalPages() const
{
    return m_Total_pages;
}


void PageResource«WalletTransactionResource»::setTotalPages(int32_t value)
{
    m_Total_pages = value;
    m_Total_pagesIsSet = true;
}
bool PageResource«WalletTransactionResource»::totalPagesIsSet() const
{
    return m_Total_pagesIsSet;
}

void PageResource«WalletTransactionResource»::unsetTotal_pages()
{
    m_Total_pagesIsSet = false;
}

}
}
}
}

