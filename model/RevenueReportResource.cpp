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



#include "RevenueReportResource.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

RevenueReportResource::RevenueReportResource()
{
    m_Customer_count = 0;
    m_Customer_countIsSet = false;
    m_Sale_count = 0;
    m_Sale_countIsSet = false;
    m_Sales_average = 0.0;
    m_Sales_averageIsSet = false;
    m_Sales_total = 0.0;
    m_Sales_totalIsSet = false;
    
}

RevenueReportResource::~RevenueReportResource()
{
}

void RevenueReportResource::validate()
{
    // TODO: implement validation
}

web::json::value RevenueReportResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Customer_countIsSet)
    {
        val[U("customer_count")] = ModelBase::toJson(m_Customer_count);
    }
    if(m_Sale_countIsSet)
    {
        val[U("sale_count")] = ModelBase::toJson(m_Sale_count);
    }
    if(m_Sales_averageIsSet)
    {
        val[U("sales_average")] = ModelBase::toJson(m_Sales_average);
    }
    if(m_Sales_totalIsSet)
    {
        val[U("sales_total")] = ModelBase::toJson(m_Sales_total);
    }
    

    return val;
}

void RevenueReportResource::fromJson(web::json::value& val)
{
    if(val.has_field(U("customer_count")))
    {
        setCustomerCount(ModelBase::int64_tFromJson(val[U("customer_count")]));
    }
    if(val.has_field(U("sale_count")))
    {
        setSaleCount(ModelBase::int64_tFromJson(val[U("sale_count")]));
    }
    if(val.has_field(U("sales_average")))
    {
        setSalesAverage(ModelBase::doubleFromJson(val[U("sales_average")]));
    }
    if(val.has_field(U("sales_total")))
    {
        setSalesTotal(ModelBase::doubleFromJson(val[U("sales_total")]));
    }
    
}

void RevenueReportResource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Customer_countIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("customer_count"), m_Customer_count));
    }
    if(m_Sale_countIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("sale_count"), m_Sale_count));
    }
    if(m_Sales_averageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("sales_average"), m_Sales_average));
    }
    if(m_Sales_totalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("sales_total"), m_Sales_total));
    }
    
}

void RevenueReportResource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("customer_count")))
    {
        setCustomerCount(ModelBase::int64_tFromHttpContent(multipart->getContent(U("customer_count"))));
    }
    if(multipart->hasContent(U("sale_count")))
    {
        setSaleCount(ModelBase::int64_tFromHttpContent(multipart->getContent(U("sale_count"))));
    }
    if(multipart->hasContent(U("sales_average")))
    {
        setSalesAverage(ModelBase::doubleFromHttpContent(multipart->getContent(U("sales_average"))));
    }
    if(multipart->hasContent(U("sales_total")))
    {
        setSalesTotal(ModelBase::doubleFromHttpContent(multipart->getContent(U("sales_total"))));
    }
    
}


int64_t RevenueReportResource::getCustomerCount() const
{
    return m_Customer_count;
}
void RevenueReportResource::setCustomerCount(int64_t value)
{
    m_Customer_count = value;
    m_Customer_countIsSet = true;
}
bool RevenueReportResource::customer_countIsSet() const
{
    return m_Customer_countIsSet;
}
void RevenueReportResource::unsetCustomer_count()
{
    m_Customer_countIsSet = false;
}
int64_t RevenueReportResource::getSaleCount() const
{
    return m_Sale_count;
}
void RevenueReportResource::setSaleCount(int64_t value)
{
    m_Sale_count = value;
    m_Sale_countIsSet = true;
}
bool RevenueReportResource::sale_countIsSet() const
{
    return m_Sale_countIsSet;
}
void RevenueReportResource::unsetSale_count()
{
    m_Sale_countIsSet = false;
}
double RevenueReportResource::getSalesAverage() const
{
    return m_Sales_average;
}
void RevenueReportResource::setSalesAverage(double value)
{
    m_Sales_average = value;
    m_Sales_averageIsSet = true;
}
bool RevenueReportResource::sales_averageIsSet() const
{
    return m_Sales_averageIsSet;
}
void RevenueReportResource::unsetSales_average()
{
    m_Sales_averageIsSet = false;
}
double RevenueReportResource::getSalesTotal() const
{
    return m_Sales_total;
}
void RevenueReportResource::setSalesTotal(double value)
{
    m_Sales_total = value;
    m_Sales_totalIsSet = true;
}
bool RevenueReportResource::sales_totalIsSet() const
{
    return m_Sales_totalIsSet;
}
void RevenueReportResource::unsetSales_total()
{
    m_Sales_totalIsSet = false;
}

}
}
}
}
